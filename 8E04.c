#include <stdio.h>
#include <stdlib.h>

/*4 Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço.*/

int main(){
    int num1, num2;
    int *p, *p1;
    printf("Digeite um inteiro: ");
    scanf("%d", &num1);
    p=&num1;
    printf("Digite outro inteiro: ");
    scanf("%d", &num2);
    p1=&num2;
    if(p>p1){
        printf("%d tem o maior endereço.", *p);
    }else{
        printf("%d tem o maior endereço.", *p1);
    }
    return 0;
}