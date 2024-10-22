/*
    Enunciado: 
    Escribe un programa en C que pida diez horas (formato 24 horas)
    con formato HH:MM representadas por 5 caracteres y termine por 
    escribir la hora más temprana y más tardía de la secuencia. 
    En cualquier caso, la hora debe ser válida, y si no lo es 
    se volverá a pedir.
*/

#include <stdio.h>
// opcional: usar macro para simplificar la condición
#define no_valida(hh, mm) (hh < 0 || hh > 23 || mm < 0 || mm > 59)

int main() {
    int hh, mm;
    // cualquier hora será mayor que max (1a iteracion)   
    int max = -1;
    // cualquier hora será menor que min (1a iteracion)
    int min = 1441;

    // Pedimos 10 horas válidas
    for(int i = 0; i < 10; i++) {
        // hora validada
        do {
            // imprimo "i" para saber en qué iteración estamos
            printf("[%d] Introduce una hora(HH:MM): ", i+1);
            scanf("%d:%d", &hh, &mm);
        } while(no_valida(hh, mm));
        // Pasamos la hora a minutos
        int minutes = hh * 60 + mm;
        // Actualizamos max y min
        if(minutes > max) max = minutes;
        if(minutes < min) min = minutes;
    }
    // Imprimimos la hora más temprana y más tardía
    printf("La hora más temprana es %02d:%02d\n", min / 60, min % 60);
    printf("La hora más tardía es %02d:%02d\n", max / 60, max % 60);

    return 0;
}