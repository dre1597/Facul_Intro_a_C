//Faça um programa que entre com o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o valor do imposto de renda equivale a 5% do salário.

#include <stdio.h>

int main(void) {

  double salario;
  
  printf("Salário: ");
  scanf("%lf", &salario);

  double imposto = 0.05 * salario;

  printf("Imposto a ser pago: %.2lf", imposto);
  
}