#include <stdio.h>
#include <math.h>

    /*Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
    escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
    a entrada de dados com um valor negativo ou zero*/

int main(){
    float num, raiz, quadrado, cubo;
    while (num > 0){
        scanf("%f", &num);
        if (num <= 0)
        {
            break;
        }
        quadrado = num * num;
        cubo = num * num * num;
        raiz = sqrt(num);
        printf("Quadrado:%.2f\nCubo:%.2f\nRaiz: %.2f\n", quadrado, cubo, raiz);
    }
    return 0;
}