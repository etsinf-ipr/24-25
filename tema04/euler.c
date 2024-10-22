/* 
  aproximación de pi con la fórmula de Euler 
  pi^2 / 6 = 1/1 + 1/4 + 1/9 + 1/16+... = sum 1 / n^2
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    int n;
    //obtener el número de términos de la sucesión
    n = atoi(argv[1] );

    //calcular la aproximación de pi
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1.0 / (i*i);
    } 

    // para imprimir un double (un float largo) se emplea %lf
    printf("pi = %.15lf\n ", sqrt(sum * 6));

    return 0;
} 
