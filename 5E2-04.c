#include <stdio.h>
#include <stdlib.h>

/*4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse 
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/

int main(){
    int i, j, x;
    int matriz[5][5];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o valor [%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("Digite o valor X: ");
    scanf("%i", &x);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(x == matriz[i][j]){
                printf("Valor encontrado em [%i,%i]", i, j);
                break;
            }
        }
    }
    return 0;
}