/*Escreva um programa que declare 4 variáveis do tipo inteiro e 4 do tipo ponteiro de inteiro,
e faça com que as variáveis ponteiro apontem para as variáveis inteiro. Coloque comandos
que permitam modificar os valores das variáveis inteiras através das variáveis ponteiro. Faça
a simulação passo a passo para visualizar o que está acontecendo em cada linha do
programa.*/

#include<stdio.h>

int main(void){

	//declaração das variaveis int e ponteiro de inteiro.
	int a, b, c, d;
	
	int *x, *y, *z, *w;
	
	//inicializando as variaveis int e imprimindo o valor das mesmas
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	
	printf("Valor inicial das variaveis int: %d\t %d\t %d\t %d\t\n", a, b, c, d);
	
	//endereços das variaveis inteiras e apontamento dos ponteiros para as mesmas
	printf("Endereços das variaveis int: %p\t %p\t %p\t %p\n", &a, &b, &c, &d);
	
	x = &a;
	y = &b;
	z = &c;
	w = &d;
	
	//verificando se de fato foi apontado e modificando valores das variaveis inteiras
	printf("Enredeçoes das variaveis int*: %p\t %p\t %p\t %p\n", x, y, z, w);
	
	*x = 10;
	*y = 20;
	*z = 30;
	*w = 40;
	
	//verificando se de fato foi modificado
	printf("Valor modificado das variaveis int: %d\t %d\t %d\t %d\t\n", a, b, c, d);
}