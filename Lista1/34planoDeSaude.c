/*Um plano de saúde, após as negociações com o governo enviou a tabela abaixo. Faça
um programa que entre com o número do CPF e a idade de uma pessoa e imprimir o CPF e
o valor que ela deverá pagar.
-até 10 anos - R$100,00
-maior que 10 até 29 anos - R$200,00
-maior que 29 até 45 anos - R$250,00
-maior que 45 até 59 anos - R$400,00
-maior que 59 até 65 anos - R$500,00
-maior que 65 anos - R$700,00*/

#include <stdio.h>

int main(void) {
  
  int idade, cpf;

  printf("CPF: ");
  scanf("%d", &cpf);

  printf("Idade: ");
  scanf("%d", &idade);

  printf("CPF: %d\n", cpf);

  if(idade <= 10)
    printf("Irá pagar: R$100,00");

  else if(idade > 10 && idade <= 29)
    printf("Irá pagar: R$200,00");

  else if(idade > 29 && idade <= 45)
    printf("Irá pagar: R$250,00");

  else if(idade > 45 && idade <= 59)
    printf("Irá pagar: R$400,00");

  else if(idade > 59 && idade <= 65)
    printf("Irá pagar: R$500,00");

  else
    printf("Irá pagar: R$700,00");
}