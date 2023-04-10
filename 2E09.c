#include <stdio.h>

/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for 
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima: “Empréstimo concedido”*/

int main(){
    float a,b;
    printf("Digite o salário:", &a);
    scanf("%f", &a);
    printf("digite o valor da prestação:", &b);
    scanf("%f", &b);
    if(b>0.2*a){
        printf("Empréstimo não concedido.");
    }else{
        printf("Empréstimo concedido.");
    }
}