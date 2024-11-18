// Lanzamiento de dos dados
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lanza(int caras, int *d1, int *d2){
    *d1 = 1 + rand() % caras;
    *d2 = 1 + rand() % caras;
}

int main(){
    int dado1, dado2, n_caras = 6;
    srand(time(NULL));
    lanza(n_caras, &dado1, &dado2);
    printf("tirada: %d | %d \n", dado1, dado2);
    return 0;
}