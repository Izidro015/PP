#include <stdio.h>
#include <stdlib.h>


int greatestInArr(int *arr, int l, int *G);    //escaneia um vetor e retorna qual o maior valor neste.


int main(){
    //var. arr é o vetor, N é o comprimento do vetor, k é o número de elementos impresso por linha, Gr armazena o maior valor encontrado;
    int *arr = NULL, i, j, k, N, Gr;
    printf("Insira quantos elementos tera seu vetor de inteiros.\n");
    do{
        printf(">> ");
        scanf("%d", &N);
        if(N < 1) printf("Valor invalido!\n\n");
    }while(N < 1);

    //alocando N espaços de memória para o vetor *arr;
    if((arr = (int*) calloc(N, sizeof(int))) == NULL){
        printf("Falha ao alocar memoria...\n\n");
        system("pause");
        return 0;
    }
    for(i = 0; i < N; i++){
        printf("Insira o %do valor de seu vetor.\n>> ", i+1);
        scanf("%d", (arr+i));
    }
    
    //lendo k;
    printf("Quantos itens de seu vetor devem ser impressos por linha?\n");
    do{
        printf(">> ");
        scanf("%d", &k);
        if(k < 1) printf("Valor invalido!\n\n");
    }while(k < 1);

    if(greatestInArr(arr, N, &Gr) == 1){
        printf("ERR.\n\n");
        system("pause");
        return 0;
    }
    else{
        printf("\n\t");
        for(i = 0, j = 0; i < N; i++, j++){
            if(j == k){
                printf("\n\t");
                j = 0;
            }
            printf("%d ", arr[i]);
        }
    }
    printf("\n\nO maior valor de seu vetor eh %d!\n\n", Gr);
    system("pause");
    return 0;
}


int greatestInArr(int *arr, int l, int *G){
    //var;
    int i;
    if(l < 1) return 1;     //código de erro caso l seja 0 ou menor;
    *G = *arr;
    for(i = 0; i < l; i++){
        if(*(arr+i) > *G) *G = *(arr+i);
    }
    return 0;
}