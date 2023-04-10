#include <stdio.h>
#include <stdlib.h>

int main(){
   int id, ano1, ano2;
   printf ("Digite a sua idade e o ano atual");
   scanf ("%i %i", &id, &ano1);
   ano2 = ano1-id;
   printf ("Seu ano de nascimento e = %i", ano2);
   return 0;
}