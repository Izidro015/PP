#include <stdio.h>

/*35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe 
naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.*/

int main(){
    int a, b;
    printf ("Digite um dia\n");
    scanf ("%d", &a);
    printf ("Digite um mes\n");
    scanf ("%d", &b);
    switch (b)
    {
    case 1:
    {
        if(a<=31){
            printf("Data Valida");
        }else{ 
            printf("Data invalida"); break;
        }
    }
    case 2:
    {
        if(a<=28){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 3:
    {
        if(a<=31){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break; 
        } 
    }
    case 4:
    {
        if(a<=30){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 5:
    {
        if(a<=31){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 6:
    {
        if(a<=30){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 7:
    {
        if (a<=31){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 8:
    {
        if (a<=31){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 9:
    {
        if(a<=30){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 10:
    {
        if (a<=31){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        } 
    }
    case 11:
    {
        if(a<=30){
            printf ("Data Valida");
        }else{
            printf ("Data invalida"); break;
        }
    }
    case 12:
    {
        if (a<=31){
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