#include <stdio.h>

int main()
{
    float m;
    float k;
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &m);
    printf("A velocidade digitada foi %f",m);
    k = m*3.6;
    printf(" m/s, que convertida para km/h será de:%f", k);
    return 0;
} 