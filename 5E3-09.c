#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros 
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo 
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
a) O modelo de carro mais econômico;
b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.*/

int main(){
    int i, consumo[5], j = 0, k;
    char carros[5][100];
    int distancia;
    for(i = 0; i < 5; i++){
        printf("\nDigite o carro %i: ", i);
            gets(carros[i]);
        printf("Quantos o carro %i faz(Km/L): ", i);
            scanf("%i", &consumo[i]);
        getchar();
            if(consumo[i] > j){
                j = consumo[i];
                k = i;
            }
    }
        printf("\nO modelo de carro mais economico eh: %s\n", carros[k]);
    for(i = 0; i < 5; i++){
        distancia = 1000 / consumo[i];
        printf("O carro %s em 1000 quilometros gasta: %iL de gasolina\n", carros[i], distancia);
    }
    return 0;
}