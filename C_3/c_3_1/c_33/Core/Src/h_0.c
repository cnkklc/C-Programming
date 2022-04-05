#include "h_0.h"


void init_va(va_controller* this){
	
	for (int i=0;i<=boyut;i++){
		
		this->w[i]=0.0f;
		this->va[i]=0.0f;
		this->cnt=0;
	}
	
}

void calculate_va(va_controller* this){
	
	if (this->cnt<=boyut){
	this->w[this->cnt]=2*PI*ff*this->cnt*(1/fs);
	this->va[this->cnt]=Vm*sin(this->w[this->cnt]);
	this->cnt++;
	}
	else{
		this->cnt=0;
	}
}