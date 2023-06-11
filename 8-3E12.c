#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int greatestSmallest(int *arr, int L, int *Gr, int *Sm);    //lê um vetor e retorna o maior e menor valor do vetor;


int main(){

    //var;
    int *p, maior, menor, i, L;

    //por motivos de demonstração, o programa simplesmente usará um vetor preenchido aleatoriamente com valores inteiros
    //positivos e negativos;
    printf("Quantos elementos deverao existir em seu array?\n");
    do{
        printf(">> ");
        scanf("%d", &L);
        if(L <= 0) printf("Valor invalido!\n\n");
    }while(L <= 0);

    //inicializando seed de rand() e alocando o array;
    srand(time(NULL));
    if((p = (int*) calloc(L, sizeof(int))) == NULL){
        printf("Falha ao alocar memoria.\n\n");
        return 1;
    }

    printf("\n\n[");
    for(i = 0; i < L; i++){
        p[i] = (rand() % 201) - 100;
        printf("%d, ", p[i]);
    }
    printf("\b\b]\n\n");

    if(greatestSmallest(p, L, &maior, &menor)){
        printf("ERR.\n\n");
        return 1;
    }
    else{
        printf("\nMaior valor do vetor: %d\nMenor valor do vetor: %d\n\n", maior, menor);
    }
    system("pause");
    return 0;
}


int greatestSmallest(int *arr, int L, int *Gr, int *Sm){

    //var;
    int i;

    //código de erro caso o comprimento do vetor seja menor ou igual a 0;
    if(L <= 0) return 1;

    //igualando os valores de Gr e Sm ao array;
    *Gr = *arr;
    *Sm = *arr;

    //loop;
    for(i = 0; i < L; i++){
        if(arr[i] > *Gr) *Gr = arr[i];
        else if (arr[i] < *Sm) *Sm = arr[i];
    }
    return 0;
}