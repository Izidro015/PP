#include <stdio.h>
#include <stdlib.h>

/*6. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até 
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de 
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais 
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).*/

typedef struct{
        char matricula[15];
        char nome[50];
        char codigo[15];
        int nota[2];
    }alunos;

int main(){
    int i,j;
    float media[10];
    alunos c[10];
    for(i = 0; i < 10; i++){
        printf("\nDigite o nome do aluno %i: ", (i+1));
        fflush(stdin);
        fgets(c[i].nome, 50, stdin);
        printf("Digite a matricula: ");
        fflush(stdin);
        fgets(c[i].matricula, 15, stdin);
        printf("Digite o codigo da disciplina: ");
        fflush(stdin);
        fgets(c[i].codigo, 15, stdin);
        for(j = 0; j < 2; j++){
            printf("Digite a nota %d: ", (j+1));
            scanf("%d", &c[i].nota[j]);
        }
    }
    for(i = 0; i < 10; i++){
        printf("\nNome do aluno %i: %s", (i+1), c[i].nome);
        printf("\nA matricula: %s", c[i].matricula);
        printf("\nCodigo da disciplina: %s ", c[i].codigo);
        media[i] = ((c[i].nota[0]*1) + (c[i].nota[1]*2))/3;
        printf("\nA media do aluno eh: %.2f", media[i]);
    }
    return 0;
}