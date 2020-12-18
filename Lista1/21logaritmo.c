//Faça um programa que entre com um numero e a base em que se deseja calcular o logaritmo desse numero e imprima o resultado.

#include <stdio.h>
#include <math.h>

int main(void) {
  
  double numero, base;

  printf("Informe um numero: ");
  scanf("%lf", &numero);

  printf("Informe uma base: ");
  scanf("%lf", &base);

  if(numero <= 0)
    printf("Numero inválido.\n");

  else if(base == 1 || base <= 0)
    printf("Base inválida.\n");

  else{

    double logaritmo = log(numero) / log(base);
    printf("Logaritmo de %.2lf na base %.2lf: %.2lf", numero, base, logaritmo);

  }

}