#include <stdio.h>
#include <stdlib.h>

/*13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a 
operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá ser realizada uma adição, 
se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’ será efetuada uma divisão.*/

void verifi(float a){
    if(a<0){
        printf("numero invalido");
        exit (0);
    }
}
void verifisimb(float num1, float num2, char ch){
    float resultado;
    switch(ch){
        case'-':
            resultado=num1-num2;
            printf("O resultado da subtração de %f por %f eh igual a: %f", num1,num2,resultado);break;
        case'+':
            resultado=num1+num2;
            printf("O resultado da adição de %f por %f eh igual a: %f", num1,num2,resultado);break;
        case'*':
            resultado=num1*num2;
            printf("O resultado da multiplicação de %f por %f eh igual a: %f", num1,num2,resultado);break;
        case'/':
            verifi(num2);
            resultado=(num1)/num2;
            printf("O resultado da divisão de %f por %f eh igual a: %f", num1,num2,resultado);break;
        default:
            printf("simbolo inválido");break;
    }
}

int main(){
    float num1,num2,resultado;
    char simbolo;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um segundo numero: ");
    scanf("%f", &num2);
    printf("Digite um símbolo de operação para ser efetuada (Se o símbolo for '+' deverá ser realizada uma adição, se for '–' uma subtração, se for '*' uma multiplicação e se for '/' será efetuada uma divisão.): ");
    scanf("%c", &simbolo);
    verifisimb(simbolo);
    return 0;
}