/*Faça um programa para ler o número de uma sala de aula, sua capacidade e o total de
alunos matriculados na mesma e imprima o número da sala, sua capacidade, o número de
cadeiras ocupadas e sua disponibilidade indicando se a sala está lotada ou não.*/

#include <stdio.h>

int main(void) {
  
  int numeroSala, capacidade, matriculados;

  printf("Informe o numero da sala: ");
  scanf("%d", &numeroSala);

  printf("Informe a capacidade da sala: ");
  scanf("%d", &capacidade);

  printf("Informe o numero de matriculados na sala: ");
  scanf("%d", &matriculados);

  printf("Numero da sala: %d\nCapacidade: %d\nCadeiras Ocupadas: %d\n", numeroSala, capacidade, matriculados);

  if(matriculados < capacidade)
    printf("A sala não está lotada.\n");
  else
    printf("A sala está lotada.\n"); 
}