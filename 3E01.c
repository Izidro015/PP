#include <stdio.h>

/*1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.*/

int main(){
    int a;
    a=1;
    printf("5 primeiros multiplos de 3: ");
    while(a<=5){
        printf("%d ", 3*a);
        a++;
    }
    return 0;
}