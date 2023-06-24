#include <stdio.h>
#include <stdlib.h>

void multiplicarMatrizes(int** matriz1, int** matriz2, int** resultado, int linhas1, int colunas1, int linhas2, int colunas2) {
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void imprimirMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int a, b, c, d;

    printf("Digite as dimensões da primeira matriz (a x b): ");
    scanf("%d %d", &a, &b);

    printf("Digite as dimensões da segunda matriz (c x d): ");
    scanf("%d %d", &c, &d);

    if (b != c) {
        printf("As matrizes não podem ser multiplicadas, pois o número de colunas da primeira matriz é diferente do número de linhas da segunda matriz.\n");
        return 0;
    }

    int** matriz1 = (int**)malloc(a * sizeof(int*));
    int** matriz2 = (int**)malloc(c * sizeof(int*));
    int** resultado = (int**)malloc(a * sizeof(int*));

    for (int i = 0; i < a; i++) {
        matriz1[i] = (int*)malloc(b * sizeof(int));
        resultado[i] = (int*)malloc(d * sizeof(int));

        printf("Digite os elementos da linha %d da primeira matriz: ", i + 1);
        for (int j = 0; j < b; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < c; i++) {
        matriz2[i] = (int*)malloc(d * sizeof(int));

        printf("Digite os elementos da linha %d da segunda matriz: ", i + 1);
        for (int j = 0; j < d; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    multiplicarMatrizes(matriz1, matriz2, resultado, a, b, c, d);

    printf("\nMatriz 1:\n");
    imprimirMatriz(matriz1, a, b);

    printf("Matriz 2:\n");
    imprimirMatriz(matriz2, c, d);

    printf("Produto das matrizes:\n");
    imprimirMatriz(resultado, a, d);

    // Liberar a memória alocada
    for (int i = 0; i < a; i++) {
        free(matriz1[i]);
        free(resultado[i]);
    }
    for (int i = 0; i < c; i++) {
        free(matriz2[i]);
    }
    free(matriz1);
    free(matriz2);
    free(resultado);

    return 0;
}
