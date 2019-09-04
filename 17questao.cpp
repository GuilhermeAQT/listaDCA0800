#include <stdio.h>

int main(void){
	int num1, num2, num3, num4, soma=0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num1);
	printf("Digite um numero inteiro: ");
	scanf("%d", &num2);
	printf("Digite um numero inteiro: ");
	scanf("%d", &num3);	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num4);	

if (num1 % 2==0 || num2 % 2==0 || num3 % 2==0 || num4 % 2==0 ){

	if (num1 % 2 ==0){
		soma=soma+num1;
	}
	if (num2 % 2 ==0){
		soma=soma+num2;
	}	
	if (num3 % 2 ==0){
		soma=soma+num3;
	}
	if (num4 % 2 ==0){
		soma=soma+num4;
	}
	printf("A soma dos numeros pares e: %d", soma);
}
	else {
		printf("Nao ha numeros pares!!");
	}
	
	
	
	return 0;
}
