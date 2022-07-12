#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


#define NUMBER_OF_SAMPLES 5

int main(){

    uint8_t NumberofSamples = 5;
    uint8_t light_on [NUMBER_OF_SAMPLES] = {};

    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
    {
        light_on[i] = 0;
        i++;

    }
    
    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
    {
        printf("%d\n",light_on[i]+i);
    }
    



    return 0;
}