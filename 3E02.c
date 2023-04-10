#include <stdio.h>
#include <stdlib.h>

/*2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while*/

int main(){
    int a;
    printf("em for:\n");
    for(a=1;a<=100;a++){
        printf("%d; ",a);
        
    }
    printf("\nem while:\n");
    a=1;
    while(a<=100){
        printf("%d; ",a);
        a++;
    }
    printf("\nem do-while:\n");
    a=1;
    do{
        a++;
        printf("%d; ",a);
    }while(a<=99);
    return 0;
}