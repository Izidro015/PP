#include <stdio.h>
#include <math.h>
#define PI 3.14

/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo 
que o raio é passado por parâmetro.*/
/*A fórmula do volume de uma esfera é V = 4/3 π r³, em que V = volume e r = raio. 
O raio de uma esfera é metade de seu diâmetro.*/


float verifvolume(float r){
    float Volume;
    Volume=(4.0*PI*pow(r,3))/3.0;
    return Volume;
}

int main(){
    float r,V;
    printf("Digite a  medida do raio de uma esfera:");
    scanf("%f", &r);
    V=verifvolume(r);
    printf("O volume dessa esfera vai ser: %2.f", V);
    return 0;
}