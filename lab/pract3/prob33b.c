/*
    Enunciado:
    Escribe un programa en C que pida dos horas, representadas en
    formato 24 horas, con formato HH:MM, con 5 caracteres cada una.
    Imprimirá por pantalla la secuencia minuto a minuto desde 
    la primera hora a la segunda hora. 
    Eliminando la restricción de que la primera hora es superior 
    a la segunda: 23:50 a 00:05 hay un cambio de día

    Por ejemplo, si las horas son 18:55 y 19:03, imprimirá 
    18:55, 18:56, 18:57, 18:58, 18:59, 19:00, 19:01, 19:02.
*/  

#include <stdio.h>

int main(){
    int hh1, mm1, hh2, mm2;
    int min1, min2, min;

    // Pedimos las horas
    printf("Introduce dos horas(HH:MM HH:MM): ");
    scanf("%d:%d %d:%d", &hh1, &mm1, &hh2, &mm2);
    // Las pasamos a minutos para simplificar el bucle
    min1 = hh1 * 60 + mm1;
    min2 = hh2 * 60 + mm2;

    // Si la primera hora es mayor que la segunda,
    // le sumamos un día entero en minutos
    if( min1 > min2 )
        min2 += 24 * 60; // 1 día tiene 1440 minutos

    // Imprime la secuencia de minutos
    for(int min = min1; min < min2; min++)
        // el módulo 24 es para que las horas no pasen de 24
        // así, cuando cambie el día, empezará de nuevo en 00:00adffadf
        printf("%02d:%02d\n", (min / 60) % 24, min % 60);

    return 0;
}
