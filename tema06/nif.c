/*
El programa debe mantener en una estructura el número del NIF/NIE y la letra por separado. Hay que implementar funciones para:

- mostrar por pantalla el NIF/NIE con formato 99999999-X (7 digitos en el caso del NIE, sin letra inicial)
- obtener la letra que le corresponde a un número. Tienes dos opciones (1) pasar un número y devolver la estructura completa, o (2) pasar una estructura con el número y rellenar la letra
- determinar si un NIF/NIE es correcto. La función recibe una estructura y devuelve 1 si es correcta y 0 en caso contrario
*/
#include <stdio.h>
#include <stdlib.h>

struct nif {
    int num;
    char letra;
};

void imprimir_doc (struct nif a){
    printf("%d-%c\n", a.num, a.letra);
}

char calcular_letra (int num_dni){
    int resto;
    char letra_dni[23] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
    char letradni[23] = "TRWAGMYFPDXBNJZSQVHLCKE";
    resto = num_dni%23;
    char letra = letra_dni[resto];
    return letra;
    //return letra_dni[resto];
    }

// (1) función que devuelve una estructura con el nif
// a partir del número
struct nif obtener_letra(int numero){
    struct nif doc; 
    doc.num = numero;
    doc.letra = calcular_letra(numero);
    return doc;
}

// (2) función que recibe el nif con el número
// y lo completa con la letra
void completar_dni (struct nif *a){
    a->letra = calcular_letra(a->num);
}

// devuelve 1 si la letra del nif es correcta y 0 en caso contrario
int es_correcto(struct nif dni){
    //char letra = calcular_letra(dni.num);
    //if( dni.letra == letra)
    if (dni.letra == calcular_letra(dni.num) )
        return 1;
    else 
        return 0;
    //return (dni.letra == calcular_letra(dni.num) ); 
}

int main() {
    struct nif doc;
    
    // pedir el número de nif al usuario
    printf("Introduzca su número de DNI:");
    scanf("%d",&(doc.num));
    // calcular la letra
    completar_dni(&doc);
    // imprimir el nif completo
    imprimir_doc(doc);

    printf("Introduzca su número de DNI:");
    int num;
    // pedir un nif completo
    scanf("%d",&num);
    struct nif doc2;
    doc2 = obtener_letra(num);
    imprimir_doc(doc2);
    
    // comprobar si es correcto
    
    struct nif doc3;
    printf("Introduce un dni en foramto 99999999-X: ");
    scanf("%d-%c",&(doc3.num),&(doc3.letra));
    if (es_correcto(doc3) == 1) //(es_correcto(doc3)==1)
        printf("El DNI es correcto\n");
    else 
        printf("El DNI no es correcto. Inténtelo otra vez.");
    
}