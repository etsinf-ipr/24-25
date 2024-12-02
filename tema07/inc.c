#include <stdio.h>

#define SIZE 5
void inc (int a[]){
    for (int i = 0; i < SIZE; i++)
    a[i]++;
}

int main(int argc, char *argv[]) {
    int a[SIZE] = {2,6,3,8,4};
    inc(a);
    for(int i = 0; i < SIZE; i++)
        printf(" %d", a[i]);
    return 0;
}