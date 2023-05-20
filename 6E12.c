#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*12. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe 
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores, 
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos 
jogadores recebeu.*/

typedef struct{
    int carta[52]; //Cada carta é interpretada como un número inteiro
}baralho;

int main(){
    baralho b, scr;
    int i, k, aux;
    srand(time(NULL));
    for(i=0; i<52; i++){
        b.carta[i]=0;
    }
    for(i=0; i<52; i++){
        aux=rand()%(52-i); //Me dá uma posição aleatória para inserir a primeira carta
        for(k=0; aux>=0; aux--, k++){ //Isso converte possição do aux em possição válida das cartas, só contando as que não foram usadas
            if(b.carta[k]==1){ //Se eu já aloquei uma carta nessa posição
                aux++; //Desconta essa iteração como uma contagem de carta válida
            }
        }
        k--;
        b.carta[k]=1;
        scr.carta[k]=i;
    }
    for(i=0; i<2; i++){
        printf("As cartas do jogador %d sao:\n\n", i+1);
        for(k=0; k<3; k++){
            switch(scr.carta[3*i+k]%13){
                    case 0:
                        printf("As de ");
                        break;
                    case 10:
                        printf("Valete de ");
                        break;
                    case 11:
                        printf("Rainha de ");
                        break;
                    case 12:
                        printf("Rei de ");
                        break;
                    default:
                        printf("%d de ", scr.carta[3*i+k]%13+1);
                }
            switch(scr.carta[3*i+k]/13){
                case 0:
                    printf("Espadas");
                    break;
                case 1:
                    printf("Paus");
                    break;
                case 2:
                    printf("Ouros");
                    break;
                case 3:
                    printf("Copas");
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}