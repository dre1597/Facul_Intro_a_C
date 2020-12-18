//Escreva um programa que leia um número inteiro e impriam uma das mensagens: maior do que 10, é igual a 10 ou é menor do que 10.

#include <stdio.h>

int main(void) {
  
  int numero;
  
  printf("Informe um numero: ");
  scanf("%d", &numero);

  if(numero > 10)
    printf("Maior do que 10.\n");

  else if(numero < 10)
    printf("Menor do que 10.\n");

  else 
    printf("Igual a 10.\n");
    
}