/* 
  calculo del numero e siguiendo la expresión de Euler
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    int n;
    double e = 0;
    //obtener el número de términos de la sucesión
    n = atoi(argv[1] );

    //calcular la aproximación de e
    int fact_i = 1;
    for(int i = 0; i < n; i++){
        //fact_i = fact_i * i;
        fact_i *= i;
        e += 1 / (double)fact_i;
        //e = e + 1.0 / fact_i
    } 

    return 0;
} 
