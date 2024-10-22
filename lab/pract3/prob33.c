/*
    Enunciado:
    Escribe un programa en C que pida dos horas, representadas en
    formato 24 horas, con formato HH:MM, con 5 caracteres cada una.
    Imprimirá por pantalla la secuencia minuto a minuto desde 
    la primera hora a la segunda hora. Si la primera hora es superior 
    a la segunda, no imprimirá nada.

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

    // Imprime la secuencia de minutos
    // NOTA: Si la primera hora es mayor que la segunda, 
    // no imprime nada porque no llega a entrar en el bucle
    for(int min = min1; min < min2; min++)
        printf("%02d:%02d\n", min / 60, min % 60);

    return 0;
}