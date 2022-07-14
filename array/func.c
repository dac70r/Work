#include "array.h"

static uint8_t light_on[NUMBER_OF_SAMPLES] = {}; 
static uint8_t light_on_initial[NUMBER_OF_SAMPLES] = {};
static uint8_t sum_of_light_on[NUMBER_OF_SAMPLES] = {}; 
uint8_t dummy[NUMBER_OF_SAMPLES] = {1, 0, 1, 0, 0};
//uint8_t* pdummy = &dummy;
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
            sum_of_light_on[i] = 1;
            light_on[i] = light_on_initial[i];
        }

    //printf("%d"*pdummy);
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

    printf("Sum of Light on\n");

    for (int i = 0; i<NUMBER_OF_SAMPLES; i++)
        {
            
            printf("%d\n",sum_of_light_on[i]);
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

void light_on_array(uint16_t lux_instant)
{
    if(lux_instant <= LUX_THRESHOLD)
    {
        printf("Light on array index is 1, light is on\n");
    }
    else
        printf("Light on array index is 0, light is off\n");
}

