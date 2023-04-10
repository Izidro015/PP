#include <stdio.h>

int main() 
{
    float F;
    float C;
    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%f", &F);
    C=5.0*(F-32.0)/9.0;
    printf("A temperatura convertida para Celsius: %f", C);
    return 0;
} 