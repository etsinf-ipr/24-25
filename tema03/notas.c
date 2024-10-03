#include <stdio.h>

int main() {
    int nota;
    //pide ubna nota numerica
    printf("Nota: ");
    scanf(" %d", &nota);
    // 5: aprobado| 7: notable| 9: sobresaliente   
    if (nota < 5)
        printf("Suspenso\n");
    else if (nota < 7)
        printf("Aprobado");
    else if (nota < 9)
        printf("Notable");
    else
        printf("Sobresaliente");
    
    return 0;
}