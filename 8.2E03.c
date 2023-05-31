#include <stdio.h>
#include <stdlib.h>

/*3 Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.*/

int main(){
    int vet[5];
    int i,*p;
    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<5;i++){
        p=&vet[i];
        *p=(*p)+(*p);
        printf("%d\n", *p);
    }
    return 0;
}