//38) Faça um programa que leia 2 números inteiros. Se o segundo for diferente de zero, calcular e imprimir o quociente do primeiro pelo segundo. Caso contrário, imprimir a mensagem: “DIVISÃO POR ZERO”.

#include <stdio.h>

int main(void) {
  
  int num1, num2;
  
  printf("Informe um inteiro: ");
  scanf("%d", &num1);

  printf("Informe outro inteiro: ");
  scanf("%d", &num2);

  if(num2 == 0)
    printf("DIVISÃO POR ZERO.");

  else{

    double quociente = (double) num1 / num2;
    printf("O quociente de %d por %d é %.2lf", num1, num2, quociente);
    
  }
}