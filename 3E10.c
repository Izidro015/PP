#include <stdio.h>
#include <math.h>

/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

int main(){
    int a,b,soma;
    b=0;
    soma=0;
    for(a=0;a<50;a++){
        printf("+%d", b);
        b=b+2;
        soma+=b;
    }
    printf("=%d", soma);
    return 0;
}