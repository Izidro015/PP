#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho;
    double *vetor;
    int i;

    printf("Digite a quantidade de valores a serem armazenados (no mínimo 10): ");
    scanf("%d", &tamanho);

    if (tamanho < 10) {
        printf("O tamanho do vetor deve ser igual ou maior que 10.\n");
        return 1;
    }

    vetor = (double *)malloc(tamanho * sizeof(double));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        vetor[i] = (double)(rand() % 101);
    }

    printf("Valores armazenados nos 10 primeiros elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
