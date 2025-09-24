
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void rellenar_matriz(int matriz[][TAM]){
    int minas = 0, x, y;
    while (minas < 10){
        do{
            x = rand() % TAM;
            y = rand() % TAM;
        }while(matriz[x][y] == 1);
        matriz[x][y] = 1;
        minas++;
    }
}

int impr_tablero(int matriz[][TAM]){

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", matriz[i][j]);
        }
    printf("\n");
    }
}


int main() {
    int matriz[TAM][TAM];
    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            matriz[i] = 0;
        }
    }
    rellenar_matriz(matriz);
    impr_tablero(matriz);
    return 0;
}