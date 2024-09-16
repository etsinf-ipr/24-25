//programa que resuelve una ecuacion de segundo grado

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float x1, x2, raiz;

    //Introduce los coeficientes de la ecuación
    printf("Introduce lso tres coeficientes:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //calcula la raiz
    raiz = sqrt(b*b - 4*a*c);
    
    //calcula x1 y x2
    x1 = (-b + raiz)/ (2*a);
    x2 = (-b - raiz)/ (2*a);

    //muestra el resultado
    printf("x1 = %f\nx2 = %f\n", x1, x2);

    return 0;
}  
