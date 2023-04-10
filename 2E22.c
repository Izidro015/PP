#include <stdio.h>

/*22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se 
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

int main(){
    int a,b,c;
    printf("Digite sua idade: ");
    scanf("%d", &a);
    printf("Digite há quantos anos trabalha: ");
    scanf("%d", &b);
    if((a<0) || (b<0)){
        printf("Número inválido.");
        return 0;
    }
    if((a>=65)||(b>=30)||(a>=60&&b>=25)){
        printf("Aposentadoria autorizada.");
    }else{
        printf("Aposentadoria negada.");
    }
    return 0;
}