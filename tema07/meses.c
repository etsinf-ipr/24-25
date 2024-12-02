// mostrar los días cada mes del año
#include <stdio.h>
    
int main(){
    //              0  1  2  3  4  5  6  7  8  9  10 11   
    int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    // mostrar los días
    for(int n = 0; n < 12; n++){
        printf("El mes %d tiene %d dias\n", (n+1), dias[n]);
    }
    
    return 0;
}

