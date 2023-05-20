#include<stdio.h>
#include<math.h>

/*20. Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
 int dia;
 int mes;
 int ano;
};*/

typedef struct{
    int dia;
    int mes;
    int ano;
}dma;

int val_dia(int d, int m, int a);
int day_conv(int d, int m, int a);

int main(){
    dma data[2];
    int dia1, dia2;
    do{
        printf("Insira a primeira data(DD/MM/AA): ");
        scanf("%d %d %d", &data[0].dia, &data[0].mes, &data[0].ano);
        if(val_dia(data[0].dia, data[0].mes, data[0].ano)){
            printf("Data invalida, tente novamente:\n\n");
        }
    }while(val_dia(data[0].dia, data[0].mes, data[0].ano));

    do{
        printf("Insira a segunda data(DD/MM/AA): ");
        scanf("%d %d %d", &data[1].dia, &data[1].mes, &data[1].ano);
        if(val_dia(data[1].dia, data[1].mes, data[1].ano)){
            printf("Data invalida, tente novamente:\n\n");
        }
    }while(val_dia(data[1].dia, data[1].mes, data[1].ano));

    dia1=day_conv(data[0].dia, data[0].mes, data[0].ano);
    dia2=day_conv(data[1].dia, data[1].mes, data[1].ano);
    printf("Entre essas datas, tem %d dias", (int) fabs((double)(dia2-dia1)));
}

int val_dia(int d, int m, int a){
    if(m<1||m>12){
        return 1;
    } else{
        switch(m){
            case 1:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 2:
                if((a%400==0) || ((a%4==0) && (a%100!=0))){//checa se o ano é bissexto
                    if(d<1||d>29){
                        return 1;
                    }else return 0;
                } else{
                    if(d<1||d>28){
                        return 1;
                    }else return 0;
                }
            case 3:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 4:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 5:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 6:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 7:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 8:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 9:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 10:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 11:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 12:
                if(d<1||d>31){
                    return 1;
                } else return 0;
        }
    }
}

int day_conv(int d, int m, int a){ //Função que mede quantos dias existem entre a data data e primeiro de janeiro do ano 1
    int i, j;
    for(i=1, j=0; i<a; i++){ //Conta quantos dias tem no total de anos
        if((a%400==0) || ((a%4==0) && (a%100!=0))){
            j+=366;
        } else{
            j+=365;
        }
    }
    for(i=1; i<m; i++){ //Conta quantos dias tem no total de meses
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            j+=31;
        } else if(i==2){
            if((a%400==0) || ((a%4==0) && (a%100!=0))){
                j+=29;
            } else{
                j+=28;
            }
        }else{
            j+=30;
        }
    }
    j+=d;
    return j;
}