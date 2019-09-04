#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Digite outro numero: ");
    scanf("%d", &c);
    
    if (a>c) {
        int num = c;
        c = a;
        a = num;
    }
    	if (a>b) {
       		int num = b;
       		b = a;
       		a = num;
   		 }
    		if (b>c) {
				int num = c;
    			c = b;
    			b = num;
   			 }
    
    printf("%d / %d / %d", a, b, c);
}
