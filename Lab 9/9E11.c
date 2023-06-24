#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() {
    int numAlunos;
    int i;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    Aluno *alunos = (Aluno *)malloc(numAlunos * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &(alunos[i].matricula));
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano de Nascimento: ");
        scanf("%d", &(alunos[i].anoNascimento));
        printf("\n");
    }

    printf("Dados dos alunos:\n");
    for (i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].anoNascimento);
        printf("\n");
    }

    free(alunos);

    return 0;
}
