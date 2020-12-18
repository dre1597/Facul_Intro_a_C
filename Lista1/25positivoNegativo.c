//Escreva um programa que entre com um número real e imprima a raiz quadrada do número caso ele seja positivo e o quadrado do número caso ele seja negativo.

#include <stdio.h>
#include<math.h>

int main(void) {

  double numero;

  printf("Informe um numero: ");
  scanf("%lf", &numero);
  
  if(numero > 0){

    double raizQuadrada = sqrt(numero);
    printf("A raiz quadrada de %.2lf é %.2lf.\n", numero, raizQuadrada);

  }
  else if(numero < 0){

    double quadrado = pow(numero,2);
    printf("O quadrado de %.2lf é %.2lf.\n", numero, quadrado);
    
  }
  
}