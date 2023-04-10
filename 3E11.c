#include <stdio.h>
#include <math.h>

/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números 
naturais de 0 até N em ordem crescente.*/

int main(){
    int a,b,c,N;
    b=0;
    c=0;
    printf("digite um numero: ");
    scanf("%d", &N);
    for(a=0;a<=N;a++){
        printf("%d; ", b);
        c+=b;
        b++;
    }
    return 0;
}