//Escreva um programa que ler e imprime uma string de tamanho maximo 100.Em seguida, imprima todas as vogais encontradas no texto e o total de vezes que ela aparece.

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {

	char s[MAX];
	int tamanho, contA = 0, contE = 0, contI = 0, contO = 0,contU = 0;

	printf("String:");
	fgets(s, MAX, stdin);

	tamanho = strlen(s);
	
	for(int i = 0 ; i < tamanho ; i++){

		if(s[i]=='a'||s[i]=='A')
			contA++;

		if(s[i]=='e'||s[i]=='E')
			contE++;

		if(s[i]=='i'||s[i]=='I')
			contI++;

		if(s[i]=='o'||s[i]=='O')
			contO++;

		if(s[i]=='u'||s[i]=='U')
			contU++;

	}
	printf("\n\nVogais encontradas no texto: ");
	if(contA!=0)
		printf("%c\t",'a');

	if(contE!=0)

		printf("%c\t",'e');

	if(contI!=0)

		printf("%C\t",'i');
	if(contO!=0)

		printf("%c\t",'o');

	if(contU!=0)
		printf("%c\t",'u');

	printf("\n\nNumero de vezes que a vogal /a/ aparece = %d\nNumero de vezes que a vogal /e/ aparece = %d\nNumero de vezes que a vogal /i/ aparece = %d\nNumero de vezes que a vogal /o/ aparece = %d\nNumero de vezes que a vogal /u/ aparece = %d\n", contA, contE, contI, contO, contU);
}