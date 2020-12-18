//Faça um programa que entre com o numero de milhas e imprima o numero de milha lido convertido para metros ( Uma milha é igual a 1609 metros)

#include <stdio.h>

int main(void) {
  
  double milhas, metros;

  printf("Informe o valor em milhas: ");
  scanf("%lf", &milhas);

  metros = milhas * 1609;

  printf("Valor em metros: %.2lf metros", metros);

}