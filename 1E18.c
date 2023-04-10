#include <stdio.h>

int main()
{
    float M;
    float L;
    printf("digite um volume em m³: ");
    scanf("%f", &M);
    L=1000*M;
    printf("o valor digitado convertido em Litos é: %f", L);
    return 0;
}