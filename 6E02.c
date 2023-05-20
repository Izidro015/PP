#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene 
os dados em uma estrutura.*/

typedef struct{
    char nome[50];
    int idade;
    char endereco[100];
}pessoa;
int main(){
    pessoa pessoa;
    printf("Digite o nome: ");
    fgets(pessoa.nome,50,stdin);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite seu endereço: ");
    fgets(pessoa.endereco,100,stdin);
    return 0;
}