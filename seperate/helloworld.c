#include<stdio.h>
#include"func.h"

int main(){

    printf("Hello World");
    int x = 100;
    int y = 500;

    int z = add(x,y);
    printf("%d", z);

    return 0;
}