#include <stdio.h>
#include <stdlib.h>

/*1. Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, i.e., esta função é
chamada passando duas variáveis A e B, por exemplo, e após a execução da
função, A conterá o valor de B e B terá o valor de A. Imprima os valores
antes e depois da troca.*/

void incrementa (int *a, int *b){
    int i;//espaço temporario
    i=*a;
    *a=*b;
    *b=i;
    printf("\nDepois da troca vai ficar: %d e %d", *a,*b);
}
int main(){
    int a,b;
    printf("Digite um numero: ");
    setbuf(stdin,NULL);
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);
    printf("Antes: %d e %d\n", a,b);
    incrementa(&a,&b);
    return 0;
}