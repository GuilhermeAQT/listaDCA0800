#include <stdio.h>
// informe a area e o volume de um cilindro
//area do cilindro = (area da base x 2) x (altura x 2piRAIO)
//pi=3
int main(void){
	float ab, al, at, vol, r, h;
	
	printf("Informe o raio da base: "); 
		scanf("%f", &r);
	printf("Informe a altura do cilindro: "); 
		scanf("%f", &h);
	
	
	ab = 3*(r*r);
	al = (2*3*r)*h;
	at = al+(2*ab);
	vol = ab*h;


	printf("A area total e: %.2f m^2\n", at);
	printf("O volume do cilindro e: %.2f m^3", vol);
	
	
	return 0;
}
