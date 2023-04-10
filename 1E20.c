#include <stdio.h>

int main()
{
    float K;
    float L;
    printf("digite um volume em quilogramas: ");
    scanf("%f", &K);
    L=K/0.45;
    printf("o valor digitado convertido em libras é: %f", L);
    return 0;
} 
