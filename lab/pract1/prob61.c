
/*
    Enmunciadio:
    Escribe un programa en C que pida un par de enteros 
    correspondientes a horas y minutos 
    y los muestre por pantalla separados por :
*/

#include <stdio.h>

int main(){
    int h, m;

    // pide la hora
    printf"Introduce la hora: " );
    scanf("%d:%d", &h, &m);

    // la muestra en pantalla
    printf("La hora introducida es %d:%d\n", h, m);

    return 0;
} 