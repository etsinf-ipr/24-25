#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MINAS 10
 
void tablero (int tablero [][TAM]){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            tablero[i][j] = 0;//he puesto para que en un princinpio todas esten a 0
        }
    }
}
 
void poner_minas(int tab[][TAM]){
    int minas=0;
    while(minas<=MINAS){
        int x=rand()%10;
        int y=rand()%10;
        if(tab[x][y]!=9){
            tab[x][y]=9;//pongo que la mina sea el numero 9
            minas++;
        }    
    }
}
 
void imprimir(int tab[][TAM]){
    for(int i = 0; i<TAM;i++){
        for(int j = 0; j<TAM;j++){
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
}
 
int main(){
    int tab[TAM][TAM];
    srand(time(NULL));

    tablero(tab);
    poner_minas(tab);
    imprimir(tab);
    return 0;
}
