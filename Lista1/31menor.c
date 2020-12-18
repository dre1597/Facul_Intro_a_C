//Escreva um programa que leia dois números inteiros e imprima o menor número lido.(suponha números diferentes)

#include <stdio.h>

int main(void) {
  
  int numero1, numero2;

  printf("Informe um numero: ");
  scanf("%d", &numero1);

  printf("Informe outro numero: ");
  scanf("%d", &numero2);

  int menor = numero1;

  if(numero2 < menor)
    menor = numero2;

  printf("O menor numero lido foi: %d", menor);

}