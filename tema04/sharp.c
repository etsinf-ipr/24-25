/* 
  aproximación de pi con la fórmula de Sharp 
  pi / 6 = 2 sqrt(3) (1/1 - 1/3x3 + 1/5x3^2 - 1/7x3^3 +... )= 
         = 2 sqrt(3)  sum (-1)^n / (2n-1)3^n
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ){
    int n;
    //obtener el número de términos de la sucesión
    n = atoi(argv[1] );

    //calcular la aproximación de pi
    double sum = 0;
    int signo = 1;
    for(int i = 0; i <= n; i++){
        sum += 1.0 / ((2*i + 1) * pow(3,i));
        //multiplicar por -1 cambia de signo sin hacer la potencia
        //(como el factorial en el número e)
        signo *= (-1);
    } 
    sum *= 2 * sqrt(3);

    // para imprimir un double (un float largo) se emplea %lf
    printf("pi = %.15lf\n ", sum * 6);

    return 0;
} 
