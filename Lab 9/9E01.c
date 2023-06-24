#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = (int*)malloc(5 * sizeof(int)); // a) Aloca dinamicamente um array de 5 números inteiros

    printf("Digite 5 números:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]); // b) Solicita ao usuário que digite os 5 números
    }

    printf("Os números digitados foram:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]); // c) Mostra os 5 números na tela
    }
    printf("\n");

    free(numeros); // d) Libera a memória alocada

    return 0;
}
