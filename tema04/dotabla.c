/* 
    muestra la tabla de multiplicar de un número
    validando la entrada    
*/
#include <stdio.h>

int main(int argc, char *argv[] ){
    
    int num;

    // obtiene el número
    do{ 
        printf("Número (1-10): ");
        scanf("%d", &num);
    } while(num < 1 || num > 10 );
     
    // imprime la tabla
    for(int i = 1; i <= 10; i++ )
        printf("%2d x %2d = %2d\n", num, i, num * i);


    return 0;
} 
