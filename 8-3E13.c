#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*13 Faça um programa que possua uma função para:
 - ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler
2 notas válidas e que devolver os 2 números lidos);
 - calcular a média simples e a média ponderada e retorná-las por parâmetro,
onde a segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3*/

void notas(float *a, float *b){
    if((*a<0||*a>10)||(*b<0||*b>10)){
        printf("numero inválido");
        exit(0);
    }else{
        printf("Nota 1: %0.2f\nNota2: %0.2f\n", *a,*b);
    }
    float mediasimples;
    mediasimples=(*a+*b)/2;
    float mediaponderada;
    mediaponderada=(*a + pow(*b,2))/3;
    printf("A media simples eh: %0.2f;\nA media ponderada eh: %0.2f;", mediasimples,mediaponderada);
}
int main(){
    float nota1,nota2;
    printf("Digite a nota da primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    notas(&nota1,&nota2);
    return 0;
}