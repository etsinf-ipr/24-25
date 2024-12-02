#include <stdio.h>

int main(){
    int n[10] = {39, 7, 36, 5, 57, 58, 35, 8, 1, 32};
    int pares[10]; 
    int j = 0;
    //          0   1   2   3
    //pares = {36, 58, 8, 32};

    // ¿Como se saca a una función?
    // ¿qué hay que pasar como parametro?
    // -> que la función devuelva el tamaño de pares
    for (int i = 0; i < 10; i++){
        if(n[i] % 2 == 0){
            pares[j] = n[i];
            j++;
            //pares[j++] = n[i];
        }
    }

    for (int i = 0; i < j; i++){
        printf("%d ", pares[i]);
    }
    printf("\n");
    return 0;
}


