// calcula el mínimo de dos numeros 
// que se pasan por linea de comandos
#include <stdio.h>
#include <stdlib.h> 


int main(int argc, char *argv[] ){ 
    int a, b, min;

// comprueba que el usuario ha introducido dos valores
    if( argc == 3){ 
    // obtiene los dos numeros
        a = atoi(argv[1]);
        b = atoi(argv[2]);
    // calcula el menor de los dos
        min = (a < b) ? a : b;
    // imprime el resultado
        printf("%d\n", min);
        return 0;
    }
    return 1; 
}