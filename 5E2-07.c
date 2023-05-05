#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de 
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a 
cartela gerada.*/

int main(){
    int i, j, k, l;
    int matriz[5][5];
    srand(time(NULL));
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
            if(j > 0 && i > 0){
                for(k = 0; k < 5; k++){
                    for(l = 0; l < 5; l++){
                    
                        if(matriz[i][j] == matriz[k][l]){
                            printf("%i == %i\n", matriz[i][j], matriz[k][l]);
                            matriz[i][j] = rand() % 100;
                        }
                        
                    }
                }
            }
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%-2i]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}