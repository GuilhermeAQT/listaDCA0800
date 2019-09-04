#include <stdio.h> 

int main(void){ 
	float x, y, z;
	printf("Digite um numero inteiro:"); scanf("%d", &x);
	printf("Digite um numero inteiro:"); scanf("%d", &y);
	if (y!=0){
	z=(x/y);
	printf("Quociente=%f", z); 	
	}
	else {
		printf("Divisao por zero!");
	}
	
	return 0;
}
