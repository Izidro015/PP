#include <stdio.h>

//1. Faça um programa que receba dois números e mostre qual deles é o maior.

int main(){
    float a,b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    if(a>b){
        printf("O numero %0.1f eh maior que o %0.1f.\n", a,b);
    } else{
        printf("O numero %0.1f eh maior que o %0.1f.\n", b,a);
    }
    return 0;
}