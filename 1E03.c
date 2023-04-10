#include <stdio.h>

int main()
{
    int m;
    int x;
    int y;
    int z;
    printf("digite tres números inteiros:");
    scanf("%d", &x);
    scanf ("%d", &y);
    scanf("%d", &z);
    m = x*y*z;
    printf("o valor do meu x = %d, y = %d e z = %d", x,y,z);
    printf(". A multiplicacao entre eles eh: %d", m);
    return 0;
}