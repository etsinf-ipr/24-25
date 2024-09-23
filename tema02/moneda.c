#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int moneda;
    srand(time(NULL));
    moneda = rand() % 2;
    printf("%d\n ", moneda);
    return 0;
} 

