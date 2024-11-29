/*
 escribe un programa en C que defina la estructura struct vehiculo con los siguientes campos:
- matricula (cadena de 7 caracteres 9999XXX)
- la hora de entrada (dos entreros)
- la tarifa aplicada por minuto (real)
El programa imprimirá los datos si es correcta y un mensaje de error si no lo es. Se recomienda crear una función
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
struct Vehicle{
    char Matricula[8];
    int Hour;
    int Minute;
    float Price;
};
 
 //hora_correcta(int h, int m)
int TimeChecking(int Hour, int Minute){
    if(Hour >= 24 | Hour < 0 | Minute >= 60 | Minute < 0){
        return 0;
    }
    else{
        return 1;
    }
    //return (Hora >= 0 && Hora < 24 && ...);
}

int datos_vehiculo(struct Vehicle v) {
    if (strlen(v.Matricula) != 7) 
        return 0;
    for (int i = 0; i < 4; i++) {
        if (!isdigit(v.Matricula[i])) 
            return 0;
    }
    for (int i = 4; i < 7; i++) {
        if (!isalpha(v.Matricula[i]) || !isupper(v.Matricula[i]))
            return 0;
    }
    if (!TimeChecking(v.Hour, v.Minute))
        return 0;
    if (v.Price <= 0)
        return 0;
    return 1;
}

int introducir_vehiculo(struct Vehicle *v){
 
    printf("Introduce tu matrícula (formato 9999XXX): ");
    scanf("%s", (*v).Matricula);
    scanf("%d:%d", &v->Hour, &(v->Minute));
    scanf("%f", &v->Price);
    return datos_vehiculo(*v);
}

int main(){
    struct Vehicle X;

    int es_correcto = introducir_vehiculo(&X);

    if(es_correcto){
        printf("Matricula: %s \nEntrada: %02d:%02d\nTarifa: %0.3f\n", X.Matricula, X.Hour, X.Minute, X.Price);
    }
    else    
        printf("Los datos del vehiculo no son correctos\n");
    return 0;
}
