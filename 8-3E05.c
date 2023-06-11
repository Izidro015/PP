#include <stdio.h>
#include <stdlib.h>

/*5 Escreva uma função que dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária deste número.*/

void conta(float *a) {
    printf("Parte inteira: %d\n", (int) *a);
    printf("Parte fracionaria: %0.1f\n", *a - (int) *a);
}

int main() {
    float a;
    printf("Digite um numero real: ");
    scanf("%f", &a);
    conta(&a);
    return 0;
}