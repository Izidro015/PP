#include <stdio.h>
#include <math.h>

/*7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

int main(){
    float a,b,c,d,e;
    a=0;
    c=0;
    while(a<10){
        printf("Numero: ");
        scanf("%f", &b);
        c+=b;
        a++;
        if(b<0){
        a-1;
        e=a;
        }
    }
    d=c/e;
    printf("%.2f", d);
    return 0;
}