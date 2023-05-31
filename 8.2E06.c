#include <stdio.h>
#include <stdlib.h>

/*6 Elabore um programa que dado um array e um valor do mesmo tipo do
array, preencha os elementos de array com esse valor. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.*/

void imprime(int *num, int n,float *p){
    int i;
    for(i=0;i<n;i++){
        printf("%0.2f \n", *(p));
    }
}
int main(){
    int num[5];
    float numero;
    float *p;
    p=&numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    imprime(&num[0],5,p);
    
    return 0;
}