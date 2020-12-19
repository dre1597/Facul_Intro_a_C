//Escreva um programa para ler o numero de termos da serie e imprimir o valor de S, sendo S = 1/n + 2/n-1 + 3 /n-2 +...+ n-1/2 + n ( Nao sei a diferença desse pro 20 ) 


#include <stdio.h>

int main(void) {

	int x;
	double s = 0;
	
	printf("Numero de termos da serie: ");
	scanf("%d", &x);

	int n = 1;
	int m = x;

	for(int i = 0 ; i < x ; i++){	

		s += (float) n / m;
		n++;
		m--;

	}
	printf("S = %.2lf", s); 

}