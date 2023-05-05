#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo: 
“0011001” -> 3*/

int main(){
    int i, j;
    int count = 1;
    char str[20];
    printf("Digite a string: ");
    gets(str);
    j = strlen(str) - 1;
    for(i = 0; i < j; i++){
        if(str[i] == '1'){
            count++;
        }
    }
    printf("A quantidade 1's na string eh: %i\n", count);
    return 0;
}