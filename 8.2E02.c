#include <stdio.h>
#include <stdlib.h>

/*2 Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
colunas. Utilizando aritmética de ponteiro, imprima o endereço de cada
posição dessa matriz.*/

int main(){
    float mat[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,num;
    float *p;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            p=&mat[i][j];
            printf("%p   ", p);
        }
        printf("\n");
    }
    return 0;
}