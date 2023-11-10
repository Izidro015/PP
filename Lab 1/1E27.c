#include <stdio.h>

int main()
{
    float H;
    float M;
    printf("Digite um valor de uma área em hectares:");
    scanf("%f", &H);
    M=H*10000;
    printf("O valor digitado tranformado em metros quadrados é:%f", M);
    return 0;
} 
