#include <stdio.h>

int main()
{
    float M;//m²
    float A;//acres
    printf("Digite um valor em metros quadrados:");
    scanf("%f", &M);
    A=M*0.000247;
    printf("A medida digitada convertida em acres eh de: %f", A);
    return 0;
} 