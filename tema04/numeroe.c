/* 
  calculo del numero e siguiendo la expresión de Euler
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    int n;
    //obtener el número de términos de la sucesión
    n = atoi(argv[1] );

    //calcular la aproximación de e
    int fact_i = 1;
    /*
      NOTA:
      El bucle empieza en 1 para evitar fact_i *= 0
      Al "sacar" el primer término 1/0! del bucle,
      hay que inicializar e a 1 (1/0! = 1/1) 
    */
    double e = 1;
    for(int i = 1; i < n; i++){
        //fact_i = fact_i * i;
        fact_i *= i;
        e += 1 / (double)fact_i;
        //e = e + 1.0 / fact_i
    } 

    // para imprimir un double (un float largo) se emplea %lf
    printf("e = %.15lf\n ", e);

    return 0;
} 
