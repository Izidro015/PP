#include <stdio.h>
#include <math.h>

/*19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, 
mas, não simultaneamente pelos dois.*/

int main(){
    int a;
    printf("Digite um número:");
    scanf("%d",&a);
    if(a%3==0){
        printf("O número digitado é divisível por 3.\n");
    }else{
        printf("O número digitado não é divisível por 3.\n");
    }if(a%5==0){
        printf("O número digitado é divisível por 5.\n");
    }else{
        printf("O número digitsado não é divisível por 5.\n");
    }
    return 0;
}