#include <stdio.h>
#include <math.h>

/*9. Faça um programa que faca operações simples de números complexos:
 Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
 Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo 
de ambos.*/

typedef struct {
        float real;
        float imag;
}complexo;

complexo soma(complexo a, complexo b) {
    complexo resultado;
    resultado.real = a.real + b.real;
    resultado.imag = a.imag + b.imag;
    return resultado;
}
complexo subtracao(complexo a, complexo b) {
    complexo resultado;
    resultado.real = a.real - b.real;
    resultado.imag = a.imag - b.imag;
    return resultado;
}
complexo multiplicacao(complexo a, complexo b) {
    complexo resultado;
    resultado.real = (a.real * b.real) - (a.imag * b.imag);
    resultado.imag = (a.real * b.imag) + (a.imag * b.real);
    return resultado;
}

float modulo(complexo z){
    return sqrt((z.real * z.real) + (z.imag * z.imag)); 
}

int main(){

    complexo num1, num2;

    printf("Digite a parte real de w: ");
    scanf("%f", &num1.real);
    printf("Digite a parte imaginaria d w: ");
    scanf("%f", &num1.imag);
    printf("Digite a parte real de z: ");
    scanf("%f", &num2.real);
    printf("Digite a parte imaginaria d z: ");
    scanf("%f", &num2.imag);
    complexo resultadoSoma = soma(num1, num2);
    complexo resultadoSubtracao = subtracao(num1, num2);
    complexo resultadoMultiplicacao = multiplicacao(num1, num2);
    float moduloZ = modulo(num1);
    float moduloW = modulo(num2);
    printf("\nResultados:\n");
    printf("Soma: %.2f + %.2fi\n", resultadoSoma.real, resultadoSoma.imag);
    printf("Subtracao: %.2f + %.2fi\n", resultadoSubtracao.real, resultadoSubtracao.imag);
    printf("Multiplicacao: %.2f + %.2fi\n", resultadoMultiplicacao.real, resultadoMultiplicacao.imag);
    printf("Modulo de z: %.2f\n", moduloZ);
    printf("Modulo de w: %.2f\n", moduloW);
    return 0;
}