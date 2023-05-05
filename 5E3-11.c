#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*11. Escreva um programa que recebe uma string S e inteiros não-negativos i e j e imprima o 
segmento S[i..j].*/

int main(){
    char str[100];
    int x, y, size;
    printf("Insira uma string: ");
    fgets(str, 100, stdin);
    size=strlen(str)-1; //fgets conta \n como caractere
    printf("%d\n", size);
    do{
        printf("Insira o ponto de partida e de chegada: ");
        scanf("%d %d", &x, &y);
        if(x>=size||y>=size){
            printf("Um dos valores inseridos excede o tamanho da string, tente novamente:\n");
        }
        if(x<0||y<0){
            printf("Foi inserido um numero negativo, tente novamente:\n");
        }
    }while(x<0||y<0||x>=size||y>=size);
    printf("Esse segmento eh:\n");
    if(y-x>0){ //Ponto de partida antecede o ponto de chegada
        for(; x<=y; x++){
            printf("%c", str[x]); //Esse programa considera que o usuário digitou a posição na memória da string, e não o nº caractere
        }
    } else{ //Ponto de partida procede o ponto de chegada(impressão vai de trás pra frente na string)
        for(; x>=y; x--){
            printf("%c", str[x]);
        }
    }
    return 0;
}