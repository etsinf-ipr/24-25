// mostrar los días de un mes
#include <stdio.h>
    
int main(){
    //              0  1  2  3  4  5  6  7  8  9  10 11 12   
    int dias[12] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int mes;
    // pedir el número del mes
    printf("Introduce el mes: ");
    scanf("%d", &mes);
    // mostrar los días
    printf("El mes %d tiene %d dias\n", mes, dias[mes]);
    return 0;
}

