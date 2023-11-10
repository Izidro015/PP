#include <stdio.h>

int main(){
    float t,w,x,y,z;
    printf("digite o valor da hora de trabalho: ");
    scanf("%f", &w);
    printf("digite o número de horas trabalhadas no mês: ");
    scanf("%f", &x);
    y=x*w;//y = quanto o empregado vai receber no mês (bruto)
    z=0.1*y;//z = quanto é 10% no salário bruto
    t=z+y;// total por mês
    printf("O salário que esse funcionário receberá será: R$ %0.2f", t);
    return 0;
}