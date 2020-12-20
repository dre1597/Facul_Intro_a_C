//Faça uma funçao que recebe a media final de um aluno por parametro e retorna o conceito. nota 0.0-4.9 D, 5.0-6.9 C, 7.0-8.9 B, 9.0-10.0 A

#include <stdio.h>

char calculaConceito(double media){

	if(media <= 4.9)
		return('D');

	else if(media <= 6.9)
		return('C');

	else if(media <= 8.9)
		return('B');

	else
		return('A');
}

int main(void) {

	char conceito;
	double media;

	printf("Media final:");
	scanf("%lf",&media);

	conceito = calculaConceito(media);

	printf("Conceito %c\n", conceito);
	
}