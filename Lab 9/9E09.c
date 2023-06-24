#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int numero, tamanho = 0;
    int i;

    while (1) {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        tamanho++;
        vetor = (int *)realloc(vetor, tamanho * sizeof(int));
        vetor[tamanho - 1] = numero;
    }

    printf("\nVetor lido:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
