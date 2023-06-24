#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, X, count = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    // Alocação dinâmica do vetor
    int *vetor = (int*)malloc(N * sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número X: ");
    scanf("%d", &X);

    // Contagem dos múltiplos de X no vetor
    for (i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            count++;
        }
    }

    printf("Quantidade de múltiplos de %d no vetor: %d\n", X, count);

    free(vetor); // Liberação da memória alocada

    return 0;
}
