#include <stdio.h>
#include <math.h>

/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:  O número digitado 
ao quadrado  A raiz quadrada do número digitado.*/

int main(){
    float a,b,c;
    printf("Digite um numero:");
    scanf("%f", &a);
    if(a>0){
        b=a*a;
        printf("O numero ao quadrado eh: %0.0f \n", b);
        c=sqrt(a);
        printf("A raiz quadrada desse numero eh: %0.2f", c);
    }else{
        printf("Soh numeros positivos amigaum (-_-')");
    }
    return 0;
}