//adivida un numero entre 0 y 99 que piensa el ordenador

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_INTENTOS 5


int main(){ 
    int ord, user;

// el ordenador piensa un numero
// semilla / formula random()
    srand(time(NULL));
    ord = rand() % 100;

// mientras intentos < 10 y no adivinado
    //int i;
    for( int i = 0; i < NUM_INTENTOS; i++){
// pedir un numero
        printf("Número: ");
        scanf("%d", &user);
// mirar si es mayor o menor que el pensado
        if( ord < user)
            printf("es menor\n");
        else if( ord > user)
            printf("es mayor\n");
        else{
            printf("¡Acertaste! Mi numero era el %d\n", ord);
            //break;
            return 0;
        } 
    } 
    //if( i >= NUM_INTENTOS)
        printf("Fallaste! Mi numero era el %d\n", ord);
    return 0;
} 