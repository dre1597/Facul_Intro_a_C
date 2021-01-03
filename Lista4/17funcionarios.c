/*Considere uma empresa que precisa armazenar os seguintes dados dos clientes: nome do
cliente (string tamanho 60), salário mensal do cliente, ano de nascimento, se possui carro ou
não. No programa defina a estrutura, crie um vetor para armazenar os dados de 100 clientes,
leia e imprima os dados para o vetor e chame as seguintes funções:
a) Função que recebe o vetor criado e retorna a quantidade de clientes com renda
mensal acima da média;
b) Função que recebe o vetor criado e retorna a quantidade de clientes que tem
carro;
c) Função que recebe o vetor criado e retorna a quantidade de clientes que nasceram
entre 1965 (inclusive) e 1980 (inclusive).*/

#include<stdio.h>
#define TAM 100

struct empresa{
	
	char nome[60];
	double salario;
	int ano;
	int carro;
	
};
void leitura(struct empresa *v){
	
	for(int i = 0 ; i < TAM ; i++){
		
		printf("\nNome: ");
		gets(v->nome);
		
		printf("\nSalario: ");
		scanf("%lf", &v->salario);
		
		printf("\nAno de nascimento:" );
		scanf("%d", &v->ano);
		
		printf("\nTem Carro?(Se sim: 1, Se nao: 0): ");
		scanf("%d", &v->carro);
		
		fgetc(stdin);
		v++;
		
	}
	
}

void impressao(struct empresa *v){
	
	for(int i = 0 ; i < TAM ; i++){
		
		printf("\nNome = %s\nSalario mensal = %.2lf\nAno de nascimento = %d", v->nome, v->salario, v->ano);
		
		if((v->carro) == 1)
			printf("\tTem carro.\n");
			
		else
		
			printf("\tNão tem carro.\n");
		v++;
		
	}
	
}

float media_salario(struct empresa *v)
{
	double soma = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		soma += v->salario;
		v++;
		
	}
	
	return(soma / TAM);
	
}

int quant_acima(struct empresa *v, double media){
	
	int contador = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if((v->salario) > media)
			contador++;
			
		v++;
		
	}
	
	return(contador);
	
}

int quant_carro(struct empresa *v){
	
	int contador = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if((v->carro) == 1)
			contador++;
			
		v++;
		
	}
	
	return(contador);
	
}
int quant_ano(struct empresa *v){
	
	int contador = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if((v->ano) >= 1965 && (v->ano) <= 1980)
			contador++;
			
		v++;
		
	}
	
	return(contador);
	
}
int main(void){
	
	struct empresa funcionario[TAM];
	
	leitura(funcionario);
	impressao(funcionario);
	
	double m = media_salario(funcionario);
	
	int acima = quant_acima(funcionario, m);
	
	int c = quant_carro(funcionario);
	
	int ano = quant_ano(funcionario);
	
	printf("\n Media de salario: %.2lf",m);
	printf("\n Quantidade de funcionarios com salario acima da media: %d", acima);
	printf("\n Quantidade de funcionarios que tem carro: %d", c);
	printf("\n Quantidade de funcionarios nascidos entre 1865 e 1980(inclusive): %d", ano);
	
}
