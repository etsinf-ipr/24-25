/* 
    Enunciado:
    escribe un programa en C que pida una hora en formato
    HH:MM con 5 caracteres; el proceso de petición de datos debe
    repetirse hasta que la hora sea válida (entre 00:00 y 23:59). 
    En ese momento se imprimirá por pantalla.
*/

#include <stdio.h>

int main(){
    int hh, mm;
    do{
        printf("Introduce una hora(HH:MM): ");
        scanf("%d:%d", &hh, &mm);
    }while(hh < 0 || hh > 23 || mm < 0 || mm > 59);

    printf("La hora introducida es: %02d:%02d\n", hh, mm);
    return 0;
}