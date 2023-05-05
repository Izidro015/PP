#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*15. Faça um programa que contenha um menu com as seguintes opções:
a) Ler uma string S1 (tamanho máximo 20 caracteres);
b) Imprimir o tamanho da string S1;
c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o 
resultado da comparação;
d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da 
concatenação;
e) Imprimir a string S1 de forma reversa;
f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse 
ser informado pelo usuário;
g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os 
caracteres C1 e C2 serão lidos pelo usuário;
h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo 
usuário;
i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de 
qual posição deve ser criada a substring e qual é o tamanho da substring.*/

char menu(char op);
void compara(char S1[20]);
void cont(char S1[20]);
void print_rev(char S1[20]);
int quant(char S1[20]);
int substr(char S1[20]);

int main(){
    char S1[20], op, c, d;
    int i, j, k;
    while(op!='j'){
        op=menu(op);
        if(op=='a'||op=='A'){
            fflush(stdin);
            printf("Insira a string: ");
            fgets(S1, 20, stdin);
        } else if(op=='b'||op=='B'){
            printf("A string tem tamanho %d\n", strlen(S1));
        } else if(op=='c'||op=='C'){
            compara(S1);
        } else if(op=='d'||op=='D'){
            cont(S1);
        } else if(op=='e'||op=='E'){
            print_rev(S1);
        } else if(op=='f'||op=='F'){
            printf("Esse caractere aparece %d vezes", quant(S1));
        } else if(op=='g'||op=='G'){ //Como essa opção exige o retorno de um vetor, não dá pra escrever uma função pra esse caso sem o uso de ponteiros
            printf("Insira o caractere que deseja ser trocado: ");
            fflush(stdin);
            scanf("%c", &c);
            printf("Insira por qual caracter o programa deve trocar: ");
            fflush(stdin);
            scanf("%c", &d);
            for(i=0; i<20; i++){
                if(S1[i]==c){
                    S1[i]=d;
                    break;
                }
            }
        } else if(op=='h'||op=='H'){
            if(substr(S1)){ //Função retorna 1 se acha diferença, 0 se não achar
                printf("Esse conjunto nao faz parte da string\n");
            } else{
                printf("Esse conjunto faz parte da string\n");
            }
        } else if(op=='i'||op=='I'){ //Preciso retornar uma string, não tem como fazer uma função
            do{
                printf("Insira a posicao que deve ser iniciada a string: ");
                scanf("%d", &i);
                printf("Insira o tamanho da string: ");
                scanf("%d", &j);
                if((i+j)>(int)strlen(S1)-1){
                    printf("Nao ha digitos suficientes nesse intervalo, tente novamente:\n");
                }
            }while((i+j)>(int)strlen(S1)-1);
            j+=i;
            for(k=0; i<j; i++, k++){
                S1[k]=S1[i];
            }
            S1[k]='\0';
        }
    }
    return 0;
}

char menu(char op){
    printf("Digite uma opcao:\n\n");
    printf("a) Modificar a string do programa;\n");
    printf("b) Impressao do tamanho da string;\n");
    printf("c) Comparar uma outra string de sua escolha com a string;\n");
    printf("d) Concatenacao da string com outra de sua escolha;\n");
    printf("e) Imprimir a string ao contrario;\n");
    printf("f) Contar quantas vezes um caractere aparece na string;\n");
    printf("g) Substituir a primeira ocorrencia de um caractere da string por outro;\n");
    printf("h) Verificar se um conjunto de caracteres faz parte da string;\n");
    printf("i) Guarde uma parte da string;\n");
    printf("j) Sair;\n\n");
    fflush(stdin);
    scanf("%c", &op);
    if(!(op>='a'&&op<='j')&&!(op>='A'&&op<='j')){
        printf("Opcao invalida, tente novamente: \n");
    }
    return op;
}

void compara(char S1[20]){
    char S2[20];
    printf("Insira a string que deve ser usada para a comparacao: ");
    fflush(stdin);
    fgets(S2, 20, stdin);
    if(strcmp(S1, S2)){
        printf("As strings nao sao iguais\n");
    } else{
        printf("As strings sao iguais\n");
    }
}

void cont(char S1[40]){
    char S2[20];
    int len;
    printf("Insira a string que deve ser concatenada: ");
    fflush(stdin);
    fgets(S2, 20, stdin);
    len=strlen(S1);//Acha a localização do \0
    S1[len-1]='\0';//preciso sobreescrever um \0 no lugar no \n
    strcat(S1, S2);
    printf("%s", S1);
}

void print_rev(char S1[20]){
    int i;
    i=strlen(S1)-1;
    for(; i>=0; i--){
        printf("%c", S1[i]);
    }
    printf("\n");
}

int quant(char S1[20]){
    int i, a;
    char c;
    printf("Insira o caractere que deve ser contado: ");
    fflush(stdin);
    scanf("%c", &c);
    for(i=0, a=0; S1[i]!='\0'; i++){
        if(S1[i]==c){
            a++;
        }
    }
    return a;
}

int substr(char S1[20]){
    char S2[20];
    int i, j, len, len1, aux;
    printf("Insira a sua sequencia de caracteres: ");
    fflush(stdin);
    fgets(S2, 20, stdin);
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