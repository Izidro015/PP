#include <stdio.h>

int main(){
    float w,x,y,z;
    printf("Número de dias trabalhados: ");
    scanf("%f", &w);
    x=30*w;
    printf("Salário bruto: %0.2f\n", x);
    y=0.08*x;
    printf("O sálario líquido será de: R$ %0.2f\n", y);
    z=x-y;
    printf("O salário líquido será de: R$ %0.2f", z);
    return 0;
}