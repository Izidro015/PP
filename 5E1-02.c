#include <stdio.h>
#include <stdlib.h>

/*2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá 
escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

int main(){
    int vetor[8];
    int i, x, y;
    for(i=0;i<8;i++){//for é o tamanho do vetor
        int j=0;//auxiliar dentro do for
        scanf("%d", &j);
        vetor[i]=j;
    }
    printf("Digite o valor de x entre 0 e 7: ");
    scanf("%d", &x);
    printf("Digite o valor de y entre 0 e 7: ");
    scanf("%d", &y);
    printf("A soma dos valores x+y eh igual a: %d", (vetor[x]+vetor[y]));
    return 0;
}