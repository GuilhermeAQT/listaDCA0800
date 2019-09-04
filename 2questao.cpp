#include <stdio.h>

int main(void){
	int x, y, z, media;
	printf("informe a nota da primeira unidade: "); scanf("%d", &x);
	printf("informe a nota da segunda unidade: "); scanf("%d", &y);
	printf("informe a nota da terceira unidade: "); scanf("%d", &z);
	media = ((x+y+z)/(3));
	printf("A sua media e: %d\n", media);
	if (media >= 5){
		printf("Aprovado!");
	}
	else if (media < 3) {
		printf("Reprovado!");
	}	
	
	else {
		printf("Recuperacao!");
	}
	
	return 0;
}
