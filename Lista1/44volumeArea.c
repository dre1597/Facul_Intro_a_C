/*Fazer um programa para ler o valor do raio R de uma esfera e calcular e imprimir o volume e a área de uma esfera.
  V =4/3 π R ∗ ∗ 3 e A = 4 π R ∗ ∗ 2

*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
	double raio;
	
	printf("Raio da esfera: ");
	scanf("%lf", &raio);

	if(raio > 0){

		double volume = 4/3 * M_PI * pow(raio,3);
		double area = 4 * M_PI * pow(raio,2);

		printf("Volume da esfera: %.2lf\n", volume);
		printf("Area da esfera: %.2lf", area);

	}

	else
		printf("Raio negativo não rola, amigão.\n");
    
}