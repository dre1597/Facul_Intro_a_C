//Escreva um programa que leia se o ano é bissexto ou não.

#include <stdio.h>

int main(void) {
  
  int ano;
	
	printf("\nAno:");
	scanf("%d", &ano);

  int verificaBissexto = (ano % 4 == 0) && (ano % 400 == 0 || ano % 100 != 0);
  
	if(verificaBissexto)
		printf("\nAno Bissexto.\n");

	else
		printf("\nNão é ano bissexto.\n");

}