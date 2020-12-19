/*
Fa?a um programa que mostre os n termos da S?rie a seguir. Imprima no final
o valor da s?rie.
S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m
*/

#include <stdio.h>

int main(void) {

	int n=1, m=1, x;
	double s = 0;

	printf("Numero de termos da serie: ");
	scanf("%d", &x);

	for(int i = 0 ; i < x ; i++){

		s+=(double)n/m;
		printf("%dº termo = %d / %d\n", i+1, n, m);
		n=n+1;
		m=m+2;

	}
  
	printf("Valor da serie = %.2lf", s);

}