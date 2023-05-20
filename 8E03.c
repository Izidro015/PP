#include <stdio.h>
#include <stdlib.h>

/*3 Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.*/

int main(){
    int num1, num2;
    int *p, *p1;
    printf("Digeite um inteiro: ");
    scanf("%d", &num1);
    p=&num1;
    printf("Digite outro inteiro: ");
    scanf("%d", &num2);
    p1=&num2;
    if(p>p1){
        printf("%p eh o maior endereço.", p);
    }else{
        printf("%p eh o maior endereço.", p1);
    }
    return 0;
}