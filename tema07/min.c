// obtiene el minimo de un vector de enteros 
//generado al azar entre 0 y 99 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define VALORES 5
                                           
int main() {
    int num[VALORES]; 

    int min = 100;
    srand(time(NULL));
    // generar n enteros al azar
    printf("Generando valores...");
    for(int i = 0; i<VALORES; i++){
        num[i] = rand() % 100;
    }
    printf("hecho\n");
    // mostrar vector
    for(int i = 0; i< VALORES; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    // obtener el mínimo
    for(int i = 0; i<VALORES; i++){
        if(num[i] < min)
            min = num[i];
    }

    printf("El minimo es %d\n", min);
    return 0;
}