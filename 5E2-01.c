#include <stdio.h>
#include <stdlib.h>

/*1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.*/

int main(){
    int matriz[4][4];
    int i,j;
    int count = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite [%i,%i]: ", i, j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j] > 10){
                count += 1;
                printf("%i numero(s) maiores que 10 e contando", count);
                printf("\n");
            }
        }
    }
    printf("A quantidade de valores maiores que 10 sao: %d\n", count);
    return 0;
}