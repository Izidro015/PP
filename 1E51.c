#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   float d, x, y;
   printf ("Digite o valor de x e y");
   scanf ("%f %f", &x, &y);
   d = sqrt(pow(x,2)+pow(y,2));
   printf ("A dista2]ncia e = %f", d);
   return 0;
}

