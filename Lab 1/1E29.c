#include <stdio.h>

int main()
{
    float w;
    float x;
    float y;
    float z;
    float M;
    printf("Digite suas notas:\n P1= ");
    scanf("%f", &w);
    printf("P2= ");
    scanf("%f", &x);
    printf("P3= ");
    scanf("%f", &y);
    printf("P4= ");
    scanf("%f", &z);
    M=(w+x+y+z)/4;
    printf("A média aritmética é: %f", M);
    return 0;
}