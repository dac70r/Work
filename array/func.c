#include "array.h"

static uint8_t light_on[NUMBER_OF_SAMPLES] = {}; 
static uint8_t light_on_initial[NUMBER_OF_SAMPLES] = {}; 
uint8_t Sum_Light_On = 0;
uint8_t lux_instant = 0; 

void printing (void)
{
    printf("Hello World\n"); 
}


void light_on_Init()
{
    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
        {
            light_on_initial[i] = 0;
            light_on[i] = light_on_initial[i];
            i++;
        }
}

void print_light_on()
{
    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
        {
            printf("%d\n",light_on[i]);
            
        }

    printf("Light on initial\n");

    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
        {
            
            printf("%d\n",light_on_initial[i]);
        }     
}

void light_status_indicator(uint8_t light_mode, uint16_t lux_instant)
{
    switch(light_mode)
    {
        case LIGHT_MODE_AUTO:
            printf("Now in auto mode\n");
            printf("Lux now is %d",lux_instant);
        break;

        case LIGHT_MODE_ON:
            printf("Now in on mode");
        break;

        case LIGHT_MODE_OFF:
            printf("Now in off mode");
        break;

        default: 
            printf("Error! Something not right");
    }
    
}

//void lux 




//:D