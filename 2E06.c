#include <stdio.h>
#include <math.h>

/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença 
existente entre ambos.*/

int main(){
    int a,b,c,d;
    printf("Digite dois numeros:");
    scanf("%d %d", &a,&b);
    if(a>b){
        printf("%d eh maior que %d \n", a,b);
    }else{
        printf("%d eh maior que %d \n", b,a);
    }
    c=a-b;
    if(c<0){
        d=(c)*-1;
        printf("A diferenca entre eles eh : %d", d);
    }else{
        printf("A diferença entre eles eh: %d", c);
    }
    return 0;
}