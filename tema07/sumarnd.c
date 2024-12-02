// calcula la suma y la media de 10 enteros
// al azar entre 0 y 99 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define VALORES 5
                                           
int main() {
    int num[VALORES]; 
    int suma = 0;
    int i;
    float media;
    srand(time(NULL));
    // generar n enteros al azar
    printf("Generando valores...\n");
    for(i = 0; i<VALORES; i++){
        num[i] = rand() % 100;
    }
    printf("hecho\n");
    // mostrar vector
    for(int i = 0; i< VALORES; i++){
        printf("%d ",num[i]);
    }
    // calcular la suma
    for (int i = 0; i < VALORES; i++){
       suma += num[i]; //suma += num[i]
    }
    printf("La suma es %d\n", suma);

    //calcular la media
    media = (float)suma/VALORES;
    printf("La media es: %f\n", media);
    
    return 0;
}