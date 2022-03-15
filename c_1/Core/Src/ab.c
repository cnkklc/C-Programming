#include "ab.h"

void init(g_controller* this){
	
	this->a=0;
	
}

void f(g_controller* this){
	
		
		if(this->a<=5){
			
			HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12 | GPIO_PIN_15);
			this->a=this->a+1;
			
		}
		else{
			
			HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13 | GPIO_PIN_14);

		}
	if(this->a == 10){
		this->a=0;
		
	}
	
	
}