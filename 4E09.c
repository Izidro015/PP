#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

/*9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do 
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 = PI*raio²*𝑎𝑙𝑡𝑢𝑟𝑎, 
onde PI = 3.141592.*/

float verifi(float r){
    if (r<0){
        printf("numero inválido");
        exit (0);
    }
}

float Vol(float r, float h){
    float v;
    v=PI*(r*r)*h;
    return v;
}

int main(){
    float raio,altura,volume;
    printf("Digite o raio de um cilindro circular: ");
    scanf("%f", &raio);
    verifi(raio);
    printf("Digite a altura de um cilindro circular: ");
    scanf("%f", &altura);
    verifi(altura);
    volume=Vol(raio,altura);
    printf("O volume desse cilindro eh: %f", volume);
    return 0;
}