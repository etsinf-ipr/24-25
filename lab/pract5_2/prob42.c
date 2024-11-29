/* ENUNCIADO 4.2
    Modifica el problema 4.1 para que la introducción de datos
    se haga en una función que recibe la estructura como parámetro
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct veh
{                         
    char matricula[8]; //"9999AAA"
    int h;
    int m;
    float t;
};

int validacion(struct veh v)
{
    if (v.h >= 0 && v.h <= 23 && v.m >= 0 && v.m <= 59)
        return 1;
    else
        return 0;
    //return  (hora1 >= 0 && hora1 <= 23 && min1 >= 0 && min1 <= 59);
}

int comprobacion_matricula(struct veh vehiculo1){
    //Comprobar la matricula 4 num (0123)
    for(int i=0;i<4;i++){
        if (!isdigit(vehiculo1.matricula[i]))
            return 0;
    }
    // comprueba 3 letras (456)
    for(int i=4;i<7;i++){
        if (isupper(vehiculo1.matricula[i]) == 0)
            return 0;
    }
    return 1;
}

int veh_correcto(struct veh v){
    // si matricula correcta y hora correcta y tarifa > 0
    if(comprobacion_matricula(v) == 1 && validacion(v) == 1 && v.t > 0)
        return 1;
    else
        return 0;
}

int preguntar_datos(struct veh *c){
    printf("Dime la matricula:\n ");
    scanf ("%s", c->matricula); //(*c).matricula
    printf("Introduce la entrada formato HH:MM:\n");
    scanf("%d:%d",&(c->h),&c->min);
    printf("Dime la tarifa: \n");
    scanf("%f", &c->tarifa);
    int correcto = veh_correcto(*c);
    if(veh_correcto(*c)){
        printf("Matrícula: %s\n", c->matricula);
        printf("Entrada: %02d:%02d\n", c->h, c->m);
        printf("Tarifa: %.3f\n", c->t);
    }
    return correcto;
}

int main()
{
    struct veh v;
    preguntar_datos(&v);

    if(veh_correcto(v)){
        printf("Matrícula: %s\n", v.matricula);
        printf("Entrada: %02d:%02d\n", v.h, v.m);
        printf("Tarifa: %.3f\n", v.t);
    }
    else
        printf("Datos incorrectos\n");
    return 0;
}