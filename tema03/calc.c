/*
 calculadora básica.

 Lee la operación (+, -, x, /) de la línea de comandos. 
 Los operadores estarán separados por espacios
 Ejemplo
 $calc 2.5 + 3
 5.5
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    //float n1, n2, resultado;
    //char op;
    
    // si hay 4 argumentos
    if( argc != 4){
        printf( "Uso: calc num1 op num2\n");
        return 1;
    } 

    // obtener los números y la operación
    float n1 = atof(argv[1] );
    float n2 = atof(argv[3] );
    char op = argv[2][0];

    // según la operación sea +, - , x, /
    float resultado;
    // suma n1 y n2
    if (op == '+') 
        resultado = n1 + n2;
    // resta n1 y n2
    else if (op == '-')
        resultado = n1 - n2;
    // multiplica n1 y n2
    else if (op == 'x')
        resultado = n1 * n2;
    // divide n1 y n2
    else if (op == '/')
        resultado = n1 / n2;
    else{
        printf("operacion no válida\n ");
        return 2;
    } 

    //imprimir el resultado
    printf("%.2f %c %.2f = %.2f\n ", n1, op, n2, resultado);
    return 0;
} 

