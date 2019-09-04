#include <stdio.h>

int main(void){
	float x;
	
	printf("Qual a velocidade maxima da avenida?(km/h) ");
	scanf("%f", &x);
	if(x>=50 && x<=60){
	printf("Multa de 50 reais!");
	}
	if(x>60 && x<=80){
	printf("Multa de 100 reais!");
	}
	if(x>80){
	printf("Multa de 200 reais!");
	}
	
	return 0;
}
