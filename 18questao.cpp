#include <stdio.h> 

int main(void){
	int ano;
	
	printf("Digite um ano: ");
	scanf("%d", &ano);
	if (ano % 400 ==0 || (ano % 4 ==0 && ano % 100 !=0)){
		printf("O ano %d e bissexto!", ano);
	}
	else {
		printf("O ano %d nao e bissexto!", ano);
	}
	
	return 0;
}
