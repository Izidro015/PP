#include <stdio.h>

int main()
{
    float M;
    float H;
    printf("Digite um valor de uma área em metros quadrados:\n");
    scanf("%f", &M);
    H=M*0.0001;
    printf("O valor digitado tranformado em hectares é:%f", H);
    return 0;
} 
