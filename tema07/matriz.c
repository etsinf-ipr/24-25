#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int m[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            //printf("(%d,%d): %d\n", i, j, m[i][j]);
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int m[3][3];
    srand(time(NULL));
     
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m[i][j] = rand() % 10; 
        }
    }
    print(m);
    
    return 0;


}