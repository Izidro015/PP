#include <stdio.h>
#include <stdlib.h>

/*14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina 
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma 
mensagem de acordo com a tabela abaixo:*/

void verifi (int a){
    if(a<0){
        printf("numero invalido");
        exit (0);
    }
}
float funcao(float a, float b){
    float km_l;
    km_l=a/b;
    printf("o consumo do carro é: %0.2f km/l\n", km_l);
    if(km_l<8){
        printf("Venda o carro!");
        return 0;
    }if(km_l>14){
        printf("Super econômico!");
        return 0;
    }if(8<km_l<14){
        printf("Econômico!");
        return 0;
    }
}

int main(){
    float kilometers, litros;
    printf("Digite quantos km foram percorridos: ");
    scanf("%f", &kilometers);
    verifi(kilometers);
    printf("Digite quantos litros foram consumidos: ");
    scanf("%f", &litros);
    verifi(litros);
    funcao(kilometers,litros);
}