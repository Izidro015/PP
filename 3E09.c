#include <stdio.h>
#include <math.h>

/*9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/

int main(){
    int a,b,num;
    b=1;
    printf("Digite um número: ");
    scanf("%d", &num);
    for(a=0;a<num;a++){
        printf("%d; ", b);
        b=b+2;
    }
    return 0;
}