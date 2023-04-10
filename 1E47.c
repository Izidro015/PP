#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, m, c, d, u;
   printf ("Digite um numero inteiro de 4 digitos");
   scanf ("%i", &n);
   m=n/1000;
   c=n/100-10*m;
   d=n/10-100*m-10*c;
   u=n/1-1000*m-100*c-10*d;
   printf ("%i\n%i\n%i\n%i\n", m, c, d, u);
   return 0;
}
