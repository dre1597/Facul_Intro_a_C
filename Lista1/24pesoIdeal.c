/*Tendo os dados de entrada a altura e o sexo de uma pessoa. Construa um programa que calcule seu peso ideal, utilizando as seguintes regras:

i. Para homens: (72.7*h)-58
ii. Para mulheres: (62.1*h)-44.7 Onde h é a altura.
*/

#include <stdio.h>

int main(void) {
  
  double altura;
  char sexo;

  printf("Informe a altura em metros:");
  scanf("%lf", &altura);

  printf("Sexo (M/F): ");
  scanf(" %c", &sexo);

  if(sexo == 'M'){

    double pesoIdeal = (72.7 * altura) - 58;
    printf("O seu peso ideal é: %.2lf.\n", pesoIdeal);

  }
  else{

    double pesoIdeal = (62.1 * altura) - 44.7;
    printf("O seu peso ideal é: %.2lf.\n", pesoIdeal);

  }

}