#include <stdio.h>

int main()
{
    float x; 
    printf("digite um número real: ");
    scanf("%f", &x);
    printf("Você digitou o número: %f", x);
    printf(". A quinta parte desse número é = %f", x/1/5);
    return 0;
} 