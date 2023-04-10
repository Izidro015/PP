#include <stdio.h>

/*21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. 
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção*/

int main(){
    int a,b,c,d,e;
    printf("Escolha a opção:\n1- Soma de 2 números.\n2- Diferença entre 2 números (maior pelo menor).\n3- Produto entre 2 números.\n4- Divisão entre 2 números (o denominador não pode ser zero).\nOpção: ");
    scanf("%d", &a);
    b=1;
    c=2;
    d=3;
    e=4;
    if(a==b){
        printf("Você selecionou a opção 1;\n");
        float f,g,h;
        printf("Digite dois números: ");
        scanf("%f %f", &f,&g);
        h=f+g;
        printf("A soma dos dois números deu: %0.2f", h);
    }if(a==c){
        printf("Você selecionou a opção 2;\n");
        float i,j,k;
        printf("Digite dois números (primeiro o maior): ");
        scanf("%f %f", &i,&j);
            if(i<j){
                printf("Números inválidos.");
                return 0;
            }
        k=i+j;
        printf("A diferença dos dois números deu: %0.2f", k);
    }if(a==d){
        printf("Você selecionou a opção 3;\n");
        float l,m,n;
        printf("Digite dois números: ");
        scanf("%f %f", &l,&m);
        n=l*m;
        printf("O produto dos dois números deu: %0.2f", n);
    }if(a==e){
        printf("Você selecionou a opção 4;\n");
        float o,p,q;
        printf("Digite dois números (segundo sendo denominador): ");
        scanf("%f %f", &o,&p);
            if(p<0){
                printf("Número inválido.");
                return 0;
            }
        q=o/p;
        printf("O resultado da divisão dos dois números é: %0.2f", q);
    }
    return 0;
}