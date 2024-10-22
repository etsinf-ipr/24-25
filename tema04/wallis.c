/* 
  aproximación de pi con la fórmula de Wallis 
  pi / 2 = 2/1 2/3 4/3 4/5 6/5 6/7 ... = prod 2n/(2n-1) 2n/(2n+1)
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    int n;
    //obtener el número de términos de la sucesión
    n = atoi(argv[1] );

    //calcular la aproximación de pi
    double prod = 1;
    for(int i = 1; i <= n; i++){
        prod += ((2*i) / (2*i - 1)) * ((2*i) / (2*i + 1));

    } 
    prod *= 2 * sqrt(3);

    // para imprimir un double (un float largo) se emplea %lf
    printf("pi = %.15lf\n ", prod * 2);

    return 0;
} 
