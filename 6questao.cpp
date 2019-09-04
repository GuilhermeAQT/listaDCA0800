#include <stdio.h>

int main (void){
	float x, y, z, w, q;
	
	printf("Digite um numero real: ");
	scanf("%f", &x);
	printf("Digite outro numero real: ");
	scanf("%f", &y);
	z = x+y;
	w = x*y;
	q = x/y;
	
	printf("A soma entres ele e: %f\nO produto deles e: %f\nO quociente e: %f", z, w, q);
	
	
	
	return 0;
}
