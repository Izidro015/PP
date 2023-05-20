#include <stdio.h>
#include <stdlib.h>

/*6 Escreva um programa que declare duas variáveis do tipo inteiro e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve ler dois números para essas variáveis e os imprimir,
realizando as quatro operações básicas de matemática com esses números.*/

int main(){
    int num1,num2,subtracao,soma,multi,divisao;
    int*p,*p1;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    p=&num1;
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    p1=&num2;
    printf("\n**Soma**\n");
    soma=*p+*p1;
    printf("a soma eh: %d", soma);
    printf("\n**Subtracao**\n");
    subtracao=*p-*p1;
    printf("a subtracao eh: %d", subtracao);
    printf("\n**Multiplicacao**\n");
    multi=(*p)*(*p1);
    printf("a multiplicação eh: %d", multi);
    printf("\n**Divisao**\n");
    divisao=(*p)/(*p1);
    printf("a divisão eh: %d", divisao);
    return 0;
}