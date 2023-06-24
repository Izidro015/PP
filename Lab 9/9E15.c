#include <stdio.h>
#include <stdlib.h>

void encontraMaioresNumeros(int **matriz, int linhas, int colunas) {
    int i, j;
    int maior1, maior2, maior3;
    int linhaMaior1, colunaMaior1;
    int linhaMaior2, colunaMaior2;
    int linhaMaior3, colunaMaior3;

    maior1 = maior2 = maior3 = matriz[0][0];
    linhaMaior1 = linhaMaior2 = linhaMaior3 = 0;
    colunaMaior1 = colunaMaior2 = colunaMaior3 = 0;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior1) {
                maior3 = maior2;
                linhaMaior3 = linhaMaior2;
                colunaMaior3 = colunaMaior2;

                maior2 = maior1;
                linhaMaior2 = linhaMaior1;
                colunaMaior2 = colunaMaior1;

                maior1 = matriz[i][j];
                linhaMaior1 = i;
                colunaMaior1 = j;
            } else if (matriz[i][j] > maior2) {
                maior3 = maior2;
                linhaMaior3 = linhaMaior2;
                colunaMaior3 = colunaMaior2;

                maior2 = matriz[i][j];
                linhaMaior2 = i;
                colunaMaior2 = j;
            } else if (matriz[i][j] > maior3) {
                maior3 = matriz[i][j];
                linhaMaior3 = i;
                colunaMaior3 = j;
            }
        }
    }

    printf("Os três maiores números da matriz estão nas seguintes posições:\n");
    printf("Maior1: (%d, %d)\n", linhaMaior1, colunaMaior1);
    printf("Maior2: (%d, %d)\n", linhaMaior2, colunaMaior2);
    printf("Maior3: (%d, %d)\n", linhaMaior3, colunaMaior3);
}

int main() {
    int N, M;
    int **matriz;
    int i, j;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &N);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &M);

    matriz = (int **)malloc(N * sizeof(int *));
    if (matriz == NULL) {
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

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    encontraMaioresNumeros(matriz, N, M);

    for (i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
