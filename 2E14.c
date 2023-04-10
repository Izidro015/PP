#include <stdio.h>

/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, 
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das 
três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3;
Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), 
de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.*/

int main() {
    float a,b,c,d;
    printf("Digite a nota de laboratório: ");
    scanf("%f", &a);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &b);
    printf("Digite a nota da avaliação final: ");
    scanf("%f", &c);
    d=((2*a)+(3*b)+(5*c))/10;
    printf("Sua média foi de: %0.2f \n", d);
    if(5<=d&&d<10){
        printf("Você foi aprovado!");
    }if(3<d&&d<4.9){
        printf("Você está de recuperação.");
    }if(0<d&&d<2.9){
        printf("Você foi reprovado.");
    }
    return 0;
}