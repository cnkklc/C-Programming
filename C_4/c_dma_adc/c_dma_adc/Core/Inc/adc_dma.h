#include "math.h"
#include "adc.h"

#define Vref_InCall ((uint16_t*) ((uint32_t) 0x1FFF7A2A))

typedef struct {

uint16_t adc_degeri[3];
float adc_channel_1;
float adc_channel_2;
	
float Vref;
float Vadc_ch_1;
float Vadc_ch_2;
	
float real_V_ch1;
float real_V_ch2;
float Vref_InData;
float VDDA;

}adc_controller;

void init_adc(adc_controller* this);
void read_adc(adc_controller* this);
void read_voltage(adc_controller* this);
void real_voltage(adc_controller* this);