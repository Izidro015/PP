#include <stdio.h>
#include <stdlib.h>

/*8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um 
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes*/

int main(){
    int i, j, escolha, constante;
    int matriz1[2][2], matriz2[2][2], matrizresultante[2][2];
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Matriz 1 - Digite [%i,%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Matriz 2 - Digite [%i,%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }
    printf("\nMenu\n");
    printf("\n1 - Somar as matrizes \n2 - Subtrair a primeira matriz da seguna \n3 - Adicionar uma constante as duas matrizes \n4 - Imprimir as duas matrizes\n\nEscolha: ");
    scanf("%i", &escolha);
    switch(escolha){
        case 1 : 
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    matrizresultante[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }
                printf("A soma serah: \n");
                    for(i = 0; i < 2; i++){
                        for(j = 0; j < 2; j++){
                            printf("[%i]", matrizresultante[i][j]);
                        }
                    printf("\n");
                    }
        break;
        case 2 :
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    matrizresultante[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }
                printf("A subtracao serah: \n");
                    for(i = 0; i < 2; i++){
                        for(j = 0; j < 2; j++){
                            printf("[%i]", matrizresultante[i][j]);
                        }
                    printf("\n");
                    }
        break;
        case 3 :
            printf("Digite o valor da constante: ");
            scanf("%i", &constante);
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    matriz1[i][j] = matriz1[i][j] + constante;
                    matriz1[i][j] = matriz2[i][j] + constante;
                }
            }
            printf("Primeira matriz eh: \n");
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        printf("[%i]", matriz1[i][j]);
                    }
                    printf("\n");
                    }
                    printf("\n");
                    printf("Primeira matriz eh: \n");
                    for(i = 0; i < 2; i++){
                        for(j = 0; j < 2; j++){
                            printf("[%i]", matriz2[i][j]);
                        }
                    printf("\n");
                    }
        break;
        case 4 :
            printf("\nPrimeira Matriz\n");
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("[%i]", matriz1[i][j]);
                }
                printf("\n");
            }
            printf("\nSegunda Matriz\n");
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("[%i]", matriz2[i][j]);
                }
                printf("\n");
            }
        }
    return 0;
}