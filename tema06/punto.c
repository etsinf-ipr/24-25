// puntos en un plano 2D

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct punto{
    float x;
    float y;
};

void print_punto(struct punto p){
    printf("(%.2f, %.2f)\n", p.x, p.y);
    p.x = 7;
}
void aleatorio(struct punto *p){
    p->x = (float)rand() / (float)RAND_MAX;
    p->y = (float)rand() / (float)RAND_MAX;
}

struct punto prandom(int minimo, int maximo){
    struct punto p;
    // rand() % <num opciones> + <valor inicial>
    p.x = rand()%(maximo - minimo) + minimo;  
    p.y = rand()%(maximo - minimo) + minimo;
    return p;
} 

int lanzar(int ncaras){
    int dado;
    dado = rand() % 6 + 1;
    return dado;
}

int main() {
    struct punto p;

    srand(time(NULL));
    //rand(); para eliminar el primer aleatorio
    // crear un punto al azar (entre 0 y 1)
    aleatorio(&p);
    //(x,y) con 2 decimales
    print_punto(p);

    // genera un punto (x,y) con coord enteras entre min y max
    p = prandom(100, 200);
    //(x,y) con 2 decimales
    print_punto(p);

    return 0;
}
