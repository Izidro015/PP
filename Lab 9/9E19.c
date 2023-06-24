#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 5
#define TAM_NOME 30

void gravarNome(char matriz[MAX_NOMES][TAM_NOME]) {
    int linha;
    char nome[TAM_NOME];

    printf("Informe a linha para gravar o nome (0 a %d): ", MAX_NOMES - 1);
    scanf("%d", &linha);
    getchar(); // Limpar o buffer do teclado

    if (linha >= 0 && linha < MAX_NOMES) {
        printf("Informe o nome: ");
        fgets(nome, TAM_NOME, stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remover o '\n' do final do nome

        strcpy(matriz[linha], nome);
        printf("Nome gravado com sucesso!\n");
    } else {
        printf("Linha inválida!\n");
    }
}

void apagarNome(char matriz[MAX_NOMES][TAM_NOME]) {
    int linha;

    printf("Informe a linha para apagar o nome (0 a %d): ", MAX_NOMES - 1);
    scanf("%d", &linha);

    if (linha >= 0 && linha < MAX_NOMES) {
        matriz[linha][0] = '\0';
        printf("Nome apagado com sucesso!\n");
    } else {
        printf("Linha inválida!\n");
    }
}

void substituirNome(char matriz[MAX_NOMES][TAM_NOME]) {
    char nome[TAM_NOME];
    char novoNome[TAM_NOME];

    printf("Informe o nome a ser substituído: ");
    fgets(nome, TAM_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remover o '\n' do final do nome

    int linha = -1;
    for (int i = 0; i < MAX_NOMES; i++) {
        if (strcmp(matriz[i], nome) == 0) {
            linha = i;
            break;
        }
    }

    if (linha != -1) {
        printf("Informe o novo nome: ");
        fgets(novoNome, TAM_NOME, stdin);
        novoNome[strcspn(novoNome, "\n")] = '\0'; // Remover o '\n' do final do nome

        strcpy(matriz[linha], novoNome);
        printf("Nome substituído com sucesso!\n");
    } else {
        printf("Nome não encontrado!\n");
    }
}

void apagarNomePorBusca(char matriz[MAX_NOMES][TAM_NOME]) {
    char nome[TAM_NOME];

    printf("Informe o nome a ser apagado: ");
    fgets(nome, TAM_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remover o '\n' do final do nome

    int linha = -1;
    for (int i = 0; i < MAX_NOMES; i++) {
        if (strcmp(matriz[i], nome) == 0) {
            linha = i;
            break;
        }
    }

    if (linha != -1) {
        matriz[linha][0] = '\0';
        printf("Nome apagado com sucesso!\n");
    } else {
        printf("Nome não encontrado!\n");
    }
}

void recuperarNome(char matriz[MAX_NOMES][TAM_NOME]) {
    int linha;

    printf("Informe a linha para recuperar o nome (0 a %d): ", MAX_NOMES - 1);
    scanf("%d", &linha);

    if (linha >= 0 && linha < MAX_NOMES) {
        printf("Nome: %s\n", matriz[linha]);
    } else {
        printf("Linha inválida!\n");
    }
}

void exibirMatriz(char matriz[MAX_NOMES][TAM_NOME]) {
    printf("Matriz:\n");
    for (int i = 0; i < MAX_NOMES; i++) {
        printf("Linha %d: %s\n", i, matriz[i]);
    }
}

int main() {
    char matriz[MAX_NOMES][TAM_NOME];

    // Inicializar a matriz
    for (int i = 0; i < MAX_NOMES; i++) {
        matriz[i][0] = '\0';
    }

    int opcao;
    do {
        printf("\nOpções:\n");
        printf("1 - Gravar um nome em uma linha da matriz\n");
        printf("2 - Apagar o nome contido em uma linha da matriz\n");
        printf("3 - Substituir um nome na matriz\n");
        printf("4 - Apagar um nome por busca\n");
        printf("5 - Recuperar um nome da matriz\n");
        printf("6 - Exibir a matriz\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do teclado

        switch (opcao) {
            case 1:
                gravarNome(matriz);
                break;
            case 2:
                apagarNome(matriz);
                break;
            case 3:
                substituirNome(matriz);
                break;
            case 4:
                apagarNomePorBusca(matriz);
                break;
            case 5:
                recuperarNome(matriz);
                break;
            case 6:
                exibirMatriz(matriz);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
