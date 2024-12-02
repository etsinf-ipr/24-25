// encuentra el primer numero par
// en un vector de enteros generado al azar entre 0 y 99

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10


void rellena_vector(int n[]){
    for (int i = 0; i < SIZE; i++){
        n[i] = rand() % 100;
    }
}
void imprimir_vc(int v[]){
    for(int i = 0; i < SIZE; i++)     
        printf("%d ",v[i]);
    printf("\n");
}

// devuelve el primer par, o -1 si son todos impares
int busca_par(int a[]){
    int i;
    for (i = 0; i < SIZE; i++){
        if(a[i] % 2 == 0){
            return a[i];
        }
    }
    return -1; 
} 

int main(int argc, char *argv[]) {
    // crea el vector
    int n[SIZE];
    srand(time(NULL));
    // rellena el vector con valores aleatorios
    rellena_vector(n);
    // muestra el vector
    imprimir_vc(n);
    // busca el primer número par
    int par;
    par = busca_par(n);
    printf("Primer par: %d\n", par);
    return 0;
}
