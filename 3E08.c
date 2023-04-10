#include <stdio.h>
#include <math.h>

/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido*/

int main(){
    float a,b,c,menor,maior;
    a=0;
    c=0;
    while(a<10){
        printf("Numero: ");
        scanf("%f", &b);
        c+=b;
        a++;
        if(a==1)
            menor = maior = b;
        /*caso os números sejam iguais*/
        else
            if(b>maior)
                maior=b;
            if(b<menor)
                menor=b;
        /*volta pra while e verifica se o novo valor impresso não é menor ou maior doq os posteriores*/
        /*Assim guarda os valores menor e maior q tiver*/
    }printf("Menor: %0.2f. Maior: %0.2f", menor,maior);
    return 0;
}