#include <stdio.h>

int main(){
    float x,y,z;
    printf("digite o valor inicial do produto: R$ ");
    scanf("%f", &x);
    y=0.1*x;//10% do valor
    z=x-y;//add do desconto
    printf("O total a pagar, com desconto de dez porcento, é: R$ %0.2f\n", z);
    float a;
    a=x/3;//valor de cada parcela em 3x
    printf("Parcelado em 3x sem juros, cada parcela ficará: R$ %0.2f\n", a);
    float b;
    b=0.05*z;//valor com desconto
    printf("A comissão do vendedor será de: R$ %0.2f\n", b);
    float c;
    c=0.05*x;//valor total
    printf("A comissão do vendedor em caso de venda parcelada: R$ %0.2f", c);
    return 0;
}