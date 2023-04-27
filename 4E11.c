#include <stdio.h>
#include <stdlib.h>

/*11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a 
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá 
calcular a média ponderada, com pesos 5, 3 e 2.*/

void verifi(float a){
    if(a<0){
        printf("numero invalido");
        exit (0);
    }
}
float contmediA(float a,float b,float c){
    float finalmediA;
    finalmediA=(a+b+c)/3;
    return finalmediA;
}
float contmediP(float a,float b,float c){
    float finalmediP;
    finalmediP=((a*5)+(b*3)+(c*2))/(5+3+2);
    return finalmediP;
}


int main(){
    float nota1, nota2, nota3, media_aritmetica, media_ponderada;
    char letra;
    printf("Digite as tres notas: ");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    verifi(nota1);
    verifi(nota2);
    verifi(nota3);
    printf("Digite uma letra(A ou P): ");
    scanf("%c", &letra);
    if(letra=='a'||letra=='A'){
        media_aritmetica=contmediA(nota1,nota2,nota3);
        printf("A média aritmética é: %0.2f", media_aritmetica);
        return 0;
    }if(letra=='p'||letra=='P'){
        media_ponderada=contmediP(nota1,nota2,nota3);
        printf("A média ponderada é: %0.2f", media_ponderada);
        return 0;
    }else{
        printf("Digitos inválidos");
        exit (0);
    }
}