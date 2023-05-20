#include <stdio.h>

/*4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.*/

typedef struct{
    char nome[50];
    char matricula[10];
    int nota[3];
}aluno;

int main(){
    int i, j, maior1 = 0, media = 0, mediamaior = 0, nota1;
    aluno aluno[5];
    // a)
    for(i = 0; i < 5; i++){
        printf("\nDigite o nome do aluno %i: ", (i+1));
        fflush(stdin);
        fgets(aluno[i].nome, 50, stdin);
        printf("Digite a matricula: ");
        fflush(stdin);
        fgets(aluno[i].matricula, 10, stdin);
        for(j = 0; j < 3; j++){
            fflush(stdin);
            printf("Digite a nota da prova %i: ", (j+1));
            scanf("%d", &aluno[i].nota[j]);
        }
    }
    // b)
    for(i = 0; i < 5; i++){
        if(aluno[i].nota[1] > maior1){
            nota1 = aluno[i].nota[i];
            maior1 = i;
        }
    }
    printf("\nO aluno com maior nota na prova 1 eh: Aluno %i", maior1);
    printf("\nNota: %i", nota1); 
    // c)
    for(i = 0; i < 5; i++){
        media = 0;
        for(j = 0; j < 3; j++){
            media += aluno[i].nota[j];
        }
        media = media/3;
        if(media > mediamaior){
            mediamaior = media;
            maior1 = i;
        }
    }
    printf("\nO Aluno com maior media eh: Aluno %i", maior1);
    printf("\nMedia: %i", mediamaior);
    // d)
    for(i = 0; i < 5; i++){
        media = 0;
        for(j = 0; j < 3; j++){
            media += aluno[i].nota[j];
        }
        media = media/3;
        if(media < mediamaior){
            mediamaior = media;
            maior1 = i;
        }
    }
    printf("\nO Aluno com menor media eh: Aluno %i", maior1);
    printf("\nMedia: %i", mediamaior);
    // e)
    for(i = 0; i < 5; i++){
        media = 0;
        for(j = 0; j < 3; j++){
            media += aluno[i].nota[j];
        }
        media = media/3;
        if(media >= 6){
           printf("\nO aluno %i passou", i);
        }else{
           printf("\nO aluno %i reprovou", i); 
        }
    }
    return 0;
}