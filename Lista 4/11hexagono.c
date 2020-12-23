/*Crie um programa para calcular a área e o perímetro de um hexágono. O seu programa
deve implementar uma função chamada calcula_hexagono() que calcule a área e o perímetro
de um hexágono regular de lado L. A função deve obedecer o seguinte protótipo:
void calcula_hexagono(double l, double *area, double *perimetro);
Lembrando que a área e o perímetro de um hexágono regular são dados por:
A= (3l^2sqrt(3))/2 p=6l 
Em seguida crie a função principal do programa e utilize a função calcula_hexagono() para
calcular a área e o perímetro de um hexágono de lado l informado pelo usuário.*/
#include<stdio.h>
#include<math.h>

void calcula_hexagono(double l, double *area, double *perimetro){
	
	*area = ( 3 * l * l * (sqrt(3))) / 2;
	*perimetro = 6 * l;
}

int main(void){
	
	double l, area, perimetro;
	
	printf("\nInforme o lado do Hexagono:");
	scanf("%lf", &l);
	
	calcula_hexagono(l, &area, &perimetro);
	
	printf("\nArea = %.2lf\nPerimetro = %.2lf\n", area, perimetro);
	
}
