#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. 
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’*/

int main(){
    char str1[100], str2[100];
    int i, j, len;
    printf("Insira a primeira string: ");
    fgets(str1, 100, stdin);
    printf("Insira a segunda string: ");
    fgets(str2, 100, stdin);
    len=strlen(str2)-1; //desconsiderando o \n como caractere
    do{
        printf("Insira quantos caracteres devem ser concatenados: ");
        scanf("%d", &i);
        if(i>len||i<0){
            printf("Nao ha caracteres suficientes para copiar %d caracteres, tente novamente:\n\n", i);
        }
    }while(i>len||i<0);
    len=strlen(str1)-1;
    for(j=0; j<i; j++){
        str1[len+j]=str2[j];
    }
    str1[len+j]='\0';
    printf("%s", str1);
    return 0;
}