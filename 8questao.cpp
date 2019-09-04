#include <stdio.h>

int main(void){
	int x, y, z;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	printf("Digite outro numeor inteiro: ");
	scanf("%d", &y);
	
	if (x>y){
		printf("%d", x);
	}
	else if (x<y){
		printf("%d", y);
		}
	else {
		printf("%d = %d", x,y);
	}
	return 0;
}
