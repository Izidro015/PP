#include <stdio.h>
#include <math.h>

/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. 
Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/

int main(){
    float a,b,c;
    printf("Digite um numero: ");
    scanf("%f", &a);
    if(a>0){
        b=sqrt(a);
        printf("A raiz quadrada desse numero eh: %f \n", b);
    }else{
        printf("Esse numero eh invalido.");
    }
    return 0;
}