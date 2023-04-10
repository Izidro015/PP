#include <stdio.h>

/*20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e, 
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes 
conceitos:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois 
lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes;*/

int main(){
    float a,b,c;
    printf("Digite as medidas de 3 lados de um triângulo:");
    scanf("%f %f %f", &a,&b,&c);
    if((a>0)&&(b>0)&&(c>0)){
        if(a==b && a==c && b==c){
            printf("As medidas digitadas formam um triângulo equilátero.");
        }if((a==b || a==c || b==c) && (b!=c || a!=c)){
            printf("As medidas digitadas formam um triângulo isósceles.");
        }if((a!=b) && (a!=c)){
            printf("As medidas digitadas formam um triângulo escaleno.");
        }
    }else{
        printf("Números inválidos.");
    }
    return 0;
}