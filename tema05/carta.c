#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// obtiene el nombre de un palo a partir de su numero
void nombre_palo(int palo, char *nombre){
	switch (palo) {
		case 1: strcpy(nombre,"oros"); break; 
		case 2: strcpy(nombre,"copas");break;
		case 3: strcpy(nombre,"espadas");break;
		case 4: strcpy(nombre,"bastos");break;
	}
}

// obtiene el nombrede la carta a partir de su valor
char nombre_valor(int num){
    //                 0   1   2   3   4   5   6   7   8   9   10
    char carta[11] = {' ','A','2','3','4','5','6','7','J','Q','K'};
    return carta[num];
}

// imprime el nombre de UNA carta (el "num" de "palos")
void imprimir_carta(int num, int palo){
    char npalo[8]; 
    char nvalor;
    nvalor = nombre_valor(num);
	nombre_palo(palo, npalo);
    printf ("%c de %s, ", nvalor, npalo); 
}

// imprime la baraja completa
void imprimir_baraja(){
    // es mejor usar el mismo criterio en los dos bucles <5 / < 11 o <=4 / <= 10
    for (int palo = 1; palo <= 4; palo++){
        for( int valor = 1; valor <= 10; valor ++)
            imprimir_carta(valor, palo);
    }
}

int main () {
    imprimir_baraja();
	return 0; 
}


