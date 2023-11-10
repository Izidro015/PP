#include <stdio.h>

int main(){
    float x, y, z;
    printf("Digite o preço do produto: ");
    scanf("%f", &x);
    y=0.12*x;
    printf("O desconto do produtoserá de: R$%0.2f\n", y);
    z=x-y;
    printf("O valor final será de: R$%0.2f", z);
    return 0;
}