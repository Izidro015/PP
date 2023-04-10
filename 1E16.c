#include <stdio.h>

int main()
{
    float P;
    float C;
    printf("digite uma medida em polegadas: ");
    scanf("%f", &P);
    C=P*2.54;
    printf("O número digitado convertido em centímetros é: %f", C);
    return 0;
} 