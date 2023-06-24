#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int countPares = 0;
    int countImpares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*)malloc(tamanho * sizeof(int)); // Alocação dinâmica de memória

    printf("Digite os valores do vetor:\n");

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]); // Leitura dos valores do vetor

        if (vetor[i] % 2 == 0) {
            countPares++; // Incrementa o contador de pares
        } else {
            countImpares++; // Incrementa o contador de ímpares
        }
    }

    printf("Quantidade de números pares: %d\n", countPares);
    printf("Quantidade de números ímpares: %d\n", countImpares);

    free(vetor); // Liberação da memória alocada

    return 0;
}
