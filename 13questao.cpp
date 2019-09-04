#include <stdio.h>

int main(void){
	float x, y, z, w;
	printf("Digite um valor:"); scanf("%f", &x);
	printf("Digite outro valor:"); scanf("%f", &y);
	printf("Digite outro valor:"); scanf("%f", &z);
	
	if(x>y && x>z){
		printf("O maior e: %f", x);
	}
	if(y>x && y>z){
		printf("O maior e: %f", y);
	}
	if(z>x && z>y){
		printf("O maior e: %f", z);
	}
	return 0;
}
