#include <stdio.h>
#define PI 3.141592

int main() {
    float r;
    float a;
    printf("Digite o valor do raio de uma circunferência:");
    scanf("%f", &r);
    a=PI*(r*r);
    printf("A área dessa circunferência é: %0.2f", a);
    return 0;
} 