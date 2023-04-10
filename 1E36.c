#include <stdio.h>
#define PI 3.141592

int main(){
    float h, r, v;
    printf("digite o valor da altura e do raio de um cilíndro:");
    scanf("%f %f", &h, &r);
    v=PI*(r*r)*h;
    printf("O volume desse cilíndro é: %f", v);
    return 0;
}