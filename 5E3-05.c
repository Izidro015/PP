#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras 
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

int main(){
    int i, j;
    char str[20];
    printf("Digite a string em MAIUSCULAS: ");
    gets(str);
    j = strlen(str);
    for(i = 0; i < j; i++){
        str[i] = str[i] + 32;
    }
    printf("\n%s\n", str);
    return 0;
}