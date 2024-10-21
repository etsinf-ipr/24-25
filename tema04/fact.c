// factorial de un número
#include <stdio.h>
#include <stdlib.h>


int main( ){
    
    int num;
    // obtiene el número
    printf("Introduce un numero: ");
    scanf("%d", &num);

    // calcula el factorial
    int fact = 1;
    for( int i = num; i >= 1; i--)
        fact *=i;
        //fact = fact * i;


    // imprime el resultado
    printf("%d! = %d\n", num, fact);
    return 0;
} 