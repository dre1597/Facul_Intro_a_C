//Faça um programa que leia a idade, peso, altura e o sexo de uma pessoa e imprimir cada dado numa linha

#include <stdio.h>

int main(void) {

  int idade;
  double peso;
  char sexo;
  
  printf("Idade: ");
  scanf("%d", &idade);

  printf("Peso: ");
  scanf("%lf", &peso);

  printf("Sexo? (M/F/O) ");
  scanf(" %c", &sexo);

  printf("Idade: %d\n", idade);
  printf("Peso: %.2lf\n", peso);
  
  if(sexo == 'M')
    printf("Sexo: Masculino\n");
  else if(sexo == 'F')
    printf("Sexo: Feminino\n");
  else
    printf("Sexo: Outros\n");
}