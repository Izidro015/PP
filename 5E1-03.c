#include <stdio.h>
#include <stdlib.h>

/*3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na 
ordem inversa.*/

int main(){
    int vetor[6];
    int i, j;
    for(i=0;i<6;i++){//for é o tamanho do vetor
        scanf("%d", &j);
        vetor[i]=j;
    }
    for(i=5;i>=0;i--){
    printf("%d\n", vetor[i]);
    }
    return 0;
}