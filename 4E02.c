#include <stdio.h>
#include <stdlib.h>

/*2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no 
formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.*/


int verificador(int dia,int mes,int ano){
    if(ano<0){
        printf("Ano inválido");
        exit (0);
    }else if(mes<0 || mes>12){
            printf("Mês inválido");
            exit (0);
        }else if(dia>31 || dia<1){
            printf("Dia inválido");
            exit (0);
        }
}
void tranformarmes(int dia,int mes,int ano){
    switch(mes){
        case 1:printf("%d de Janeiro de %d", dia,ano);break;
        case 2:
           if(ano % 400 == 0)
            if(dia > 29){
                printf("Dia invalido");
                exit(0);
            }
        else{
            if(ano % 400 != 0){
                if(dia > 29){
                    printf("Dia invalido");
                    exit(0);
                }
            }
        }printf("%d de Fevereiro de %d", dia,ano);break;
        case 3:printf("%d de Março de %d", dia,ano);break;
        case 4:printf("%d de Abril de %d", dia,ano);break;
        case 5:printf("%d de Maio de %d", dia,ano);break;
        case 6:printf("%d de Junho de %d", dia,ano);break;
        case 7:printf("%d de Julho de %d", dia,ano);break;
        case 8:printf("%d de Agosto de %d", dia,ano);break;
        case 9:printf("%d de Setembro de %d", dia,ano);break;
        case 10:printf("%d de Outubro de %d", dia,ano);break;
        case 11:printf("%d de Novembro de %d", dia,ano);break;
        case 12:printf("%d de Desembro de %d", dia,ano);break;
    }
}

int main(){
    int dia,mes,ano;
    printf("Dia: ");
    scanf("%d", &dia);
    printf("\nMês: ");
    scanf("%d", &mes);
    printf("\nAno: ");
    scanf("%d", &ano);
    int verificador ();
        verificador(dia,mes,ano);
    void tranformarmes();
        tranformarmes(dia,mes,ano);
    return 0;
}