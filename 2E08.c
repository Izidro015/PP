#include <stdio.h>

/*Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas 
notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um 
valor válido, este fato deve ser informado ao usuário e o programa termina.*/

int main(){
    float a,b,c;
    printf("Digite as notas:");
    scanf("%f %f", &a,&b);
    if(a<0 || a>10 || b<0 || b>10){
        printf("Número inválido");
    }else{
        c=(a+b)/2;
        printf("A média foi de: %0.1f", c);
    }
    return 0;
}