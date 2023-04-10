#include <stdio.h>
#include <math.h>

/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao 
quadrado.*/

int main(){
    int a,c;
    float b;
    printf("Digite um numero:");
    scanf("%d", &a);
    if(a>0){
        b=sqrt(a);
        printf("A raiz quadrda desse numero eh: %f", b);
    }else{
        c=a*a;
        printf("O numero digitado, ao quadrado eh:%d", c);
    }
    return 0;
}