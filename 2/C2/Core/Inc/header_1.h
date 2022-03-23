#include "header.h"
#include "stm32f4xx.h"                  // Device header

typedef struct{
	
	int y;
	header_controller HC;
	
}header_1_controller;

void header_1_f(header_1_controller* this);
void header_1_init(header_1_controller* this);