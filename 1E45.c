#include <stdio.h>

int main(){
   char l, LETRA;
   printf ("Digite uma letra MAIUSCULA");
   scanf ("%c", &LETRA);
   l = LETRA + 32;
   printf ("%c", l);
   return 0;
}