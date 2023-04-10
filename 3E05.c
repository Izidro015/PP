#include <stdio.h>
#include <stdlib.h>

/*5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

int main(){
    float a,b,c;
    a=0;
    c=0;
    while(a<10){
        printf("numero: ");
        scanf("%f", &b);
        c+=b;
        a++;//incrementador
    }
    printf("%f", c);
    return 0;
}