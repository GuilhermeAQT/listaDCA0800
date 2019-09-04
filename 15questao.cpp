#include <stdio.h>
#include <math.h>

int main(void){
	
	float a, b,c;
	
	printf("Digite o valor do coeficiente de x^2: ");
	scanf("%f", &a);
	printf("Digite o valor do coeficiente de x: ");
	scanf("%f", &b);
	printf("Digite o valor do coeficiente do termo independente: ");
	scanf("%f", &c);
	float delta = b*b-4*a*c;
	
		if (delta>=0){
			float x1=(-b+sqrt(delta))/2*a;
			float x2=(-b-sqrt(delta))/2*a;
			printf("As raizes sao: %.2f e %.2f", x1, x2);
		}
		else {
			printf("Nao existem raizes reais");
		}
	
	return 0;
}
