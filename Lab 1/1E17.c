#include <stdio.h>

int main()
{
    float C;
    float P;
    printf("digite uma medida em centímetros: ");
    scanf("%f", &C);
    P=C/2.54;
    printf("O número digitado convertido em polegadas é: %f", P);
    return 0;
} 