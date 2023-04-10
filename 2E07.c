#include <stdio.h>
#include <math.h>

/*7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, 
imprima a mensagem: “Números iguais”.*/

int main() {
    float a,b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a,&b);
    if(a>b){
        printf("%0.0f é maior.", a);
    }
    if(a<b){
        printf("%0.0f é maior.", b);
    }
    if(a==b){
        printf("Númeors iguais.");
    }
    return 0;
}