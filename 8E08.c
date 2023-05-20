#include <stdio.h>
#include <stdlib.h>

/*8 Faça um programa que leia seis números e armazene-os em um vetor.
Utilizando aritmética de ponteiro, imprima os valores do vetor. O programa
deve apresentar também o endereço de memória desses números.*/

int main() {
    int numeros[6];
    int *p;
    //lendo os números e armazenando-os no vetor
    printf("Digite seis números:\n");
    for (int i=0;i<6;i++) {
        scanf("%d", &numeros[i]);
    }
    //imprimindo os valores e endereços de memória utilizando aritmética de ponteiro
    p = numeros;
    printf("\nValores do vetor:\n");
    for (int i=0;i<6;i++) {
        printf("%d", *(p+i));
    }
    printf("\n\nEndereços de memória:\n");
    for (int i = 0; i < 6; i++) {
        printf("%p\n", (p+i));
    }
    return 0;
}