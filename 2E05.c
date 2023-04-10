#include <stdio.h>

//5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.

int main(){
    int a,c;
    printf("Digite um numero: ");
    scanf("%d",&a);
    c=a/2;
    if(c*2==a){
        printf("O numero digitado eh par.");
    }else{
        printf("O nemero digitado eh impar.");
    }
    return 0;
}