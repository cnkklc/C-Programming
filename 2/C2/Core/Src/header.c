#include "header.h"

void header_init(header_controller* this){
	
	this->x=0;
	
}

void header_f(header_controller* this){
	
	if (this->x==10){
		
		this->x=0;
	}
	else{
		
		this->x=this->x+1;
		
	}
	
}