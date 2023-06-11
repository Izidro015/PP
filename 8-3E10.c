#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* arrSum(int *a1, unsigned int l1, int *a2, unsigned int l2, int *aR);    //primeiro vetor, seu comprimento, segundo vetor, seu comprimento, vetor-soma;

int main(){ 

    //var;
    int *v1, *v2, *vRes, i;
    unsigned int C1, C2;

    //para motivos de demonstração, o vetor utilizado será preenchido com valores aleatórios de 1-10;

    do{
        printf("Insira o tamanho de seu primeiro vetor aleatorio.\n>> ");
        scanf("%d", &C1);
        if(C1 <= 0) printf("Tamanho invalido!\n");
    }while(C1 <= 0);
    do{
        printf("Insira o tamanho de seu segundo vetor aleatorio.\n>> ");
        scanf("%d", &C2);
        if(C2 <= 0) printf("Tamanho invalido!\n");
    }while(C2 <= 0);

    srand(time(NULL));
    //alocação de memória;
    v1 = (int*) malloc(C1*sizeof(int));
    v2 = (int*) malloc(C2*sizeof(int));

    printf("\n[");
    for(i = 0; i < C1; i++){
        v1[i] = (rand() % 10) + 1;
        printf("%d, ", v1[i]);
    }
    printf("\b\b]\n\n[");
    for(i = 0; i < C2; i++){
        v2[i] = (rand() % 10) + 1;
        printf("%d, ", v2[i]);
    }
    printf("\b\b]");

    vRes = arrSum(v1, C1, v2, C2, vRes);
    if(vRes == NULL){
        printf("\n\nImpossivel somar: vetores tem comprimentos diferentes.\n\n");
    }
    else{
        printf("\n\nVetor-soma:\n\n[");
        for(i = 0; i < C1; i++){
            printf("%d, ", vRes[i]);
        }
        printf("\b\b]\n\n");
    }

    system("pause");
    return 0;
}

int* arrSum(int *a1, unsigned int l1, int *a2, unsigned int l2, int *aR){   //o programa retorna um ponteiro NULL quando falha na alocação de memória,
                                                                            //ou quando os arrays tem tamanhos diferentes;
    //var;
    unsigned int i;
    if(l1 != l2){
        aR = NULL;
        return aR;
    }
    else{
        aR = (int*) malloc(l1*sizeof(int));
        if(aR == NULL){
            return aR;
        }
        else{
            for(i = 0; i < l1; i++){
                aR[i] = a1[i] + a2[i];
            }
        }
        return aR;
    }
}