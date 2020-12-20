/*
31) Escreva um programa para entrar com a idade de várias pessoas e imprimir:
- total de pessoas com menos de 21 anos
- total de pessoas com mais de 50 anos.
(USAR COMANDO WHILE OU DO...WHILE).
*/

#include <stdio.h>


int main(void) {
    
	int idade, cont1 = 0, cont2 = 0;
	
	do{

		printf("Idade: ");
		scanf("%d", &idade);
		
		if(idade < 21)
			cont1++;

		else if(idade > 50)
			cont2++;

	}while(idade != 0);

	printf("Menor que 21 = %d\n Maior que 50 = %d\n", cont1,cont2);

}