/* 
  calculo del numero e siguiendo la expresión de Euler
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


int main(int argc, char *argv[] ){
    float error;
    //obtener el error
    error = atof(argv[1] );

    //calcular la aproximación de e
    int fact_i = 1;
    double e = 1;
    double e_anterior = 0;
    int i = 1;
    //mientras |e_anterior - e|  >= error
    while(fabs(e - e_anterior) >= error){ 
        // guardar valor anterior
        e_anterior = e;
        // calcular el valor nuevo
        fact_i *= i;
        e += 1.0 / fact_i;
        i++;
    } 

    // para imprimir un double (un float largo) se emplea %lf
    printf("e = %.15lf\n ", e);

    return 0;
} 
