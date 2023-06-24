#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char nome[50];
    int x;
    int y;
} Cidade;

double calcularDistancia(Cidade cidade1, Cidade cidade2) {
    int deltaX = cidade2.x - cidade1.x;
    int deltaY = cidade2.y - cidade1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    int numCidades;

    printf("Informe o número de cidades: ");
    scanf("%d", &numCidades);
    getchar(); // Limpar o buffer do teclado

    Cidade* cidades = malloc(numCidades * sizeof(Cidade));

    // Entrada das informações das cidades
    for (int i = 0; i < numCidades; i++) {
        printf("\nCidade %d\n", i + 1);

        printf("Nome: ");
        fgets(cidades[i].nome, 50, stdin);
        cidades[i].nome[strcspn(cidades[i].nome, "\n")] = '\0'; // Remover o '\n' do final do nome

        printf("Coordenada X: ");
        scanf("%d", &cidades[i].x);
        getchar(); // Limpar o buffer do teclado

        printf("Coordenada Y: ");
        scanf("%d", &cidades[i].y);
        getchar(); // Limpar o buffer do teclado
    }

    // Criação da matriz de distâncias
    double** distancias = malloc(numCidades * sizeof(double*));
    for (int i = 0; i < numCidades; i++) {
        distancias[i] = malloc(numCidades * sizeof(double));
    }

    // Cálculo das distâncias entre as cidades
    for (int i = 0; i < numCidades; i++) {
        for (int j = 0; j < numCidades; j++) {
            if (i == j) {
                distancias[i][j] = 0.0;
            } else {
                distancias[i][j] = calcularDistancia(cidades[i], cidades[j]);
            }
        }
    }

    // Exibição da matriz de distâncias
    printf("\nMatriz de Distâncias:\n");
    for (int i = 0; i < numCidades; i++) {
        for (int j = 0; j < numCidades; j++) {
            printf("%.2f\t", distancias[i][j]);
        }
        printf("\n");
    }

    // Consulta de distância entre duas cidades
    int cidade1, cidade2;
    printf("\nDigite o número das duas cidades para verificar a distância (0 a %d): ", numCidades - 1);
    scanf("%d %d", &cidade1, &cidade2);

    if (cidade1 >= 0 && cidade1 < numCidades && cidade2 >= 0 && cidade2 < numCidades) {
        double distancia = distancias[cidade1][cidade2];
        printf("A distância entre a cidade %d e a cidade %d é %.2f\n", cidade1, cidade2, distancia);
    } else {
        printf("Cidades inválidas!\n");
    }

    // Liberação da memória alocada
    for (int i = 0; i < numCidades; i++) {
        free(distancias[i]);
    }
    free(distancias);
    free(cidades);

    return 0;
}
