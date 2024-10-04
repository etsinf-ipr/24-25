
/*
    Enunciadio:
    
    escribe un programa en C que pida una par de horas 
    en formato HH:MM usando 5 caracteres y muestre 
    por pantalla la diferencia en minutos entre ellas   
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main(){
    int h1, m1, h2, m2;
    // si la hora tiene 5 caracteres,
    // la cadena tiene que ser de 6 para el \0 final
    char reloj1[6], reloj2[6];
    // variable para extraer los elementos de la hora (tokens)
    char *token;  

    // pide la primera hora
    printf"Introduce la primera hora: " );
    scanf("%s", reloj1);

    // extrae la hora
    token = strtok(reloj1,":");
    h1 = atoi(token);
    token = strtok(NULL,":");
    m1 = atoi(token);

    // pide la segunda hora
    printf"Introduce la segunda hora: " );
    scanf("%s", reloj2);

    // extrae la hora
    token = strtok(reloj2,":");
    h2 = atoi(token);
    token = strtok(NULL,":");
    m2 = atoi(token);
    
    // convierte las horas a minutos
    int minutos1 = h1 * 60 + m1;
    int minutos2 = h2 * 60 + m2;

    // calcula la diferencia en minutos
    int diferencia = minutos2 - minutos1;

    // la muestra en pantalla la diferencia
    printf("Diferencia: %d minutos\n", diferencia);
    
    return 0;
} 