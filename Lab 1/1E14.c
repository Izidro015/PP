#include <stdio.h>
#define PI 3.141592

int main()
{
    float G;
    float R;
    printf("digite um ângulo em graus: ");
    scanf("%f",&G);
    R=G*PI/180;
    printf("O resultado em radianos é: %f", R);
    return 0;
} 