#include<stdio.h>
#include "array.h"

uint16_t lux = 6000; // for testing 

int main()
{
    printing();
    light_on_Init();
    print_light_on();
    light_status_indicator(LIGHT_MODE_AUTO,lux);
    light_on_array(lux);

    return 0;
}