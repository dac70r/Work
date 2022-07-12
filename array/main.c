#include<stdio.h>
#include "array.h"

int main()
{
    printing();
    light_on_Init();
    print_light_on();
    light_status_indicator(LIGHT_MODE_AUTO);
    
    return 0;
}