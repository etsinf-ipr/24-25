/*
Enunciado: escribe un programa en C que pida una hora representada 
en formato 24 horas, con formato HH:MM; si la hora es válida, 
imprimirá la hora equivalente en formato 12 horas, es decir, 
con la marca AM o PM según sea anterior o posterior a las 12:00 
(Nota: las 00:00 son las 12:00 AM y las 12:00 son las 12:00 PM).
*/


#include <stdio.h>

int main() {
    int h, m;

    //obtiene la hora correcta
    printf("Introduce la hora (HH:MM): ");
    scanf("%d:%d", &h, &m);
    if(h > 23 || h < 0 || m > 59 || m < 0){
        printf("La hora introducida no es válida\n");
        return 0;
    } 

    //convierte la hora a formato 12 horas
    if(h < 12)
        printf("La hora introducida es %02d:%02d AM\n", h, m);
    else if (h > 12)
        printf("La hora introducida es %02d:%02d PM\n", h - 12, m);
    else
        printf("La hora introducida es %02d:%02d PM\n", h, m);
    return 0;
}