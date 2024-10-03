// calcula el máximo de dos numeros 
// que se pasan por linea de comandos
#include <stdio.h>
#include <stdlib.h> 


int main(int argc, char *argv[] ){ 
    int a, b, max;
// obtiene los dos numeros
    a = atoi(argv[1]);
    b = atoi(argv[2]);
// calcula el mayor de los dos
    if (a >= b)
        max = a;
    else 
        max = b;
    //opcion 2
    max = (a >= b) ? a : b;

// imprime el resultado
    printf("%d\n", max);
}