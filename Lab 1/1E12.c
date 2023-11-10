#include <stdio.h>

int main()
{
    float m;
    float k;
    printf("Digite uma velocidade em milha: ");
    scanf("%f", &m);
    printf("A velocidade digitada foi %f",m);
    k = m*1.6;
    printf(" milhas, que convertida para km/h será de:%f", k);
    return 0;
} 