#include <stdio.h>

/*13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a 
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e 
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou 
superior a 60 pontos.*/

int main(){
    float a,b,c,d;
    printf("Digite suas notas: ");
    scanf("%f %f %f", &a,&b,&c);
    d=((1*a)+(1*b)+(2*c))/4;
    printf("Sua média foi %0.2f.\n", d);
    if(d>=60){
        printf("Você foi aprovado!!!");
    }else{
        printf("Você foi reprovado.");
    }
    return 0;
}