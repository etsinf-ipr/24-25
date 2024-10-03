#include <stdio.h>

int main(){
    int x, y;
    
    //pide las coordenadas
    printf("Introduce las coordenadas x e y: ");
    scanf("%d%d", &x, &y);

    /*
        determina en qué cuadrante está
        1: x >= 0, y >= 0
        2: x < 0, y >= 0
        3: x < 0, y < 0
        4: x >= 0, y < 0
    */
    if(x >= 0){
        if(y >= 0){
            printf("Está en el cuadrante 1\n");
        }else{
            printf("Está en el cuadrante 4\n");
        }
    }
    else{
        if(y >= 0){
            printf("Está en el cuadrante 2\n");
        }else{
            printf("Está en el cuadrante 3\n");
        }
    }
        
    return 0;
} 