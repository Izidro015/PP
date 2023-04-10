#include <stdio.h>

int main ()
{
    int m;
    int n;
    int o;
    int x, y, z;
    int a;
    printf("digite três números:\nm=");
    scanf("%d", &m);
    printf("n=", n);
    scanf("%d", &n);
    printf("o=", o);
    scanf("%d", &o);
    x=m*m;
    y=n*n;
    z=o*o;
    printf("O quadrado dos números digitados é: m=%d, n=%d, o=%d", x, y, z);
    a=x+y+z;
    printf("A soma desses números é: %d", a);
    return 0;
}