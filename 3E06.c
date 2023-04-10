#include <stdio.h>
#include <math.h>

/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/

int main(){
    float a,b,c,d;
    a=0;
    c=0;
    while(a<10){
        printf("Numero: ");
        scanf("%f", &b);
        c+=b;
        a++;
    }
    d=c/10;
    printf("%.2f", d);
    return 0;
}