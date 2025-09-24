#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "simula.h"

struct coor {
    int x, y;
};
struct coor posicion_actual;
struct coor base;

void guardar_posicion_actual() {
    sensor_t estado = rmb_state();
    posicion_actual.x = estado.x;
    posicion_actual.y = estado.y;
    
}
void cargar(){
    if (rmb_at_base()) {
        while (rmb_battery() < 250) 
            rmb_load(); // recarga batería en la base
        
    }
} 
void ir_a_base() {
    while (!rmb_at_base()) {
        float angle =  M_PI;
        rmb_forward();
        if (rmb_ifr() > 0) {
            rmb_clean();
        }
    }
    cargar();
    
}


void moverse() {
    if (rmb_bumper()) {
        float angle = (float)rand() / RAND_MAX * 2 * M_PI; // gira angulos aleatorios
        rmb_turn(angle);
    } else {
        rmb_forward();
    }
    if (rmb_ifr() > 0) {
        rmb_clean();
    }
}


void ir_a_basee() { 
    sensor_t estado = rmb_state();
   
    if (estado.head != M_PI) { // si no estas mirando hacia la izquierda lo ajusta
        rmb_turn(M_PI - estado.head); 
    }
    while (estado.x > 1) { // moverse mientras x > 1
        rmb_forward(); // avanza un paso
        if (rmb_ifr() > 0) {
            rmb_clean(); // limpia 
        }
        estado = rmb_state(); // actualiza la posición actual   
    }
}

void on_start() {
    rmb_awake(&base.x, &base.y);
}

void cyclic_behav() {
    moverse();
    if (rmb_battery() < 250) {
        printf("out of batery\n");
        guardar_posicion_actual();   // guarda la posición actual
        //ir_a_basee();      // va hacia la pared izquierda
        printf("pared encontrada\n");
        //ir_a_base(); 
        printf("batery recovered\n");
        
    } 
    moverse();
    
}

void on_stop() {
    visualize();
}


int main(int argc, char *argv[]) {
    if (argc > 1) {
        load_map(argv[1]);
    }
    configure(on_start, cyclic_behav, on_stop, 2500);
    run();
    return 0;
}