#include <stdio.h>

int main(void) {
	float n1, n2, n3;
	
	printf("Digite o primero numero real: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero real: ");
	scanf("%f", &n2);
	printf("Digite o terceiro numero real: ");
	scanf("%f", &n3);
	
	printf("O primeiro e maior que a soma entre os outros dois?\n");
	if (n1 > n2+n3) {
		printf("SIM!");
	}
	else {
		printf("NAO!");
	}
			
	return 0;
}
