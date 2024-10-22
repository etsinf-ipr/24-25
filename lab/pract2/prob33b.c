/*
Enunciado: escribe un programa en C que pida una hora representada 
en formato 24 horas, con formato HH:MM; si la hora es válida, 
imprimirá la hora equivalente en formato 12 horas, es decir, 
con la marca AM o PM según sea anterior o posterior a las 12:00 
(Nota: las 00:00 son las 12:00 AM y las 12:00 son las 12:00 PM).

Usar una instrucción swith para determinar si la hora es AM o PM.
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
    switch(h){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            printf("La hora introducida es %02d:%02d AM\n", h, m);
            break;
        case 12:
            printf("La hora introducida es %02d:%02d PM\n", h, m);
            break;
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
            printf("La hora introducida es %02d:%02d PM\n", h - 12, m);
            break;
    }
    return 0;
}