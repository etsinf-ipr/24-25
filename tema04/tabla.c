/* 
    muestra la tabla de multiplicar de un número
    que se pasa por línea de comandos    
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    
    int num;

    // obtiene el número
    num = atoi(argv[1]);

    // imprime la tabla
    for(int i = 1; i <= 10; i++ )
        printf("%d x %d = %d\n ", num, i, num * i);


    return 0;
} 
