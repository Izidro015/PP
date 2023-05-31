#include <stdio.h>
#include <stdlib.h>

/*4 Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.*/

int main(){
    int vet[5];
    int i,num,*p;
    p=vet;
    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);   
        switch(*(p+i)%2){
        case 0: printf("%p\n", p+i);break;
        default:continue;
        }
    }
    return 0;
}