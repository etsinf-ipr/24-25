// calcula la suma y la media de 10 enteros 

#include <stdio.h>
#include <stdlib.h>

#define VALORES 500
                                                
int main() {
    int num[VALORES]; 
    int suma = 0;
    int i;
    float media;
    // pedir 10 enteros al usuario
    printf("Ingrese %d enteros\n", VALORES);
    for(i = 0; i<VALORES;i++){
        scanf("%d",&num[i]);
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