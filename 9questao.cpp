#include <stdio.h>

int main(void) {
	float x, y, z, vf;
	printf("Digite o custo de fabrica do carro:");
	scanf("%f", &x);
	printf("O imposto sobre o carro e de: %.2f\n", y=x*45/100); //imposto de 45%
	printf("O lucro do distribuidor e de : %.2f\n", z = x*12/100); // lucro do distribuidor de 12%
	printf("O valor final do carro eh: %.2f\n", vf=x+y+z); //valor final do carro	
	return 0;
}
