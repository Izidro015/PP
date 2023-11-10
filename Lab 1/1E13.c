#include <stdio.h>

int main()
{
    float k;
    float m;
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &k);
    printf("A velocidade digitada foi %f",k);
    m = k/1.61;
    printf(" km/h, que convertida para milhas será de:%f", m);
    return 0;
} 
