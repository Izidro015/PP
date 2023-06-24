#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int numProdutos;
    int i;

    printf("Digite o número de produtos: ");
    scanf("%d", &numProdutos);

    Produto *produtos = (Produto *)malloc(numProdutos * sizeof(Produto));

    if (produtos == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < numProdutos; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &(produtos[i].codigo));
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Quantidade: ");
        scanf("%d", &(produtos[i].quantidade));
        printf("Preço: ");
        scanf("%f", &(produtos[i].preco));
        printf("\n");
    }

    // Encontrar o produto com o maior preço de venda
    int indexMaiorPreco = 0;
    float maiorPreco = produtos[0].preco;

    for (i = 1; i < numProdutos; i++) {
        if (produtos[i].preco > maiorPreco) {
            maiorPreco = produtos[i].preco;
            indexMaiorPreco = i;
        }
    }

    // Encontrar o produto com a maior quantidade disponível no estoque
    int indexMaiorQuantidade = 0;
    int maiorQuantidade = produtos[0].quantidade;

    for (i = 1; i < numProdutos; i++) {
        if (produtos[i].quantidade > maiorQuantidade) {
            maiorQuantidade = produtos[i].quantidade;
            indexMaiorQuantidade = i;
        }
    }

    printf("Produto com o maior preço de venda:\n");
    printf("Código: %d\n", produtos[indexMaiorPreco].codigo);
    printf("Nome: %s\n", produtos[indexMaiorPreco].nome);
    printf("Quantidade: %d\n", produtos[indexMaiorPreco].quantidade);
    printf("Preço: %.2f\n", produtos[indexMaiorPreco].preco);
    printf("\n");

    printf("Produto com a maior quantidade disponível no estoque:\n");
    printf("Código: %d\n", produtos[indexMaiorQuantidade].codigo);
    printf("Nome: %s\n", produtos[indexMaiorQuantidade].nome);
    printf("Quantidade: %d\n", produtos[indexMaiorQuantidade].quantidade);
    printf("Preço: %.2f\n", produtos[indexMaiorQuantidade].preco);
    printf("\n");

    free(produtos);

    return 0;
}
