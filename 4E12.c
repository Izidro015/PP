#include <stdio.h>
#include <stdlib.h>

/*12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de 
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.*/

int algarismos(int numero){
    int soma = 0;
    if (numero > 0){
        while (numero >= 1){
            soma += numero%10;
            numero/=10;
        }
        return printf("A soma dos algarismos :%i",soma);
    }else{
        return printf("Numero invalido");
    }
}


int main(){
    int number;
    printf("Digite um numero interio maior que zero: ");
    scanf("%d",&number);
    algarismos(number);
    return 0;
}
