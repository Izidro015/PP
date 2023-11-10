#include <stdio.h>
#include <stdlib.h>

int main(){
   int e, h, m, s, r;
   printf ("Digite uma quantidade de segundos");
   scanf ("%i", &e);
   h = e/3600;
   r = e%3600;
   m = r/60;
   s = r%60;
   printf ("horas = %i, minutos = %i, segundos = %i", h, m, s);
   return 0;
 }