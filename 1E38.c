#include <stdio.h>

int main(){
    float x, y, z;
    printf("Digite um valor: ");
    scanf("%f", &x);
    y=0.25*x;
    printf("O aumento no salário será de: R$%0.2f\n", y);
    z=x+y;
    printf("O salário final será de: R$%0.2f", z);
    return 0;
}