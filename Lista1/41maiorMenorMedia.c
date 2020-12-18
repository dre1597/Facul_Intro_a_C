//Fazer um programa que leia 3 valores reais e mostre o maior deles, o menor deles e a média entre eles.

#include <stdio.h>

int main(void) {
  
  double num1, num2, num3;
  
  printf("Informe um numero: ");
  scanf("%lf", &num1);

  printf("Informe outro numero: ");
  scanf("%lf", &num2);

  printf("Informe mais um numero: ");
  scanf("%lf", &num3);

  double maior = num1;
  
  if(num2 > maior)
    maior = num2;
  if(num3 > maior)
    maior = num3;

  double menor = num1;

  if(num2 < menor)
    menor = num2;
  if(num3 < menor)
    menor = num3;

  double soma = num1 + num2 + num3;
  double media = soma / 3;

  printf("Maior numero lido: %.2lf\n", maior);
  printf("Menor numero lido: %.2lf\n", menor);
  printf("Média entre os números lidos: %.2f\n", media);

}