#include <stdio.h>

int main()
{
    int k;
    float m;
    printf("Digite uma velocidade em km/h: ");
    scanf("%d", &k);
    printf("A velocidade digitada foi %d",k);
    m = k/3.6;
    printf(" km/h, que convertida para m/s será de:%f", m);
    return 0;
} 