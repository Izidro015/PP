#include <stdio.h>

int main()
{
    float C;
    float K;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &C);
    K=C+273.15;
    printf("A temperatura convertida para Kelvin: %f", K);
    return 0;
} 