#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.*/

typedef struct{
    int hora;
    int minuto;
    int segundo;
}horario;
typedef struct{
    int dia;
    int mes;
    int ano;
}data;
typedef struct{
    int data;
    int horario;
    char texto[150];
}compromisso;
int main(){
    //comando de codigos
    return 0;
}
