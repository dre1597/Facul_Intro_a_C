//Faça um programa que leia os 3 coeficientes de uma equação de segundo grau e determine suas raizes.(Fazendo só nos reais, para facilitar.)

#include <stdio.h>
#include <math.h>

int main(void) {
  
  double a,b,c;

  printf("Coeficiente a: ");
  scanf("%lf", &a);

  printf("Coeficiente b: ");
  scanf("%lf", &b);

  printf("Coeficiente c: ");
  scanf("%lf", &c);

  double delta = pow(b,2) - 4 * a * c;

  if(delta > 0){

    double x1 = ((-b) - sqrt(delta)) / (2 * a);
    double x2 = ((-b) + sqrt(delta)) / (2 * a);
    printf("Raizes diferentes: %.2lf, %.2lf", x1, x2);

  } 

  //Só coloquei esse else if para ficar mais legível e bunitinho o código, não é necessário.
  
  else if(delta == 0){

      double x = (-b) / (2 * a );
      printf("Raiz única: %.2lf", x);

  }

  else
    printf("Não possui raizes reais.");
    
}