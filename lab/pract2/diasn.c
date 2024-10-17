/*
    Calcula el  núnero de días que tiene un mes
*/
#include <stdio.h>
#include <stdlib.h> 


int main(int argc, char *argv[]){
    int mes, dias;
    char *nombre[13] ={"", "ene", "feb", "mar", "abr", "may", "jun",
                        "jul", "ago", "sep", "oct", "nov", "dic"}; 


    //lee el mes y comprueba que está entre 1 y 12
    mes = atoi(argv[1] );
    if (mes < 1|| mes >12 )
        return 1;
    //obtiene los dias del mes 
    switch(mes){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
        //printf("El mes %d tiene 31 dias\n"); 
        dias = 31; break;
    case 4: case 6: case 9: case 11:
        //printf("El mes %d tiene 30 dias\n");
        dias = 30; break;
    case 2: dias = 28;
    } 

    //muestra el resultado
    printf( "El mes %s tiene %d días\n", nombre[me
s] , dias);
    return 0;
} 

