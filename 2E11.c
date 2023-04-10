#include <stdio.h>
/*11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus
algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que
zero, o programa terminará com a mensagem:“Número inválido”.*/
int main() {
    int a;//número inteiro
    int b;//soma dos dígitos de a
    int c;//armazenar cada digito de a
    printf("Digite um número:");
    scanf("%d", &a);
    if(a<0){
        printf("Número inválido.");
    }
    b=0;
    while(a>0){
        c=a%10;//o digito mais a direita de a é obtido
        b=b+c;
        a=a/10;//a passa a ser o a anterior sem o digito a direita
    }
    printf("A soma dos númeors é: %d", b);
}