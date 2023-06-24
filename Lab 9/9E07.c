#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerosLoteria[6];
    int numerosBilhete[6];
    int numerosCorretos[6];
    int i, j, quantidadeCorretos = 0;

    printf("Digite os 6 números sorteados da loteria:\n");
    for (i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numerosLoteria[i]);
    }

    printf("Digite os 6 números do seu bilhete:\n");
    for (i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numerosBilhete[i]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (numerosBilhete[i] == numerosLoteria[j]) {
                numerosCorretos[quantidadeCorretos] = numerosBilhete[i];
                quantidadeCorretos++;
                break;
            }
        }
    }

    printf("\nNúmeros sorteados da loteria: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", numerosLoteria[i]);
    }

    printf("\nSeus números corretos: ");
    for (i = 0; i < quantidadeCorretos; i++) {
        printf("%d ", numerosCorretos[i]);
    }

    printf("\nVocê acertou %d número(s)!\n", quantidadeCorretos);

    return 0;
}
