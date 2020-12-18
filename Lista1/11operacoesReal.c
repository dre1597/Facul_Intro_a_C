/*Faça um programa que leia dois números reais e imprima a soma, a diferença, 
o produto, a divisão inteira, a divisão real e o resto da divisão entre eles*/

#include <stdio.h>

int main(void) {
  
  double numero1;
  double numero2;

  printf("Digite um numero: ");
  scanf("%lf", &numero1);

  printf("Digite outro numero: ");
  scanf("%lf", &numero2);

  double soma = numero1 + numero2;

  printf("A soma entre %.2lf e %.2lf é: %.2lf.\n", numero1, numero2, soma);

  double diferenca = numero1 - numero2;

  printf("A diferença entre %.2lf e %.2lf é: %.2lf.\n", numero1, numero2, diferenca);

  double produto = numero1 * numero2;

  printf("O produto entre %.2lf e %.2lf é: %.2lf.\n", numero1, numero2, produto);

  double divisaoInteira =  (int)numero1 / (int)numero2;

  printf("A divisão inteira entre %.2lf e %.2lf é: %.2lf.\n", numero1, numero2, divisaoInteira);

  double divisaoReal = numero1 / numero2;
  
  printf("A divisão real entre %.2lf e %.2lf é: %.2f.\n", numero1, numero2, divisaoReal);

  double resto =  (int)numero1 % (int)numero2;

  printf("A o resto da divisão entre %.2lf e %.2lf é: %.2lf.\n", numero1, numero2, resto);

}