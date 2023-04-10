#include <stdio.h>

/*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui 
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um 
programa em que o usuário entre com o valor e o estado destino do produto e o programa 
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o 
estado digitado não for válido, mostrar uma mensagem de erro.*/

int main(){
    float a,m,n,o,p,q,r,s,t;
    int b;
    printf("Digite o preço do produto: ");
    scanf("%f", &a);
    printf("Digite o estado: \n1)MG;\n2)SP;\n3)RJ;\n4)MS;\nOpção: ");
    scanf("%d", &b);
    if((b>4)||(b<=0)){
        printf("Númeor inválido.");
    }
    switch(b){
        case 1:printf("Você selecionou MG;\n");
        m=a*0,07;
        n=a+m;
        printf("O preço final vai ser de: R$%0.2f", n);break;
        case 2:printf("Você selecionou SP;\n");
        o=a*0.12;
        p=a+o;
        printf("O preço final vai ser de: R$%0.2f", p);break;
        case 3:printf("Você selecionou RJ;\n");
        q=a*0.15;
        r=a+q;
        printf("O preço final vai ser de: R$%0.2f", r);break;
        case 4:printf("Você selecionou MS;\n");
        s=a*0.08;
        t=a+s;
        printf("O preço final vai ser de: R$%0.2f", t);break;
    }
    return 0;
}