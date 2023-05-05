#include <stdio.h>
#include <stdlib.h>

/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.*/

int main(){
    int i,j=0,k=0,vetor[5];

    for (i=0;i<5;i++){
        scanf("%d", &vetor[i]);//vai dar o valor na casa i
    }
    for(i=1;i<5;i++){
        if(j<vetor[i]){
            j=i;
        }
        if(k>vetor[i]){
           k=i; 
        }
    }
    printf("Maior eh: %d\n", vetor[j]);
    printf("Menor eh: %d\n", vetor[k]);
    return 0;
}