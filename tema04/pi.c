#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[]){

    int npuntos, dentro = 0;
    float x, y;

    // inicializo numeros aleatoriods (una vez)
    srand(time(NULL));
    // obtengo el número de puntos
    npuntos = atoi(argv[1]);
    //printf("npuntos: %d\n ", npuntos);

    //repetir npuntos veces
    for(int i = 0; i < npuntos; i++){ 
        //generar x e y
        //OJO: la formula tiene que generar números entre -0.5 y 0.5
        // para que el centro del círculo esté en el punto (0,0)
        x = rand() / (float)RAND_MAX - 0.5;
        y = rand() / (float)RAND_MAX - 0.5;
        //printf("%f, %f\n", x, y);
        // si está dentro, sumar 1 a la num de puntos
        // x2 + y2 = r2 (para un circulo centrado en (0,0))
        if ( (x*x + y*y) <= 0.25 )
            dentro++;
    } 
    
    // calcular pi
    float pi = 4.0 * (float)dentro / npuntos;
    printf("pi: %f\n ", pi);
    return 0;
} 