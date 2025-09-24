#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12
#define NUMMINAS 10
#define MINA 9

void darPistas(int m[][12],int x,int y){
     for(int j=x-1; j<=x+1; j++){
         for(int k=y-1; k<=y+1; k++){
             if(m[j][k]!= MINA)
                m[j][k]++;                
         }
     }
}

// generar el tablero del buscaminas
void tablero(int m[][TAM]){
    // int coordMinas[10][2];
    // tablero vacio
    for(int i=1; i<TAM-1; i++){
        for(int j=1; j<TAM; j++){
            m[i][j]= 0;
        }
    }
    // rellena con 10 minas
    int x, y;
    for(int i = 0; i < NUMMINAS; i++){
        do{
            x = rand() % TAM;
            y = rand() % TAM;
        } while(m[x][y] != 0);
        m[x][y] = 1;
        // darPistas(m,x,y);
    }
}

//imprimir tablero
void print(int m[][TAM]){ 
    for (int i=0; i<TAM; i++){
        for(int j=0; j<TAM;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void generar_pistas(int m[][TAM]){
    for (int i=0; i<TAM; i++){
        for(int j=0; j<TAM;j++){
            if m[i][j] != MINA
            darPistas(m, i, j);
}
}
}



int main() {
    int m[TAM][TAM];
    srand(time(NULL));
    tablero(m);
    print(m);
    generar_pistas(m);
    print(m);   
    return 0;
}