// sumatorio de un número
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    
    int num;
    // obtiene el número
    num = atoi(argv[1]);
    printf("argc %d\n ", argc);
    printf("argv[0]  %s\n ", argv[0] );
    printf("argv[1]  %s\n ", argv[1] );
    

    // calcula el sumatorio
    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum = sum + i;
    } 
    // imprime el resultado
    printf("sum(%d) = %d\n", num, sum);
    return 0;
} 