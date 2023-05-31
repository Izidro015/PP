#include <stdio.h>
#include <stdlib.h>

/*7 Escreva um programa que receba um array de inteiros com 10 elementos
digitados pelo usuário e encontre o menor (min) e o maior (max) elemento
desse array. Utilize ponteiros tanto para acessar o array quanto para acessar
as variáveis min e max, ou seja, são necessários pelo menos 3 ponteiros.*/

int main(){
    int vet[10];
    int i, *p, *pmenor, *pmaior;
    p=vet;
    for(i=0;i<10;i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vet[i]);
    }//verificação
    for(i=0;i<10;i++){
        if(i==0){
           pmaior=p+i;//atribui o endereço do primeiro elemento do array a pmaior
           pmenor=pmaior;//atribui o mesmo endereço a pmenor
       }else if(*(p+i)>*pmaior){
           pmaior=p+i;
       }else if(*(p+i)<*pmenor){
           pmenor=p+i;
       }
    }
    printf("Maior: %d\nMenor: %d.", *pmaior,*pmenor);
    return 0;
}