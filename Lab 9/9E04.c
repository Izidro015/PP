#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removeVogais(char *str) {
    int i, j = 0;
    int tamanho = strlen(str);

    for (i = 0; i < tamanho; i++) {
        if (tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' && tolower(str[i]) != 'o' && tolower(str[i]) != 'u') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main() {
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    // Alocação dinâmica da string
    char *str = (char*)malloc((tamanho + 1) * sizeof(char));

    printf("Digite a string: ");
    scanf(" %[^\n]s", str); // Lê a string com espaços em branco

    removeVogais(str); // Remove as vogais da string

    printf("String sem vogais: %s\n", str);

    free(str); // Liberação da memória alocada

    return 0;
}
