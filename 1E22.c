#include <stdio.h>

int main()
{
    float J;
    float M;
    printf("Dê um comprimento em jardas: ");
    scanf("%f", &J);
    M=0.91*J;
    printf(" A medida impressa convertida em metros é:%f", M);
    return 0;
} 