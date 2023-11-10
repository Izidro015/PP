#include <stdio.h>

int main()
{
    float L;
    float M;
    printf("digite um volume em litos: ");
    scanf("%f", &L);
    M=L/1000;
    printf("o valor digitado convertido em m³ é: %f", M);
    return 0;
} 