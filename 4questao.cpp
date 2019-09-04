#include <stdio.h>

int main(void){
	int x, y, result, resto;
	
	printf("Digite um numero:"); scanf("%d", &x);
	printf("Digite outro numero:"); scanf("%d", &y);
	result = x/y;
	resto = x%y;
	printf("O quociente e: %d\nO resto e: %d", result, resto);
	
	return 0;
}
