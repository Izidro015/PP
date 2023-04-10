#include <stdio.h>

/*15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente 
a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.*/

int main(){
    int a;
    printf("Digite um dia da semana (1-7): ");
    scanf("%d", &a);
    switch(a){
        case 1:printf("Segunda-feira");break;
        case 2:printf("Terça-feira");break;
        case 3:printf("Quarta-feira");break;
        case 4:printf("Quinta-feira");break;
        case 5:printf("Sexta-feira");break;
        case 6:printf("Sábado");break;
        case 7:printf("Domingo");break;
        default:printf("Número inválido");break;
    }
    return 0;
}