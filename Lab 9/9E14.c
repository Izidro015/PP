#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(float **matriz, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    float **matriz;
    int i, j;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = (float **)malloc(linhas * sizeof(float *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < linhas; i++) {
        matriz[i] = (float *)malloc(colunas * sizeof(float));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");
    imprimeMatriz(matriz, linhas, colunas);

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
