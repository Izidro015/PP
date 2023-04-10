#include <stdio.h>

int main(){
    float w,x,y;
    printf("digite a altura do degrau em metros: ");
    scanf("%f", &w);
    printf("\nqual a altura que deseja alcançar (em metros)? ");
    scanf("%f", &x);
    y=x/w;//y=quantos degraus precisa
    printf("\nA quantidade de degraus necessária é de: %0.2f", y);
    return 0;
}