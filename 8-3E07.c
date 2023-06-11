#include <stdio.h>
#include <stdlib.h>

/*7 Escreva uma função que aceita como parâmetro um array de inteiros com N
valores, e determina o maior elemento do array e o número de vezes que
este elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para
o programa que a chamou o valor 15 e o número 3 (indicando que o número
15 ocorreu 3 vezes). A função deve ser do tipo void.*/

void encontrarMaiorelemento(int *vet, int tamanho){
    int maiorelemento=vet[0];
    int ocorrencia=1;
    for(int i=1; i<tamanho; i++){
        if(vet[i]>maiorelemento){
            maiorelemento=vet[i];
            ocorrencia=1;
        }else if(vet[i]==maiorelemento){
            ocorrencia++;
        }
    }
    printf("Maior elemento: %d\n", maiorelemento);
    printf("Ocorrencias: %d\n", ocorrencia);
}
int main(){
    int tamanho;
    printf("Digite o a quantidade de valores: ");
    scanf("%d", &tamanho);
    int vet[tamanho];
    printf("Digite os elementos desse array:\n");
    for(int i=0;i<tamanho;i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    encontrarMaiorelemento(vet,tamanho);
    return 0;
}