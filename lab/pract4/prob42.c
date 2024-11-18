/* ENUNCIADO:
escribe un programa en C con una función que valide una hora en
formato HH:MM con 5 caracteres (entre 00:00 y 23:59 y con el formato correcto). La
función recibirá dos enteros: la hora y los minutos, y devolverá 1 si forman una hora
válida y 0 en caso contrario.
Implementar la función main que pida horas en el ese formato y repita el proceso
hasta que la hora sea válida, momento en que se imprimirá por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int comprobacion(int h, int m){
    if(h > 23 || h < 0 || m > 59 || m < 0){  
        return 
    }
    return 1;
}
int main() {
    int h, m;
    do{
        printf("Introduce la hora (HH:MM): ");
        scanf("%d:%d", &h, &m);
    }while(comprobacion(h,m) == 0);
    printf("La hora introducida es válida: %02d:%02d\n", h, m);
    return 0;
}