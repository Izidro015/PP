#include <stdio.h>

int main()
{
    float C;
    float F; 
    printf("Digite a teemperatura atual: ");
    scanf("%f", &C);
    F=C*(9.0/5.0)+32.0;
    printf("A temperatura digitada invertida para fahrenheit: %f", F);
    return 0;
} 