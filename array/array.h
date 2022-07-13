#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

//Constants
#define LUX_THRESHOLD                              400
#define NUMBER_OF_SAMPLES                          5
#define INDEX_INITIAL                              0

//Front/Back Light status
#define LIGHT_STATUS_OFF                           0x00
#define LIGHT_STATUS_ON                            0x01
#define LIGHT_STATUS_INITIAL                       0x00

//Light operation mode
#define LIGHT_MODE_AUTO                            0x00
#define LIGHT_MODE_OFF                             0x01
#define LIGHT_MODE_ON                              0x02
#define LIGHT_MODE_INITIAL                         0x00
//uint8_t light_on [NUMBER_OF_SAMPLES] = {};

void light_on_Init(void);
void printing(void);
void print_light_on();
void light_status_indicator(uint8_t, uint16_t);
