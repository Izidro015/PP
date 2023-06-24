#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*)malloc(tamanho * sizeof(int)); // Alocação dinâmica de memória

    printf("Digite os valores do vetor:\n");

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]); // Leitura dos valores do vetor
    }

    printf("O vetor lido foi:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]); // Impressão do vetor lido
    }
    printf("\n");

    free(vetor); // Liberação da memória alocada

    return 0;
}
