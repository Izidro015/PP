#include <stdio.h>
#include <stdlib.h>
int main(){
   float inv1, inv2, inv3, invt, premiot, premio1, premio2, premio3, x, y, z;
   printf ("Digite o investimento do primeiro apostador");
   scanf ("%f", &inv1);
   printf ("Digite o investimento do segundo apostador");
   scanf ("%f", &inv2);
   printf ("Digite o investimento do terceiro apostador");
   scanf ("%f", &inv3);
   printf ("Digite o valor do premio");
   scanf ("%f", &premiot);
   invt = inv1 + inv2 + inv3;
   x = inv1/invt;
   y = inv2/invt;
   z = inv3/invt;
   premio1 = x*premiot;
   premio2 = y*premiot;
   premio3 = z*premiot;
   printf ("%f %f %f", premio1, premio2, premio3);
   return 0;
 }