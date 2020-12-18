//Faça um programa que entre com os valores dos catetos de um triângulo retângulo e imprima a hipotenusa.

#include <stdio.h>
#include <math.h>

int main(void) {
  
  double cateto1, cateto2;
  double hipotenusa;

  printf("Informe o valor de um cateto: ");
  scanf("%lf", &cateto1);

  printf("Informe o valor do outro cateto: ");
  scanf("%lf", &cateto2);

  hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

  printf("Hipotenusa: %.2lf", hipotenusa);
}