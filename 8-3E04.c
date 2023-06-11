#include <stdio.h>
#include <stdlib.h>

/*4 Faça um programa que leia três valores inteiros e chame uma função que
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se
os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela.*/

int incrementa (int *a, int *b, int *c){
    if(*a>*b && *a>*c && *b>*c){
        printf("Maior: %d;\nMedio: %d;\nMenor: %d;", *a,*b,*c);
        return 0;
    }else if(*a>*b && *a>*c && *b<*c){
        printf("Maior: %d;\nMedio: %d;\nMenor: %d;", *a,*c,*b);
        return 0;
    }else if(*a<*b && *a>*c && *b>*c){
        printf("Maior: %d;\nMedio: %d;\nMenor: %d;", *b,*a,*c);
        return 0;
    }else if(*a<*b && *a<*c && *b>*c){
        printf("Maior: %d;\nMedio: %d;\nMenor: %d;", *b,*c,*a);
        return 0;
    }else if(*a>*b && *a<*c && *b<*c){
        printf("Maior: %d;\nMedio: %d;\nMenor: %d;", *c,*a,*b);
        return 0;
    }else if(*a<*b && *a<*c && *b<*c){
        printf("Maior: %d;\nMedio: %d;\nMenor: %d;", *c,*b,*a);
        return 0;
    }else if(*a==*b==*c){
        printf("eh tudo igual.");
        return 1;
    }
}
int main(){
    int a,b,c;
    printf("Digite um numero: ");
    setbuf(stdin,NULL);
    scanf("%d", &a);
    printf("Digite um numero: ");
    setbuf(stdin,NULL);
    scanf("%d", &b);
    printf("Digite um numero: ");
    setbuf(stdin,NULL);
    scanf("%d", &c);
    incrementa(&a,&b,&c);
    return 0;
}