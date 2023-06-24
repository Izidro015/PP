#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int i, count_zeros = 0;

    vetor = (int *)calloc(1500, sizeof(int));

    // Verifica se o vetor contém 1500 valores inicializados com zero
    for (i = 0; i < 1500; i++) {
        if (vetor[i] == 0) {
            count_zeros++;
        }
    }

    printf("Quantidade de zeros no vetor: %d\n", count_zeros);

    // Atribui para cada elemento do vetor o valor do seu índice
    for (i = 0; i < 1500; i++) {
        vetor[i] = i;
    }

    // Exibe os 10 primeiros elementos do vetor
    printf("\nPrimeiros 10 elementos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    // Exibe os 10 últimos elementos do vetor
    printf("\nÚltimos 10 elementos:\n");
    for (i = 1490; i < 1500; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
