/*Faça um programa que leia dois números inteiros e imprima a soma, a diferença, 
o produto, a divisão inteira, a divisão real e o resto da divisão entre eles*/

#include <stdio.h>

int main(void) {
  
  int numero1;
  int numero2;

  printf("Digite um numero: ");
  scanf("%d", &numero1);

  printf("Digite outro numero: ");
  scanf("%d", &numero2);

  int soma = numero1 + numero2;

  printf("A soma entre %d e %d é: %d.\n", numero1, numero2, soma);

  int diferenca = numero1 - numero2;

  printf("A diferença entre %d e %d é: %d.\n", numero1, numero2, diferenca);

  int produto = numero1 * numero2;

  printf("O produto entre %d e %d é: %d.\n", numero1, numero2, produto);

  int divisaoInteira = numero1 / numero2;

  printf("A divisão inteira entre %d e %d é: %d.\n", numero1, numero2, divisaoInteira);

  double divisaoReal = (double)numero1 / numero2;
  
  printf("A divisão real entre %d e %d é: %.2f.\n", numero1, numero2, divisaoReal);

  int resto = numero1 % numero2;

  printf("A o resto da divisão entre %d e %d é: %d.\n", numero1, numero2, resto);

}