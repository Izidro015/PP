#include<stdio.h>
#include<string.h>

/*18. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos) 
e A = 5 (aeroportos) e:
 Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de 
origem e um de destino;
 Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite 
aeroportos de código inexistente.*/

typedef struct{
    int o; 
    int d;
}aeroporto;

typedef struct{
    int cod_d, cod_o;
}voo;

int main(){
    voo v[5];
    aeroporto a[5];
    int i;

    for(i=0; i<5; i++){
        a[i].o=0;
        a[i].d=0;
    }
    for(i=0; i<5; i++){
        do{
            printf("Insira o codigo do aeroporto de origem do voo %d: ", i+1);
            scanf("%d", &v[i].cod_o);
            if(v[i].cod_o<0||v[i].cod_o>4){
                printf("Codigo invalido, tente novamente:\n\n");
            }
        }while(v[i].cod_o<0||v[i].cod_o>4);

        a[v[i].cod_o].o++;

        do{
            printf("Insira o codigo do aeroporto de destino do voo %d: ", i+1);
            scanf("%d", &v[i].cod_d);
            if(v[i].cod_d<0||v[i].cod_d>4){
                printf("Codigo invalido, tente novamente:\n\n");
            }
        }while(v[i].cod_d<0||v[i].cod_d>4);

        a[v[i].cod_d].d++;
        printf("\n");
    }
    printf("Os aeroportos, com suas quantidades de voos, sao:\n\n");
    for(i=0; i<5; i++){
        printf("Aeroporto %d, chegam %d voo(s), saem %d voo(s)\n", i, a[i].d, a[i].o);
    }
    return 0;
}