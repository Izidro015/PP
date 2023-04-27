#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: hipotenusa = √(𝑎² + 𝑏²). 
Faça uma função que receba os valores de a e b e calcule o valor da hipotenusa através da equação.*/

void verifi(float a){
    if (a<0){
        printf("numero invalido");
        exit (0);
    }
}
float hiptriangulo(float a, float b){
    float hip;
    hip=sqrt(pow(a,2)+pow(b,2));
    return hip;
}

int main(){
    float a,b,hipotenusa;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    verifi(a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    verifi(b);
    hipotenusa=hiptriangulo(a,b);
    printf("a hipotenusa desse triangulo serah: %0.2f", hipotenusa);
    return 0;
}