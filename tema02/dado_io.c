#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int dado, num_caras;

    srand(time(NULL));

    // pedir num caras
    printf("Num caras: ");
    scanf("%d", &num_caras);

    // generar 100 aleatorios entre 1 y num caras
    for( int i = 0; i < 100; i++) { 
        dado = rand() % num_caras + 1;
        printf("%d ", dado);
    } 
    printf("\n");
    //printf("%d\n ", rand() % 6 + 1);
    return 0;
} 


