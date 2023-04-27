#include <stdio.h>

//1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.

int mult(int num){
    return num*2;
}
int main(){
    int num, dobro;
    printf("Digite um número: ");
    scanf("%d",&num);
    dobro=mult(num);
    printf("O seu dobro vale: %d\n", dobro);
    return 0;
}