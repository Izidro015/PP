#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a 
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos 
acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/

int main(){
    int i, j;
    int matriz[4][4];
    srand(time(NULL));//matriz original
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = rand() % 20; 
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%-2i]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");//matriz transformada
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j > i){
                matriz[i][j] = 0;
            } 
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%-2i]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}