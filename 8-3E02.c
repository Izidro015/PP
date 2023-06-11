#include <stdio.h>
#include <stdlib.h>

/*2 Faça um programa que leia dois valores inteiros e chame uma função que
receba estes 2 valores de entrada e retorne o maior valor na primeira
variável e o menor valor na segunda variável. Escreva o conteúdo das 2
variáveis na tela.*/

void incrementa (int *a, int *b){
    int i;//espaço temporario
    if(*a>*b){
        printf("Maior: %d;\nMenor: %d.", *a,*b);
    }else{
        i=*a;
        *a=*b;
        *b=i;
        printf("Maior: %d;\nMenor: %d.", *a,*b);
    }
}
int main(){
    int a,b;
    printf("Digite um numero: ");
    setbuf(stdin,NULL);
    scanf("%d", &a);
    printf("Digite um numero: ");
    setbuf(stdin,NULL);
    scanf("%d", &b);
    printf("Antes: %d e %d\n", a,b);
    incrementa(&a,&b);
    return 0;
}
