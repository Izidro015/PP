#include <stdio.h>
#include <stdlib.h>

//10. Faça uma função que receba dois números e retorne qual deles é o maior.

float recebe (float a, float b){
    if(a>b){
        printf("%f é maio que %f", a,b);
        return 0;
    }if (a<b){
        printf("%f é maior que %f", b,a);
        return 0;
    }
}

int main(){
    float num1, num2, resultado;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um segundo numero: ");
    scanf("%f", &num2);
    resultado=recebe(num1,num2);
}