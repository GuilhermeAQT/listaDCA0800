#include <stdio.h>
#include <math.h>

int main(void){
	float x1, y1, x2, y2, x3, y3;
	float l1, l2, l3;
	
	printf("Digite a coordenada do primeiro ponto:(x,y)\n");
			printf("x1: ");
			scanf("%f", &x1);
			printf("y1: ");
			scanf("%f", &y1);	
	printf("Digite a coordenada do segundo ponto:(x,y)\n");
			printf("x1: ");
			scanf("%f", &x2);
			printf("y1: ");
			scanf("%f", &y2);
	printf("Digite a coordenada do terceiro ponto:(x,y)\n");
			printf("x1: ");
			scanf("%f", &x3);
			printf("y1: ");
			scanf("%f", &y3);
	l1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("Tamanho do segmento de reta l1: %.2f\n", l1);
	l2 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	printf("Tamanho do segmento de reta l2: %.2f\n", l2);
	l3 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	printf("Tamanho do segmento de reta l3: %.2f\n", l3);
	
	if(l1< (l2+l3) || l2 < (l1+l3) || l3 < (l2+l1)){
		printf("E um triangulo");		
	}
	else {
		printf("Nao e um triangulo");
	}
	
	printf("Tipo do triangulo:\n");
	
	if ((l1==l2)&&(l2==l3)){
		printf("Equilatero");
	}
	else if ((l1==l2) || (l2==l3) || (l1==l3)){
		printf("Isoceles");
	}
	else {
		printf("Escaleno");
	}
	
	return 0;
}
