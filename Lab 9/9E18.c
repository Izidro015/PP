#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alocação de um vetor de 1024 bytes (1 Kbyte)
    int tamanhoVetor = 1024;
    char* vetor = (char*)malloc(tamanhoVetor * sizeof(char));
    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        return 1;
    }

    // Alocação de uma matriz de inteiros de dimensão 10x10
    int linhas = 10;
    int colunas = 10;
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para a matriz.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para a matriz.\n");
            return 1;
        }
    }

    // Alocação de um vetor de registros de tamanho 50
    typedef struct {
        char nome[30];
        int codigo;
        float preco;
    } Registro;

    int tamanhoVetorRegistros = 50;
    Registro* vetorRegistros = (Registro*)malloc(tamanhoVetorRegistros * sizeof(Registro));
    if (vetorRegistros == NULL) {
        printf("Erro ao alocar memória para o vetor de registros.\n");
        return 1;
    }

    // Alocação de um texto de até 100 linhas com até 80 caracteres em cada linha
    int numLinhas = 100;
    int numCaracteres = 80;
    char** texto = (char**)malloc(numLinhas * sizeof(char*));
    if (texto == NULL) {
        printf("Erro ao alocar memória para o texto.\n");
        return 1;
    }

    for (int i = 0; i < numLinhas; i++) {
        texto[i] = (char*)malloc((numCaracteres + 1) * sizeof(char));
        if (texto[i] == NULL) {
            printf("Erro ao alocar memória para o texto.\n");
            return 1;
        }
    }

    // Liberação da memória alocada
    free(vetor);
    
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    free(vetorRegistros);

    for (int i = 0; i < numLinhas; i++) {
        free(texto[i]);
    }
    free(texto);

    return 0;
}
