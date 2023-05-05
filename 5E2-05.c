#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*5. Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i²- 1 se i = j;
A[i][j] = 4i³ – 5j² + 1 se i > j:*/

int main(){
    int i, j;
    int matriz[10][10];
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j){
                matriz[i][j] = (2 * i) + (7 * j) - 2;
            }
            if(i == j){
                matriz[i][j] = (3 * (pow(i,2))) - 1;
            }
            if(i > j){
                matriz[i][j] = (4*(pow(i,3) - (5*pow(j,2)) + 1));
            }
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j <= 6; j++){
            printf("[%-6i] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
 }