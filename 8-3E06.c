#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415

/*6. Implemente uma função que calcule a área da superfície e o volume de uma
esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume);
A área da superfície e o volume são dados, respectivamente, por:
A = 4 *  * R²
V = 4/3 *  * R³*/

void calc_esfera(float r, float *a, float *v){
    *a=(4*pi*pow(r,2));
    printf("Area: %0.4f;\n", *a);
    *v=((4.0/3.0)*pi*pow(r,3));
    printf("Volume: %0.4f.\n", *v);
}
int main(){
    float raio,area,volume;
    printf("Digite o valor do raio de uma esfera: ");
    scanf("%f", &raio);
    calc_esfera(raio,&area,&volume);
    return 0;
}