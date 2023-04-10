#include <stdio.h>
#include <math.h>

/*25. Calcule as raízes da equação de 2º grau.*/

int main() {
  float a,b,c,d,x,y,z;
  printf("Dêos valores das variáveis: ");
  scanf("%f %f %f", &a,&b,&c);
  if(d<0){
    printf("Não é equação de 2° grau.");
  }if(d==0){
    x=-b/(2*a);
    printf("Rais única: %.2f", x);
  }if(d>=0){
    y=(-b+sqrt(d)/(2*a));
    printf("A primeira raiz é: %.2f", y);
    z=(-b-sqrt(d)/(2*a));
    printf("A segunda raiz é: %.2f", z);
  }
  return 0;
}