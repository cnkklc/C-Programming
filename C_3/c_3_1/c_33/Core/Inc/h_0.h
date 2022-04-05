#include "math.h"

#define PI 3.1416f
#define ff 50.0f
#define fs 1000.0f
#define boyut (int)(fs/ff)
#define Vm 311.11f
typedef struct{
	
float va[boyut];
float w[boyut];
int cnt;	
}va_controller;

void init_va(va_controller* this);
void calculate_va(va_controller* this);

