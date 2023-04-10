#include <stdio.h>

int main()
{
    float K;
    float C;
    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &K);
    C=K-273.15;
    printf("A temperatura convertida para Celsius: %f", C);
    return 0;
} 