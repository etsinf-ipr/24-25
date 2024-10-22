/*
    Enunciado:
    Escribe un programa en C que un par de horas en formato
    HH:MM con 5 caracteres y a continuación pida horas en ese formato
    hasta que se dé una que esté fuera del intervalo de horas cubierto.
    En ese momento se imprimirá por pantalla cuántas horas 
    se han introducido en el intervalo dado.
*/

#include <stdio.h>

int main(){
    // Define todas las variables al principio
    int hh1, mm1, hh2, mm2, hh, mm, count = 0;
    int min1, min2, min;

    // Pedimos el intervalo de horas
    printf("Introduce un intervalo de horas(HH:MM HH:MM): ");
    scanf("%d:%d %d:%d", &hh1, &mm1, &hh2, &mm2);
    // Convertimos las horas a minutos para comparar
    min1 = hh1 * 60 + mm1;
    min2 = hh2 * 60 + mm2;

    // do-while: Pedimos horas dentro del intervalo
    do{
        // Pedimos la hora
        printf("Introduce una hora(HH:MM): ");
        scanf("%d:%d", &hh, &mm);
        // Convertimos la hora a minutos para ver
        // si está dentro del intervalo
        min = hh * 60 + mm;
        count++;
    }while(min1 <= min && min <= min2);

    // Imprimimos cuántas horas se han introducido
    // NOTA: count-1 porque la última hora no está en el intervalo
    printf("Se han introducido %d horas.\n", count-1);
    return 0;
}