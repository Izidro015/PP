#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a 
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.*/

typedef struct{
    char nome[100];
    int num_matricula;
    char curso[50];
}matricula;
int main(){
    matricula matricula[5];
    int i;
    for(i=0;i<5;i++){
        printf("Digite o seu nome: ");
        fgets(matricula[i].nome,100,stdin);
        setbuf(stdin, NULL);
        printf("Digite o seu numero de matricula: ");
        scanf("%d", &matricula[i].num_matricula);
        setbuf(stdin, NULL);
        printf("Digite o seu curso: ");
        fgets(matricula[i].curso,50,stdin);
        setbuf(stdin, NULL);
        printf("\nNome: %sMatricula: %d\nCurso: %s\n", matricula[i].nome, matricula[i].num_matricula, matricula[i].curso);
    }
    return 0;
}