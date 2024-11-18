#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertir(char reloj[], int *hora, int *min){
    char *token;
    token = strtok(reloj, ":");
    *hora = atoi(token);
    token = strtok(NULL, ":");
    *min = atoi(token);
}


int main(){
    char reloj[6];
    printf("Introduce la hora (HH:MM): ");
    scanf("%s", reloj);
    int h, m;
    convertir(reloj, &h, &m);
    printf("La hora es: %02d:%02d\n", h, m);
    return 0;
}