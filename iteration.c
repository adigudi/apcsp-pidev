#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand (time(NULL));
    int div = rand();
    int modNum = 0;
    for (int i = 0; i < 100; i++){
    modNum++;
    if(div % modNum == 0){
    printf("%d divides evenly into %d\n", div, modNum);   
    }


    }





}
