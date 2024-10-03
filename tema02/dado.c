#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]){
    int dado, num_caras;

    printf("argc: %d\n", argc);
    printf("argv: %s\n ", argv[0] );
    printf("argv: %s\n ", argv[1] );

    srand(time(NULL));

    // obtener num caras
    num_caras = atoi(argv[1]);

    // generar 100 aleatorios entre 1 y num caras
    for( int i = 0; i < 100; i++) { 
        dado = rand() % num_caras + 1;
        printf("%d ", dado);
    } 
    printf("\n");
    //printf("%d\n ", rand() % 6 + 1);
    return 0;
} 


