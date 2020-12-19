#include <stdio.h>

int main(void) {
  
	int X, Y, Z;

	printf("Informe o valor de um lado ");
	scanf("%d", &X);

	printf("Informe o valor de um outro lado ");
	scanf("%d", &Y);

	printf("Informe o valor de mais um lado ");
	scanf("%d", &Z);

	int verificaTriangulo = (X > Y + Z) || (Y > X + Z) || (Z > X + Y);
	int verificaPositivo = (X < 0 || Y < 0 || Z < 0);

	if(verificaTriangulo || verificaPositivo)
		printf("Os lados lidos não podem formar um triangulo");

	else{

		int classificaEquilatero = (X == Y) && (X == Z);
		int classificaIsosceles = (X == Y) || ( X == Z) || (Y == Z);

		if(classificaEquilatero)
			printf("O triangulo é dito equilátero.\n");

		else if(classificaIsosceles)
			printf("O triangulo é dito isosceles.\n");

		else
			printf("O triangulo é dito escaleno\n");
	}

}