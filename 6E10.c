#include<stdio.h>
#include<string.h>

/*10. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e 
telefone de 5 pessoas e os imprima em ordem alfabética.*/

typedef struct{
    char nome[30], endereco[50];
    int n;
}pessoas;

int ordem(char n1[30], char n2[30], int i){ //i conta a partir de que letra deve ser comparada
    if(n1[i]<n2[i]){
        return 1;
    } else if(n1[i]==n2[i]){
        i++;
        return ordem(n1, n2, i);
    } else{
        return 0;
    }
}

int main(){
    pessoas p[5];
    char aux[30];
    int i, j;
    for(i=0; i<5; i++){
    printf("Dados da pessoa %d:\n\n", i+1);
    printf("Nome: ");
    fflush(stdin);
    fgets(p[i].nome, 30, stdin);
    p[i].nome[strlen(p[i].nome)-1]='\0';
    printf("Endereco: ");
    fflush(stdin);
    fgets(p[i].endereco, 50, stdin);
    p[i].endereco[strlen(p[i].endereco)-1]='\0';
    printf("Telefone: ");
    scanf("%d", &p[i].n);
    printf("\n");
    }
    for(i=1; i<5; i++){
        for(j=i-1; j>=0; j--){
            if(ordem(p[j+1].nome, p[j].nome, 0)){
                strcpy(aux, p[j].nome);
                strcpy(p[j].nome, p[j+1].nome);
                strcpy(p[j+1].nome, aux);
            } else{
                break;
            }
        }
    }
    for(i=0; i<5; i++){
        printf("%s, %s, %d\n", p[i].nome, p[i].endereco, p[i].n);
    }
    return 0;
}