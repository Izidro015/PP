#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, opcao, posicao, valor;
    int* memoria = NULL;

    printf("Digite o tamanho da memória (em bytes): ");
    scanf("%d", &tamanho);

    if (tamanho % sizeof(int) != 0) {
        printf("O tamanho da memória deve ser múltiplo do tamanho do tipo inteiro.\n");
        return 1;
    }

    memoria = (int*)calloc(tamanho / sizeof(int), sizeof(int));

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Inserir valor\n");
        printf("2. Consultar valor\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        } else if (opcao == 1) {
            printf("Digite a posição: ");
            scanf("%d", &posicao);
            printf("Digite o valor: ");
            scanf("%d", &valor);
            if (posicao >= 0 && posicao < tamanho / sizeof(int)) {
                memoria[posicao] = valor;
                printf("Valor inserido com sucesso!\n");
            } else {
                printf("Posição inválida!\n");
            }
        } else if (opcao == 2) {
            printf("Digite a posição: ");
            scanf("%d", &posicao);
            if (posicao >= 0 && posicao < tamanho / sizeof(int)) {
                printf("Valor na posição %d: %d\n", posicao, memoria[posicao]);
            } else {
                printf("Posição inválida!\n");
            }
        } else {
            printf("Opção inválida!\n");
        }
    }

    free(memoria);

    return 0;
}
