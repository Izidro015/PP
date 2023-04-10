#include <stdio.h>

/*18. Faça um programa que mostre ao usuário um menu com 4 opções de operaçõesmatemáticas (as básicas, por exemplo).
O usuário escolhe uma das opções e o seu programaentão pede dois valores numéricos e realiza a operação, 
mostrando o resultado e saindo.*/

int main(){
    int a,b,c,d,z;
    float e,f,g,h,i,j,k,l,m,n,o,p;
    printf("Escolha uma operação: \n1) Soma\n2) Subtração\n3) Multiplicação\n4) Divisão\n");
    scanf("%d", &z);
    a=1;
    b=2;
    c=3;
    d=4;
    if(z==1){
        printf("Você escolheu soma.\n");
        printf("Digite dois números:");
        scanf("%f %f", &e,&f);
        g=e+f;
        printf("A soma dos números é: %0.1f", g);
    }if(z==2){
        printf("Você escolheu subtração.\n");
        printf("Digite dois números:");
        scanf("%f %f", &h,&i);
        j=h-i;
        printf("A subtração dos números é: %0.1f", j);
    }if(z==3){
        printf("Você escolheu multiplicação.\n");
        printf("Digite dois números:");
        scanf("%f %f", &k,&l);
        m=k*l;
        printf("A multiplicação dos números é: %0.1f", m);
    }if(z==4){
        printf("Você escolheu divisão.\n");
        printf("Digite dois números:");
        scanf("%f %f", &n,&o);
        p=o/n;
        printf("A divisão dos números é: %0.1f", p);
    }if((z<1) || (z>4)){
        printf("Número inválido.");
    }
    return 0;
}