#include <stdio.h>
#include <stdlib.h>

int main(){
   float l, c, tela, p;
   printf ("Digite a largura do terreno");
   scanf ("%f", &l);
   printf ("Digite o comprimento do terreno");
   scanf ("%f", &c);
   printf ("Digite o preço do metro de tela");
   scanf ("%f", &p);
   tela = l*c*p;
   printf ("&f", tela);
   return 0;
}