//Faça um programa em C que calcule a seguinte serie. S = 1/n + 2/(n-1) +3/(n-2)+...+(n-1)/2+n/1


#include <stdio.h>

int main(void) {

	int n, m;
	double s = 0;
	
	printf("Numero de termos da serie:");
	scanf("%d", &n);
	
	m=1;
	
	while(n >= 1){	

		s += (float) m / n;
		printf("\n %d / %d \n", m, n);
		m++;
		n--;
		
	}

	printf("\nS = %.2lf\n", s);

}