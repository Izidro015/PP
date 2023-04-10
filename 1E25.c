#include <stdio.h>

int main()
{
    float A;
    float M;
    printf("Digite um valor de área em acres:");
    scanf("%f", &A);
    M=A*4048.58;
    printf("O valor digitado convertido pra metros quadrados é: %f", M);
    return 0;
} 
