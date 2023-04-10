#include <stdio.h>
#define atual 2022

/*38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia, Mês e Ano. 
Teste a validade desta data para saber se está é uma data válida. Teste se o dia fornecido é um dia válido: 
dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto), dia  30 em abril, junho, 
setembro e novembro, dia  31 nos outros meses. Teste a validade do mês: mês > 0 e mês < 13. 
Teste a validade do ano: ano  ano atual (use uma constante definidacom o valor igual a 2022). 
Imprimir: “data válida” ou “data inválida” no final da execução do programa.*/

int main() 
{
    int a, b, c;
    printf ("Digite um dia\n");
    scanf ("%d", &a);
    printf ("Digite um mes\n");
    scanf ("%d", &b);
    printf ("Digite um ano\n");
    scanf ("%d", &c);
    switch (b){
    case 1:
    {
        if(a<=31 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 2:
    {
        if (a<=28 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 3:
    {
        if(a<=31 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 4:
    {
        if (a<=30 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 5:
    {
        if(a<=31 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 6:
     {
        if (a<=30 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 7:
    {
        if(a<=31 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 8:
    {
        if(a<=31 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 9:
    {
        if (a<=30 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 10:
    {
        if(a<=31 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 11:
    {
        if (a<=30 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
     }
    case 12:
    {
        if(a<=31 && c<=atual){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    default:
    printf ("Data invalida"); break;
    }
    return 0;
}

