#include <stdio.h>
#include <stdlib.h>

/*8 Implemente uma função que receba como parâmetro um array de números
reais de tamanho N e retorne quantos números negativos há nesse array.
Essa função deve obedecer ao protótipo: int negativos(float *vet, int
N);*/

void negativos(float *vet, int n){
    int ocorrencia=0;
    for(int i=1; i<n; i++){
        if(vet[i]>=0){
            ocorrencia=1;
        }else if(vet[i]<=0){
            ocorrencia++;
        }
    }
    printf("Ocorrencias de numeros negativos: %d\n", ocorrencia);
}
int main(){
    int n;
    printf("Digite o a quantidade de valores: ");
    scanf("%d", &n);
    float vet[n];
    printf("Digite os elementos desse array:\n");
    for(int i=0;i<n;i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &vet[i]);
    }
    negativos(vet,n);
    return 0;
}