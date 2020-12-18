/*Uma empresa paga seus empregados como gerentes (que recebem um salário fixo
mensal), trabalhadores comuns (que recebem um salário fixo por hora para as primeiras 40
horas de trabalho semanal e 1,5 vez seu salário por hora normal para as horas extras
trabalhadas), trabalhadores por comissão (que recebem R$ 250,00 mais 5,7% de suas
vendas brutas) ou trabalhadores por empreitada (que recebem uma quantia fixa por item
para cada um dos itens produzidos – cada trabalhador por empreitada dessa empresa
trabalha com apenas um tipo de item). Escreva um programa que calcule o pagamento
semanal de cada empregado. Cada tipo de empregado tem seu código próprio de
pagamento: código 1: gerentes, código 2: trabalhadores comuns, código 3: trabalhadores
por comissão e código 4: trabalhadores por empreitada Use o comando switch...case para
calcular o pagamento de cada empregado com base em seu código de pagamento. Peça ao
usuário para entrar com os dados adequados à necessidade de seu programa para calcular o
pagamento de cada funcionário com base em seu código.*/

#include <stdio.h>

int main(void) {
  
  int op;

  printf("\tTIPO DE EMPREGADO\n1-Gerente\n2-Trabalhador comum\n3-Trabalhador por comissão\n4-Trabalhador por empreitada\nOpção:");
  scanf("%d", &op);

  switch(op){
    
    double salario, salarioTotal, vendasBrutas, quantiaPorItem;
    int horasExtras, itensProduzidos;

    case 1:

      printf("Salario: ");
      scanf("%lf", &salario);

      printf("Salário total: %.2lf", salario);
    
      break;

    case 2:

      printf("Salario: ");
      scanf("%lf", &salario);

      printf("Horas extras: ");
      scanf("%d", &horasExtras);

      salarioTotal = salario * 40 + salario * 1.5 * horasExtras;
      printf("Salário total: %.2lf", salarioTotal);

      break;

    case 3:

      printf("Total de vendas brutas: ");
      scanf("%lf", &vendasBrutas);

      salarioTotal = 250 + vendasBrutas * 0.057;
      printf("Salário total: %.2lf", salarioTotal);
      break;

    case 4:

      printf("Quantia por item: ");
      scanf("%lf", &quantiaPorItem);

      printf("Itens produzidos: ");
      scanf("%d", &itensProduzidos);

      salarioTotal = quantiaPorItem * itensProduzidos;
      printf("Salário total: %.2lf", salarioTotal);
      break;

    default:

      printf("Opção inválida.\n");
      break;

  }

}