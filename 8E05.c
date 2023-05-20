#include <stdio.h>
#include <stdlib.h>

/*5 Faça um programa que leia dois variáveis do tipo inteiro (A e B) e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve retornar a soma do dobro dos dois números lidos. O dobro
de A na própria variável A e o dobro de B na própria variável B.*/

int main(){
    int num1,num2,soma;
    int *p,*p1;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    p=&num1;
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    p1=&num2;
    *p=(*p)*2;
    *p1=(*p1)*2;
    soma=*p+*p1;
    printf("A soma do dobro dos numeros eh: %d", soma);
    return 0;
}