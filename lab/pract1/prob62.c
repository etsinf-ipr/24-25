
/*
    Enunciadio:
    
    Escribe un programa en C que pida un par de enteros 
    correspondientes a horas y minutos y los muestre 
    por pantalla con el formato HH:MM 
    (dos dígitos para hora y dos para minutos)
*/

#include <stdio.h>

int main(){
    int h, m;

    // pide la hora
    printf"Introduce la hora: " );
    scanf("%d:%d", &h, &m);

    // la muestra en pantalla con formatousando %02d
    // - el 2 indica que use dos posiciones
    // - el 0 indica que las posiciones vacias se rellenen con ceros
    printf("La hora introducida es %02d:%02d\n", h, m);

    return 0;
} 