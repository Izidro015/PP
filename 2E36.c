#include <stdio.h>

/*36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga 
ao vendedor. Para calcular a comissão, considere a tabela abaixo:*/

int main() 
{
    float a, b;
    printf ("Digite o valor da venda\n");
    scanf ("%f", &a);
    if (a>=100000)
    {
        b = 700 + (0.16*a);
        printf ("A comissão sera de: %.2f", b);
        return 0;
    }
    if (a<100000 && a>=80000)
    {
        b = 650 + (0.14*a);
        printf ("A comissão sera de: %.2f", b);
        return 0;
    }
    if (a<80000 && a>=60000)
    {
        b = 600 + (0.14*a);
        printf ("A comissão sera de: %.2f", b);
        return 0;
    }
    if (a<60000 & a>=40000)
    {
        b = 550 + (0.14*a);
        printf ("A comissão sera de: %.2f", b);
        return 0;
    }
    if (a<40000 & a>=20000)
    {
        b = 500 + (0.14*a);
        printf ("A comissão sera de: %.2f", b);
        return 0;
    }
    if (a<20000)
    {
        b = 400 + (0.14*a);
        printf ("A comissão sera de: %.2f", b);
        return 0;
    }
    return 0;
}