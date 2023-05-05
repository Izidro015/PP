#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto 
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever 
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

int main(){
    char name[50];
    float p, v;
    printf("Insira o nome da mercadoria: ");
    fgets(name, 50, stdin);
    printf("Insira o valor da mercadoria: ");
    scanf("%f", &p);
    v=p*0.9;
    printf("%s", name);
    printf("valor total: %.2f\n", p);
    printf("Preco a vista: %.2f (%.2f de desconto)", v, 0.1*p);
    return 0;
}