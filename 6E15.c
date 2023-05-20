#include<stdio.h>
#include<string.h>

/*15. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor 
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.*/

typedef struct{
    char nome[30], aut[15];
    int a;
}livro;

int substr(char S1[20], char S2[20]){
    int i, j, len, len1, aux;
    len=strlen(S2)-1; //Tirando o \n
    len1=strlen(S1)-len; /*Desconsiderando \n e \0, eu só preciso posicionar a minha substring
    até o espaço de memória 18-len de S2 e ir checando caractere a caractere se há perfeita correspondência*/
    for(i=0; i<len1; i++){ //Define onde eu vou começar a comparar
        for(j=0, aux=0; j<len;j++){ //Compara um total de len caracteres, 1 a 1
            if(S1[(i+j)]!=S2[(j)]){
                aux++; //Aux conta se foi achado alguma incongruência entre as strings
            }
        }
        if(aux==0){ //Se não há incongruências...
            return 0;
        }
    }
    return 1;
}

int main(){
    livro l[5];
    int i, a;
    char n[30];
    for(i=0; i<5; i++){
        printf("Insira o nome do livro %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(l[i].nome, 30, stdin);
        printf("Insira o autor do livro: ");
        setbuf(stdin, NULL);
        fgets(l[i].aut, 15, stdin);
        printf("Insira o ano do livro: ");
        scanf("%d", &l[i].a);
    }
    printf("Qual livro voce esta procurando: ");
    setbuf(stdin, NULL);
    fgets(n, 30, stdin);
    printf("Foram encontrados:\n\n");
    for(i=0, a=0; i<5; i++){
        if(!substr(l[i].nome, n)){
            l[i].nome[strlen(l[i].nome)-1]='\0';
            l[i].aut[strlen(l[i].aut)-1]='\0';
            printf("%s - %s - %d\n", l[i].nome, l[i].aut, l[i].a);
            a++;
        }
    }
    if(a==0){
        printf("\n\nNAo foi encontrado nenhum livro");
    }
}

