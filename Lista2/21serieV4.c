//Escreva um programa que mostre e calcule a serie S =1/3-3/5+5/7-7/9+9/11...Sendo n o numero de termos da serie informado pelo usuario


#include <stdio.h>

int main(void) {

	int x, n = 1, m = 3;
	double s=0;

	printf("Numero de termos da serie:");
	scanf("%d", &x);
	
	for(int i = 0 ; i < x ; i++){

		if(i % 2 == 0){	

			s += (float) n / m;
			printf("%dº termo : %d / %d\n", i + 1, n, m);

		}

		else{

			s-=(float)n/m;
			printf("%dº termo : - %d / %d\n", i + 1, n, m);

		}

		n = n + 2;
		m = m + 2;

	}

	printf("S = %.2lf", s);

}