#include <stdio.h>
#include <stdlib.h>

/*8 Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um
programa que leia a variável ‘A’ e calcule e exiba o dobro, o triplo e o
quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B
deve ser usada para calcular o dobro, C o triplo e D o quádruplo.*/

int main (){
    int a, *b, **c, ***d;
    b=&a;
    c=&b;
    d=&c;
    printf("Insira um inteiro: ");
    scanf("%d", b);
    printf("Dobro: %d.\nTriplo: %d.\nQuadruplo: %d.\n", (*b)*2, (**c)*3, (***d)*4);
    return 0;
}