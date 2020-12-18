//Faça um programa que leia dois números e imprima uma mensagem dizendo se são iguais ou deferentes.

#include <stdio.h>

int main(void) {
  
  int numero1, numero2;

  printf("Inform um numero: ");
  scanf("%d", &numero1);

  printf("Informe outro numero: ");
  scanf("%d", &numero2);

  if(numero1 == numero2)
    printf("Os números lidos são iguais.\n");
    
  else
    printf("Os números lidos são diferentes.\n");

}