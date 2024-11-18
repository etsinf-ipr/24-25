#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main(){

    for(;;){
        printf("%ld\n ", time(NULL));
        usleep(1000);
    } 

    return 0;


} 
