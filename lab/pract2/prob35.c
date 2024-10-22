/*
Enunciado: escribe un programa en C que pida un par de horas correspondiente al
inicio y al final de un intervalo horario y otro par de horas correspondiente al inicio y final
de otro intervalo horario. El programa debe mostrar por pantalla un mensaje indicando
si los intervalos solapan o no. Todas las horas estarán en formato 24 horas (HH:MM) y
deberán ser válidas; si alguna de ellas no lo fuera se imprimirá un mensaje informativo
y no se realizará el proceso.
*/

#include <stdio.h>

int main(){
    int hini1, mini1, hfin1, mfin1; //variables para el primer intervalo
    int hini2, mini2, hfin2, mfin2; //variables para el segundo intervalo

    // obtén las horas de los intervalos
    printf("Introduce la hora de inicio del primer intervalo: ");
    scanf("%d:%d", &hini1, &mini1);
    printf("Introduce la hora de fin del primer intervalo: ");
    scanf("%d:%d", &hfin1, &mfin1);
    printf("Introduce la hora de inicio del segundo intervalo: ");
    scanf("%d:%d", &hini2, &mini2);
    printf("Introduce la hora de fin del segundo intervalo: ");
    scanf("%d:%d", &hfin2, &mfin2);

    // si no es correcta, termina el programa
    if(hini1 > 23 || hini1 < 0 || hfin1 > 23 || hfin1 < 0 || hini2 > 23 || hini2 < 0 || hfin2 > 23 || hfin2 < 0 || mini1 > 59 || mini1 < 0 || mfin1 > 59 || mfin1 < 0 || mini2 > 59 || mini2 < 0 || mfin2 > 59 || mfin2 < 0){
        printf("Alguna de las horas introducidas no es válida\n");  
        return 0;
    }

    // pasa las horas a minutos
    int ini1 = hini1 * 60 + mini1;
    int fin1 = hfin1 * 60 + mfin1;
    int ini2 = hini2 * 60 + mini2;
    int fin2 = hfin2 * 60 + mfin2;

    // muestra las fechas para comprobar ñlacorrección de la entrada
    printf("\nIntervalo 1: %02d:%02d (%d) - %02d:%02d (%d)\n", 
        hini1, mini1, ini1, hfin1, mfin1, fin1);
    printf("Intervalo 2: %02d:%02d (%d) - %02d:%02d (%d)\n", 
        hini2, mini2, ini2, hfin2, mfin2, fin2);

    // es más fácil comprobar si no se solapan:
    // si un intervalo empieza cuando el otro ha terminado

    if(ini1 > fin2 || ini2 > fin1){
        printf("Los intervalos no se solapan\n");
    }else{
        printf("Los intervalos se solapan\n");
    }
    return 0;
}
