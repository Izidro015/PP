#include <stdio.h>
#include <stdlib.h>

/*2. Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
Escreva ao final a matriz obtida.*/

int main(){
    int i, j;
    int matriz[5][5];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%i]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
