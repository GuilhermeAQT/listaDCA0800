#include <stdio.h>


int main(void){
	int x, y, z, a, b, c;
	float din;
	
	printf("QUANTIDADE DE DINHEIRO GASTO\n");
	printf("DIGITE HA QUANTO ANOS APROXIMADAMENTE VOCE FUMA:");
	scanf("%d", &x);
	
	printf("DIGITE O NUMERO DE CIGARROS CONSUMIDOS/DIA:");
	scanf("%d", &y);
	
	printf("DIGITE O VALOR DA CARTEIRA DE CIGARROS(COM 20 CIGARROS):");
	scanf("%d", &z);
	
	a = x*365; // anos(em dias)
	b = a*y; // cigarros consumidos ate agora
	c = z/20; //valor por cigarro
	din = b*c;
	
	printf("VOCE GASTOU %f REAIS COM CIGARRO ATE HOJE!!", din);
	
	return 0;
}
