#include <stdio.h>
#include <math.h>

/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem 
“Número inválido”. Se o número for positivo, calcular o logaritmo deste número*/

int main(){
    float a,b;
    printf("Digite um número: ");
    scanf("%f", &a);
    if(a>0){
        b=log10(a);
        printf(" Logaritmo de %0.2f na base 10 é: %0.4f", a,b);
    }else{
        printf("Número inválido.");
    }
    return 0;
}