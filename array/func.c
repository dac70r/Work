#include "array.h"

static uint8_t light_on[NUMBER_OF_SAMPLES] = {}; 

void printing (void)
{
    printf("Hello World\n"); 
}


void light_on_Init()
{
    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
        {
            light_on[i] = 0;
            i++;
        }
}

void print_light_on()
{
    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
        {
            printf("%d\n",light_on[i]+i);
        }    
}

//:D