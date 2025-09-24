#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MINAS 10

//Vamos a imitar el buscaminas de windows con una matriz de 10x10
//Para ello, crearemos una matriz de 10x10 y la rellenaremos con 0s y 9s, siendo 1s las minas.

void rellenar_matriz(int matriz[][TAM]){
    int minas = 0, x, y;
    while (minas < MINAS){
        do{
            x = rand() % TAM;
            y = rand() % TAM;
        }while(matriz[x][y] == 1);
        matriz[x][y] = 9;
        minas++;
    }
}

//Crearemos una función para interactuar con la matriz y que el usuario pueda seleccionar una casilla y ver si hay una mina o no. Si hay una mina, el programa terminará. Guardaremos que valores se han seleccionado
// Mostraremos después de cada selección que casillas se han seleccionado y que valor tienen. Las que no se han seleccionado se mostrarán con una X.

void imprimir_tablero(int matriz[][TAM]){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void contar_minas(int matriz[][TAM], int seleccionadas[][TAM]) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] == 9) {
                seleccionadas[i][j] = 9; //Minas
            } else {
                int count = 0;
                //Contamos las minas alrededor
                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    //Comprobamos que no se salga de la matriz
                    if (ni >= 0 && ni < TAM && nj >= 0 && nj < TAM && matriz[ni][nj] == 9) {
                        count++;
                    }
                }
                //Guardamos el número de minas alrededor
                seleccionadas[i][j] = count;
            }
        }
    }
}
void seleccionar_casilla(int matriz[][TAM], int seleccionadas[][TAM], int visible[][TAM]) {
    int x, y;
    printf("Introduce la posición x: ");
    scanf("%d", &x);
    printf("Introduce la posición y: ");
    scanf("%d", &y);
    //Comprobamos que no se salga de la matriz
    if (x < 0 || x >= TAM || y < 0 || y >= TAM) {
        printf("Coordenadas fuera de rango. Inténtalo de nuevo.\n");
        return;
    }
    //Comprobamos si hay una mina
    if (matriz[x][y] == 9) {
        printf("Has seleccionado una mina, has perdido\n");
        exit(0);
        //Si no hay mina, mostramos el número de minas alrededor.
    } else {
        visible[x][y] = 1;
        int cont = 0;
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        //Marcamos como visibles las casillas adyacentes
        for (int k = 0; k < 8; k++) {
            int ni = x + dx[k];
            int nj = y + dy[k];
            if (ni >= 0 && ni < TAM && nj >= 0 && nj < TAM) {
                visible[ni][nj] = 1;
            }
        }
    }
    //Representamos el tablero
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            //Si la casilla es visible, la mostramos
            if (visible[i][j]) {
                //si se trata de una mina, la mostramos con *
                if (seleccionadas[i][j] == 9) {
                    printf("* ");
                    //Si no, mostramos el número de minas alrededor
                } else {
                    printf("%d ", seleccionadas[i][j]);
                }
            } else {
                printf("X ");
            }
        }
        printf("\n");
    }
}

int main(){
    int matriz[TAM][TAM];
    int seleccionadas[TAM][TAM];
    int visible[TAM][TAM];
    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            seleccionadas[i][j] = 0;
            visible[i][j] = 0;
        }
    }
    rellenar_matriz(matriz);
    contar_minas(matriz, seleccionadas);
    while(1){
    seleccionar_casilla(matriz, seleccionadas, visible);
    }
    return 0;
}



