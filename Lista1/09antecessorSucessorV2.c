/*Escreva um programa que leia um número inteiro e imprima o valor do seu antecessor e
do seu sucessor (use operadores de incremento e decremento).
*/

#include <stdio.h>

int main(void) {
  
  int numeroLido;
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numeroLido);

  numero = numeroLido;

  int antecessor = --numero;

  numero = numeroLido;
  
  int sucessor = ++numero;

  printf("Antecessor: %d.\n", antecessor);
  printf("Sucessor: %d.\n", sucessor);

}