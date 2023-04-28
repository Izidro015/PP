#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, 
a saída para n = 4 seria:
*
**
***
****
***
**
**/


void asteristicos(int n) {
    int i, j;
    for (i = 1; i <= n; i++) { 
        for (j = 1; j <= i; j++){
            printf("*");
            
        }
        printf("\n");
    }
    for(j = 0; j <= n; j++){
        for(i = j; i <= n; i++){
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