#include "header_1.h"

void header_1_init(header_1_controller* this){
	
	this->y=0;
	
}

void header_1_f(header_1_controller* this){
	
	this->y=this->HC.x +1;
	
	if (this->y<=10){
		

		HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_All);
	}
	else
	{
		HAL_GPIO_WritePin(GPIOD,GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 |GPIO_PIN_15, GPIO_PIN_RESET);
	}
	HAL_Delay(1000);
	
	
}
