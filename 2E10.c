#include <stdio.h>

/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso 
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7*/

int main() {
    float a,b,c;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%f", &a);
    printf("Digite seu sexo [F] ou [M]: ");
    scanf("%s",&sexo);
    if(sexo=='M'){
        b=(72.7*a)-58.0;
        printf("O seu peso ideal é: %0.3f", b);
    }if(sexo=='F'){
        c=(62.1*a)-44.7;
        printf("O seu peso ideal é: %0.3f", c);
    }
    return 0;
}
