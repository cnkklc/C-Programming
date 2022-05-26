#include "adc_dma.h"

void init_adc(adc_controller* this){
	
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)this->adc_degeri,3);
	
	this->adc_channel_1=0.0f;
	this->adc_channel_2=0.0f;
	
	this->Vadc_ch_1=0.0f;
	this->Vadc_ch_2=0.0f;
	this->Vref=3.0f;
	
	this->real_V_ch1=0.0f;
	this-> real_V_ch2=0.0f;
	this-> Vref_InData=0.0f;
	this-> VDDA=0.0f;
	this->Vref_InData=0.0f;
}

void read_adc(adc_controller* this){
	
	this->adc_channel_1 = this->adc_degeri[0];
	this->adc_channel_2 = this->adc_degeri[1];
	this->Vref_InData = this->adc_degeri[2];
	
}

void read_voltage(adc_controller* this){
	
	this->Vadc_ch_1 = this->Vref * this->adc_channel_1 / 4095;
	this->Vadc_ch_2 = this->Vref * this->adc_channel_2 / 4095;
	
}

void real_voltage(adc_controller* this){
	
	this->VDDA = this->Vref * (*Vref_InCall) / this->Vref_InData;
	this->real_V_ch1 = this->VDDA * this->adc_channel_1 /4095;
	this->real_V_ch2 = this->VDDA * this->adc_channel_2 /4095;
	
}