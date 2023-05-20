#include <stdio.h>
#include <stdlib.h>

/*2 Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.*/

int main(){
    int x;
    int *p;
    float y;
    float *p1;
    char n;
    char *p2;
    printf("Digite um inteiro: ");
    scanf("%d", &x);
    p=&x;
    printf("Digite um numero real: ");
    scanf("%f", &y);
    p=&y;
    printf("Digite uma letra ou um caractere especial: ");
    n=getchar();
    p2=&n;
    *p++;
    *p1++;
    *p2++;
    printf("**Antes de modificar**\nnumero inteiro: %d;\nnumero real: %f;\nletra ou carctere especial: %c;\n\n**Modificados**\nnumero inteiro: %p;\nnumero real: %p;\nletra ou caractere especial: %p;", x,y,n,*p,*p1,*p2);
    return 0;
}