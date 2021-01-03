/*Crie um programa para manipular vetores de inteiros. O seu programa deve implementar
uma função chamada inverte_vetor(), que recebe como parâmetro dois vetores V1 e V2,
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem inversa.
Além disso, a função também deve retornar o maior valor encontrado em V1. A função deve obedecer ao seguinte protótipo: int inverte_vetor(int *v1, int *v2, int n);
Em seguida, implemente outra função chamada multiplica_escalar(), que recebe
como parâmetro os dois vetores V1 e V2 e um número inteiro x. A função deve multiplicar
cada um dos elementos de V1 por X e armazenar os resultados em V2. A função deve
obedecer ao seguinte protótipo: void multiplica_escalar(int *v1, int *v2, int x, int n);
Em seguida crie a função principal do programa utilizando as funções inverte_vetor
() e multiplica_escalar() para inverter um vetor de tamanho fornecido pelo usuário (aloque
memória, leia e imprima o vetor) e, em seguida, multiplicar esse vetor por um escalar
também fornecido pelo usuário. Por ultimo, o programa deverá exibir o vetor resultante.*/
//muito trabalho e mt estranho do jeito que a prof pediu, eu vo fazer tudo dentro da funçao mesmo, sem copiar para um v2 

#include<stdio.h>
#include<stdlib.h>
int inverte_vetor(int *v1,int n);
void multiplica_escalar(int *v1, int x, int n);

int inverte_vetor(int *v1,int n){
	
	int *v2, j = n-1;
	
	int maior = *v1;
	
	for(int i = 0 ; i < n ; i++)
		if((*(v1 + i)) > maior)
			maior = *(v1 + i);
			
	v2 = (int*)malloc(n * sizeof(int));
	
	if(v2 == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		exit(0);
		
	}
	
	for(int i = 0 ; i < n ; i++){
		
		*(v2 + i) = *(v1 + j);
		j--;
		
	}
	
	for(int i = 0 ; i < n ; i++)
		printf("%d\t", *(v2 + i));
		
	printf("\n");
	
	free(v2);
	
	return(maior);
	
}

void multiplica_escalar(int *v1, int x, int n){
	
	int *v2;
	
	v2 = (int*)malloc(n * sizeof(int));
	
	if(v2 == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return;
		
	}
	
	for(int i = 0 ; i < n ; i++)
		*(v2 + i) = *(v1 + i) * x;
		
	for(int i = 0 ; i < n ; i++)
		printf("%d\t", *(v2 + i));
		
	free(v2);
	
}

int main(void){

	int *a,tam;
	
	printf("\nTamanho do vetor:");
	scanf("%d", &tam);
	
	a = (int*)malloc(tam * sizeof(int));
	
	if(a == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		exit(0);
		
	}
	
	for(int i = 0 ; i < tam ; i++){
		
		printf("Elemento[%d]: ", i + 1);
		scanf("%d", a + i);
		
	}
	
	for(int i = 0 ; i < tam ; i++)
		printf("%d\t", *(a + i));
		
	printf("\n\n");
	
	int maior = inverte_vetor(a, tam);
	
	printf("\nMaior = %d", maior);
	
	int x;
	
	printf("\nEscalar:");
	scanf("%d", &x);
	
	multiplica_escalar(a, x, tam);
	
	free(a);
	
}