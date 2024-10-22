/*
Enunciado: escribe un programa en C que pida una hora 
en formato HH:MM; la hora se imprimirá sólo si es válida 
(entre 00:00 y 23:59 y con el formato correcto).
*/

#include <stdio.h>

int main() {
    int h, m;
    printf("Introduce la hora (HH:MM): ");
    scanf("%d:%d", &h, &m);
    if(h > 23 || h < 0 || m > 59 || m < 0){
        printf("La hora introducida no es válida\n");
        return 0;
    }   
    printf("La hora introducida es %02d:%02d\n", h, m);
    return 0;
}