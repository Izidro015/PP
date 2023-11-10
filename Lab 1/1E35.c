#include <stdio.h>
#include <math.h>

int main(){
    
    float a, b, h;
    printf("Dê valores para a e b:");
    scanf("%f %f", &a, &b);
    h=sqrt(a*a+b*b);
    printf("A hipotenusa é:%f", h);
    return 0;
}