
/*
    Enunciadio:
    
    Escribe un programa en C que pida una hora en formato HH:MM 
    usando 5 caracteres y muestre por pantalla 0 si la hora es 
    incorrecta (en formato o cantidad) y 1 si es correcta
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main(){
    int h, m;
    // si la hora tiene 5 caracteres,
    // la cadena tiene que ser de 6 para el \0 final
    char reloj[6];
    // variable para extraer los elementos de la hora (tokens)
    char *token;  

    // pide la hora
    printf"Introduce la hora: " );
    // si la variable es una cadena, no lleva &
    scanf("%s", reloj);

    // extrae la hora
    token = strtok(reloj,":");
    h = atoi(token);
    // extrae los minutos
    token = strtok(NULL,":");
    m = atoi(token);
    
    // la muestra en pantalla con formatousando %02d
    // - el 2 indica que use dos posiciones
    // - el 0 indica que las posiciones vacias se rellenen con ceros
    printf("La hora introducida es %02d:%02d\n", h, m);
    
    // calcula si es correcta (entre 00:00 y 23:59)    
    int es_correcto = (h >= 0 && h < 24 && m >= 0 && m < 60);
    printf("Correcto %d\n", es_correcta);
    

    return 0;
} 