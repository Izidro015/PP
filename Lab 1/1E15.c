#include <stdio.h>
#define PI 3.141592

int main()
{
    float R;
    float G;
    printf("digite um ângulo em radianos: ");
    scanf("%f",&R);
    G=R*180/PI;
    printf("O resultado em graus é: %f", G);
    return 0;
} 