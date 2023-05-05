#include <stdio.h>
#include <stdlib.h>

/*3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior 
valor.*/

int main(){
    int matriz[4][4];
    int maior = 0;
    int i, j, ifinal, jfinal;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o valor [%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);

            if(maior < matriz[i][j]){
                maior = matriz[i][j];
                ifinal = i;
                jfinal = j;
            }
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%i] ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n O maior valor %i pertence a [%i,%i]", maior, ifinal, jfinal);
    return 0;
}