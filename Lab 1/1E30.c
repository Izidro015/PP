#include <stdio.h>

int main()
{
    float r;
    float d;
    printf("digite uma qunatia de dinehiro em reais:");
    scanf("%f", &r);
    d=r/5.24;
    printf("\n A quantia digitada transferida para dólares será equivalente a: %0.2f", d);
    printf(" dólares.");
    return 0;
}