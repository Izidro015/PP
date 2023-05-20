#include<stdio.h>
#include<string.h>

/*11. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final), 
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados 
do vetor de reprovados.*/

typedef struct{
    char nome[30], matricula[15];
    float media;
}aluno;

int main(){
    aluno a[10];
    int i, j=0;
    for(i=0; i<10; i++){
        printf("Insira o nome do aluno %d: ", i+1);
        fflush(stdin);
        fgets(a[i].nome, 30, stdin);
        a[i].nome[strlen(a[i].nome)-1]='\0';
        printf("Insira a matricula desse aluno: ");
        fflush(stdin);
        fgets(a[i].matricula, 15, stdin);
        a[i].matricula[strlen(a[i].matricula)-1]='\0';
        printf("Insira a media final desse aluno: ");
        scanf("%f", &a[i].media);
        if(a[i].media>=5){
            j++;
        }
    }
    aluno apro[j], rep[10-j];
    for(i=0, j=0; i<10; i++){
        if(a[i].media>=5){
            apro[j]=a[i];
            j++;
        } else{
            rep[i-j]=a[i]; //Se tem j aprovados, e já foram analisados i alunos, devem existir i-j reprovados
        }
    }
    printf("Os alunos aprovados sao:\n\n");
    for(i=0; i<j; i++){
        printf("%s Matricula:%s Nota:%.1f\n", apro[i].nome, apro[i].matricula, apro[i].media);
    }
    printf("Os alunos reprovados foram:\n\n");
    for(i=0; i<10-j; i++){
        printf("%s Matricula:%s Nota:%.1f\n", rep[i].nome, rep[i].matricula, rep[i].media);
    }
    return 0;
}