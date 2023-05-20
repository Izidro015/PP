#include <stdio.h>
#include <stdlib.h>

/*7 Faça um programa que declare três variáveis do tipo inteiro e três do tipo
ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros, leia
três números e os imprima em ordem crescente. O programa deve
apresentar também o endereço de memória desses números.*/

int main(){
    int num1,num2,num3;
    int*p,*p1,*p2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    p=&num1;
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    p1=&num2;
    printf("Digite um terceiro numero: ");
    scanf("%d", &num3);
    p2=&num3;
    if(*p>*p1){
        int temp=*p;
        *p=*p1;
        *p1=temp;
    }if (*p > *p2) {
        int temp = *p;
        *p = *p2;
        *p2 = temp;
    }if (*p1 > *p2) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    printf("\nNúmeros em ordem crescente: %d, %d, %d\n", *p, *p1, *p2);
    printf("Endereço de memória do primeiro número: %p\n", p);
    printf("Endereço de memória do segundo número: %p\n", p1);
    printf("Endereço de memória do terceiro número: %p\n", p2);
    return 0;
}