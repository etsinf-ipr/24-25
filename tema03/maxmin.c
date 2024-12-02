#include <stdio.h>
#define max(a,b) (a >= b) ? a : b


int main(){

    int a, b, c,  mx, mn;
    printf("dame dos valores:\n ");
    scanf("%d%d", &a, &b);
    mx = max(a,b);


    mn = min(a,b);
    printf("max = %d, min = %d\n", mx, mn);
    return 0;
} 