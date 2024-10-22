/*
    Enunciado:
    Escribe un programa en C que vaya pidiendo horas válidas 
    (formato 24 horas HH:MM, con cinco caracteres). Si no es válida 
    volverá a pedirla) hasta que se hayan introducido 5 horas 
    posteriores a la hora actual del sistema. 
    Tras ello, imprimirá por pantalla la hora más temprana de todas 
    las introducidas. 
*/

#include <stdio.h>
#include <time.h>

#define no_valida(hh, mm) (hh < 0 || hh > 23 || mm < 0 || mm > 59)


int main () {
    time_t tics;
    struct tm *ftime;
    int hh, mm, actual, posteriores = 0;
    // para inicializar min en la primera iteración del while
    int min = 1441;

    //Obtiene la hora actual
    tics = time(NULL);
    ftime = localtime(&tics);
    hh = ftime->tm_hour;
    mm = ftime->tm_min;
    //Pasa la hora actual a minutos
    actual=hh * 60 + mm;

    //Ciclo para pedir 5 horas válidas
    while(posteriores < 5){
        //Hora válida
        do {
            printf("Introduce una hora (HH:MM): ");
            scanf("%d:%d", &hh, &mm);
        } while(no_valida(hh, mm));
        //Pasa la hora a minutos
        int minutos = hh * 60 + mm;
        //Si la hora es posterior a la actual
        if(minutos > actual){
            //Actualiza la hora más temprana
            if(minutos < min) min = minutos;
            //Incrementa el contador de horas posteriores
            posteriores++;
        }
    }
    //Imprime la hora más temprana
    printf("La hora más temprana es %02d:%02d\n", min / 60, min % 60);
  
    return 0;
}