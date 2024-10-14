// factorial de un número
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    
    int num;
    // obtiene el número
    printf("Introduce un numero: ");
    scanf("%d", &num);

    // calcula el factorial
    int fact = 1;
    for( int i = 1; i <= num; i++)
        fact *=i;
        //fact = fact * i;


    // imprime el resultado
    printf("%d! = %d\n", num, fact);
    return 0;
} 