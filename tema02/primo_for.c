// programa para saber si un número es primo

#include <stdio.h>

int main(){
    int n;

    //pide al usuario un número
    printf("Introduce un número: ");
    scanf("%d", &n);

    // divide ewntre todos sus divisores para saber si es primo
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            break;
        }
    }

    //muestra el resultado
    if(i < n){
        printf("El número %d no es primo\n", n);
    }else{
        printf("El número %d es primo\n", n);
    } 
    return 0;
} 


/* 
Variante

int div = 2;
while(div < n && n % div != 0){
    div++;
}

if(div == n){
    printf("El número %d es primo\n", n);
}else{
    printf("El número %d no es primo\n", n);
}

*/