#include <stdio.h>
#include <stdlib.h>

/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, 
minutos e segundos, e os converta em segundos*/

void verifihr(int h){
    if((h>24)||(h<0)){
        printf("hora inválida");
        exit(0);
    }
}
void verifimin(int m){
    if(m>60||m<0){
        printf("minuto inválido");
        exit (0);
    }
}
void verifisegun(int s){
    if(s>60||s<0){
        printf("segundo inválido");
        exit(0);
    }
}
int time(int hr, int min, int seg){
    int tiempo;
    tiempo=seg+(min*60)+(hr*3600);
    return tiempo;
}

int main(){
    int hora,minuto,segundo,tempo;
    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);
    verifihr(hora);
    printf("\nDigite o minuto: ");
    scanf("%d", &minuto);
    verifimin(minuto);
    printf("\nDigite os segundos: ");
    scanf("%d", &segundo);
    verifisegun(segundo);
    tempo=time(hora,minuto,segundo);
    printf("O tempo digitado transformado em segundoseh igual a: %d", tempo);
    return 0;
}