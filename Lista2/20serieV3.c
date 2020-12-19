//Faça um programa em C que calcule a seguinte serie. S = 1/n + 2/(n-1) +3/(n-2)+...+(n-1)/2+n/1


#include <stdio.h>

int main(void) {
  
	int n;
	double s=0;
	
	printf("Informe o n na série: ");
	scanf("%d",&n);
	
	int m=1;
	
	while(n>=1){
		
		s += (double)m/n;
		printf("\n %d / %d \n", m, n);
		m++;
		n--;
		
	}
	printf("\nS = %.2lf", s);

}