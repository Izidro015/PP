#include <stdio.h>
#include <stdlib.h>

void criarMatriz(int **matriz, int linhas, int colunas) {
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void criarMatrizTransposta(int **matriz, int **matrizTransposta, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
}

void exibirMatriz(int **matriz, int linhas, int colunas) {
    int i, j;

    printf("Matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;
    int **matriz;
    int **matrizTransposta;
    int i;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &N);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &M);

    matriz = (int **)malloc(N * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    matrizTransposta = (int **)malloc(M * sizeof(int *));
    if (matrizTransposta == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        matriz[i] = (int *)malloc(M * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }

    for (i = 0; i < M; i++) {
        matrizTransposta[i] = (int *)malloc(N * sizeof(int));
        if (matrizTransposta[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }

    criarMatriz(matriz, N, M);
    criarMatrizTransposta(matriz, matrizTransposta, N, M);

    exibirMatriz(matriz, N, M);
    printf("\n");

    exibirMatriz(matrizTransposta, M, N);

    for (i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    for (i = 0; i < M; i++) {
        free(matrizTransposta[i]);
    }
    free(matrizTransposta);

    return 0;
}
