/*
Enunciado: escribe un programa en C que pida un par de horas 
(formato 24 horas) con formato HH:MM. Si ambas horas son válidas, 
se mostrarán en orden cronológico; en otro caso, se mostrará 
un mensaje indicando que la entrada no ha sido correcta.
*/

#include <stdio.h>

int main() {
    int h, m, h2, m2;
    //obtiene la s hora correcta
    printf("Introduce la primera hora (HH:MM): ");
    scanf("%d:%d", &h, &m);
    printf("Introduce la segunda hora (HH:MM): ");
    scanf("%d:%d", &h2, &m2);

    if(h > 23 || h < 0 || m > 59 || m < 0 || h2 > 23 || h2 < 0 || m2 > 59 || m2 < 0){
        printf("La hora introducida no es válida\n");
        return 0;
    } 

    int min1 = h * 60 + m;
    int min2 = h2 * 60 + m2;
    if (min1 < min2)
        printf("Las horas introducidas son %02d:%02d y %02d:%02d\n", h, m, h2, m2);
    else
        printf("Las horas introducidas son %02d:%02d y %02d:%02d\n", h2, m2, h, m);

    return 0;
}