#include <stdio.h>
#include <math.h>

/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, 
com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

int main(){
    int a,b,num,soma;
    printf("Digite um número: ");
    scanf("%d", &num);
    b=0;
    soma=0;
    for(a=0;a<num/*-1*/;a++){/*um número anterior ao q pediu*/
        b++;//vai add +1 no valor de b
        if(num%b==0){
            soma+=b;
        }
    }soma-=num;
    printf("a soma dos divisores do número %d = %d", num,soma);
    return 0;
}