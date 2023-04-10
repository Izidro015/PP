#include <math.h>
#include <stdio.h>

/*31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a 
seguir, verifique e mostra qual a classificação dessa pessoa.*/

int main(){
  printf("Informe a altura e o peso:\n");
  float a, b;
  scanf ("%f", &a);
  scanf ("%f", &b);
  if (a< 1.20 && b<=60) {
    printf ("A\n");
  }
  if (a<1.20 && (b>60 && b<=90)) {
    printf ("D\n");
  }
  if (a<1.20 && (b>90)) {
    printf ("G\n");
  }
  if ((a>1.2 && a<1.70) && (b<=60)) {
    printf ("B\n");
  }
  if ((a>1.2 && a < 1.70) && (b>60 && b<=90)) {
    printf ("E\n");
  }
  if ((a>1.2 && a < 1.70) && (b>90)) {
    printf ("H\n");
  }
  if ((a>1.7) && (b<=60)) {
    printf ("C\n");
  }

  if (a>1.7 && (b>60 && b<=90)) {
    printf ("F\n");
  }
  if (a>1.7 && (b>90)) {
    printf ("I\n");
  }

  return 0;
} 
