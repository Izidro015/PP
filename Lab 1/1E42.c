#include <stdio.h>

int main(){
    float t,w,x,y,z;
    printf("digite o salário-base: ");
    scanf("%f", &w);
    x=0.05*w;//5% de gratificação
    y=x+w;//gratificação add
    z=0.07*y;//desconto de 7%
    t=y-z;//desconto add
    printf("O salário a receber será de: R$ %0.2f", t);
    return 0;
}