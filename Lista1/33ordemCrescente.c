//Escreva um programa que leia três números inteiros e imprima-os em ordem crescente (suponha números diferentes).

#include <stdio.h>

int main(void) {
  
  int num1, num2, num3;

  printf("Informe um numero: ");
  scanf("%d", &num1);

  printf("Informe outro numero: ");
  scanf("%d", &num2);

  printf("Informe mais um numero: ");
  scanf("%d", &num3);

  if(num1 > num2){

    int aux = num2;
    num2 = num1;
    num1 = aux;

  }

  if(num1 > num3){

    int aux = num3;
    num3 = num1;
    num1 = aux;

  }

  if(num2 > num3){

    int aux = num3;
    num3 = num2;
    num2 = aux;

  }

  printf("Ordem crescente: %d %d %d", num1, num2, num3);
  
}