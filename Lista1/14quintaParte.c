//Faça um programa que leia um numero real e imprima a quinta parte deste numero

#include <stdio.h>

int main(void) {
  
  double numero;

  printf("Informe um numero: ");
  scanf("%lf", &numero);

  printf("Quinta parte: %.2lf", numero/5.0);

}