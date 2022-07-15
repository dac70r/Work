#include <stdio.h>
#include <stdlib.h>
#include "array.h"

/* Lux Array Variables for testing */ 
uint16_t lux_array_on[NUMBER_OF_SAMPLES] = {288, 288, 288,
                                            283, 288};    
uint16_t lux_array_off[NUMBER_OF_SAMPLES] = {2887, 2887, 2887,
                                            2837, 2887};
uint16_t lux_array_same[NUMBER_OF_SAMPLES] = {2887, 287, 287,
                                            837, 87};                                              
uint8_t light_mode = LIGHT_MODE_AUTO; 


/* main program 
int main()
{
    printing();
    light_on_Init();
    print_light_on();
    light_status_indicator(LIGHT_MODE_AUTO,lux);
    //light_on_array(lux);

    return 0;
}
*/

int main()
{   
    //printf("Input lux here: ");
    //scanf("%d %d %d %d %d", &lux[1], &lux[2], &lux[3], &lux[4], &lux[0]);
    //printf("light_on_array(lux): %d",light_on_array(lux[0]));
    //light_status_indicator
    /*for (int x; x<NUMBER_OF_SAMPLES; x++)
    {
        light_on_array(lux_array[x]);
    }*/
    //light_on_array(235);
    //print_light_on();

    /* Init the arrays*/
    light_on_Init();
    
    /* Case 1: auto mode in bright and dark environments bright -> dark -> bright -> bright
    light_status_indicator(light_mode,lux_array_off);
    light_status_indicator(light_mode,lux_array_on);
    light_status_indicator(light_mode,lux_array_on);
    light_status_indicator(light_mode,lux_array_on);*/

    /* Case 2: auto -> on -> off -> on -> auto -> off -> on -> off -> auto modes in bright environment
    light_status_indicator(LIGHT_MODE_AUTO,lux_array_off);
    light_status_indicator(LIGHT_MODE_ON,lux_array_off);
    light_status_indicator(LIGHT_MODE_OFF,lux_array_off);
    light_status_indicator(LIGHT_MODE_ON,lux_array_off);
    light_status_indicator(LIGHT_MODE_AUTO,lux_array_off);
    light_status_indicator(LIGHT_MODE_OFF,lux_array_off);
    light_status_indicator(LIGHT_MODE_ON,lux_array_off);
    light_status_indicator(LIGHT_MODE_OFF,lux_array_off);
    light_status_indicator(LIGHT_MODE_AUTO,lux_array_off);*/

    /* Case 3: auto -> on -> off -> on -> auto -> off -> on -> off -> auto modes in dark environment
    light_status_indicator(LIGHT_MODE_AUTO,lux_array_on);
    light_status_indicator(LIGHT_MODE_ON,lux_array_on);
    light_status_indicator(LIGHT_MODE_OFF,lux_array_on);
    light_status_indicator(LIGHT_MODE_ON,lux_array_on);
    light_status_indicator(LIGHT_MODE_AUTO,lux_array_on);
    light_status_indicator(LIGHT_MODE_OFF,lux_array_on);
    light_status_indicator(LIGHT_MODE_ON,lux_array_on);
    light_status_indicator(LIGHT_MODE_OFF,lux_array_on);
    light_status_indicator(LIGHT_MODE_AUTO,lux_array_on);*/

    /* Case 4: auto mode in mixed environment */
    light_status_indicator(light_mode,lux_array_off);
    light_status_indicator(light_mode,lux_array_on);
    light_status_indicator(light_mode,lux_array_same);
    light_status_indicator(light_mode,lux_array_on);
    light_status_indicator(light_mode,lux_array_off);
    light_status_indicator(light_mode,lux_array_same);
    light_status_indicator(light_mode,lux_array_same);
    light_status_indicator(light_mode,lux_array_on);

    /* Light_on_array testing 
    light_on_array(788);
    light_on_array(7889);
    light_on_array(7898);
    light_on_array(79);
    light_on_array(889);
    light_on_array(7889);
    light_on_array(7889);
    light_on_array(7889);
    light_on_array(7889); */



    
    return 0;
}