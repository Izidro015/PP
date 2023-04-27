#include <stdio.h>
#include <stdlib.h>

/*7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em 
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0/5,0) + 32,0, sendo F a temperatura 
em Fahrenheit e C a temperatura em Celsius*/

float transformar(float c, float f){
    f=c*(9.0/5.0)+32.0;
    return f;
}
int main(){
    float celsius,fahrenheit,temperatura;
    printf("Digite uma temperatura (em grau celsius): ");
    scanf("%f", &celsius);
    temperatura=transformar(celsius,fahrenheit);
    printf("A temperatura digitada transformada em fahrenheit eh: %0.2f", temperatura);
    return 0;
}