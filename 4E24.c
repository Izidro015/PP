#include <stdio.h>
#include <stdlib.h>

/*24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a 
saída para n = 6 seria:
       *
      ***
     *****
    *******
   *********
  ************/

void asteristicos(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for(j = n - i; j >= 1; j--)
            printf(" "); 
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 2; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    asteristicos(n);
    return 0;
}

