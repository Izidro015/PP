#include <stdio.h>
#include <stdlib.h>

/*4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil).*/

int main(){
    int a;
    a=1000;
    while(a<=100000){
        printf("%d; ",a);
        a+=1000;
        if(a>1000000){
            printf("FIM!");
        }
    }
    return 0;
}