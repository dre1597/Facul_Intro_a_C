//Faça um programa que entre o salário de um funcionário, calcule e imprima o novo salário sabendo-se que este sofreu um aumento de 25%

#include <stdio.h>

int main(void) {
  

  double salario;

  printf("Salario: ");
  scanf("%lf", &salario);

  double novoSalario = salario * 1.25;

  printf("Novo salario: %.2lf", novoSalario);
}