// multiplica dos numeros usando la mutiplicacion rusa
#include <stdio.h>

int main(){
    int a, b, result;
    //pide los numeros a multiplicar
    printf("Dame dos números:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    //multiplicacion rusa
    result = 0;
    while (b > 1){
        if (b % 2 > 0){
            // b = b - 1;
            // b -= 1;
            b--;
            result += a;
        } 
        a *= 2;
        b /= 2;
    } 

    //muestra el resultado
    printf("a x b = %d\n", a + result);
    return 0;
} 