#include <stdio.h>
#include <stdlib.h>

/*1 Crie um programa que contenha um array de float contendo 10 elementos.
Utilizando aritmética de ponteiro, imprima o endereço de cada posição
desse array.*/

int main(){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    int i;
    for (i=0;i<10;i++){
        p=&vet[i];
        printf("%d\n", p);
    }
    return 0;
}