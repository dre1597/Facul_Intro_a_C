//Escreva um programa que leia varios numeros inteiros positivos e para cada numero lido, chame uma funçao que recebe o numero inteiro n e retorna o numero de digitos de n
#include<stdio.h>

int contaDigitos(int n){
	
	int d=0;

	do{
		
		d++;
		n=n/10;
		
	}while(n!=0);
	
	return(d);
	
}
main()
{
	int n;
	
	int para = 0;
	
	do
	{
		printf("Numero positivo:");
		scanf("%d", &n);
	
		if(n <= 0){
			
			printf("Numero não positivo lido, fim do programa\n");
			para = 1;
			
		}
		
		else{
			
			int d = contaDigitos(n);
			printf("Numero de digitos = %d\n", d);
			
		}
		
	}while(!para);
	
}