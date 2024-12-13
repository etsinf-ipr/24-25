#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "simula.h"

#define M_PI_8 M_PI_4 / 2
int basex, basey;


void inicio(){
    int x, y;
    char ch;
    rmb_awake(&basex, &basey);
    printf("Pulsa [Enter] para empezar ");
    scanf("%c", &ch);
}  

void fin(){
    char ch;
    printf("Simulacion completa\n  ");
    printf("Pulsa [Enter] para salir ");
    scanf("%c" , &ch);
    visualize();
} 

void moverse_normal(){
    rmb_forward();
    if(rmb_bumper())
        rmb_turn(M_PI_2);
    if(rmb_ifr() > 0)
        rmb_clean();
} 

void vuelve_corriendo(){
    rmb_forward();
    if(rmb_bumper())
        rmb_turn(M_PI_2);
    if(rmb_at_base())
        //cargar
} 

void ciclo(){
    moverse_normal();
    if(rmb_battery() < 200)
    vuelve_corriendo();
} 


int main(int argc, char *argv[]){
    if(argc > 1)
        load_map(argv[1] );
    configure(inicio, ciclo, fin, 200);
    run();
} 