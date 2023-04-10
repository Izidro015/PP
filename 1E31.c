#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("digite um número:");
    scanf("%d", &x);
    y = x - 1;
    z = y + 2;
    printf("O antecessor é %d, e o sucessor é %d", y, z);
    return 0;
}