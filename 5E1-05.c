#include <stdio.h>
#include <stdlib.h>

/*5. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i 
a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/

int main(){
    int i,vet[50];
    for(i=0;i<50;i++){
        vet[i] = (i+5*i)%(i+1);
        printf("%i\n",vet[i]);  
    }
    return 0;
}