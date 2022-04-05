#include "h_1.h"

void h_1_f(h_1_controller* this){
	
	if (this->VAA.va[this->VAA.cnt] <= G){
		
		HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_All);
	}
	else{
		
				HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_All);
	}
}