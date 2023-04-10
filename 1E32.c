#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int a;
    int b;
    int f;
    printf("digite um número:");
    scanf("%d", &x);
    y = 3 * x;
    z = 2 * x;
    a = y + 1;
    b = z - 1;
    f = a + b;
    printf("a soma do sucessor de seu triplo com o antecessor do seu dobro é: %d", f);
    return 0;
}