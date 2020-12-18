//Faça um programa para entrar com dois numeros inteiros e imprimir a seguinte saida: Quociente... Resto...

#include <stdio.h>

int main(void) {
  
  int numero1, numero2;

  printf("Informe um numero: ");
  scanf("%d", &numero1);

  printf("Informe outro numero: ");
  scanf("%d", &numero2);

  double quociente = (double) numero1 / numero2;

  int resto = numero1 / numero2;

  printf("Quociente:%.2lf    Resto:%d", quociente, resto);

}