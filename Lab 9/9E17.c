#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int tamanhoInicial = 10;
    int tamanhoAtual = tamanhoInicial;
    int indice = 0;
    int numero;

    vetor = (int *)malloc(tamanhoInicial * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os números (digite 0 para encerrar): \n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        vetor[indice] = numero;
        indice++;

        if (indice == tamanhoAtual) {
            int *novoVetor = (int *)malloc((tamanhoAtual + 10) * sizeof(int));
            if (novoVetor == NULL) {
                printf("Erro ao alocar memória.\n");
                return 1;
            }

            for (int i = 0; i < tamanhoAtual; i++) {
                novoVetor[i] = vetor[i];
            }

            free(vetor);
            vetor = novoVetor;
            tamanhoAtual += 10;
        }
    }

    printf("Vetor lido: ");
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
