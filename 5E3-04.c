#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa 
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra 
dada por esse caractere.*/

int main(){
    int i, j;
    char letra;
    int count = 0;
    char str[20];
    printf("Digite a string: ");
    gets(str);
    j = strlen(str);
    for(i = 0; i < j; i++){
        if(str[i] == 'a' || 'A'){
            count++;
        }
        if(str[i] == 'e' || 'E'){
            count++;
        }
        if(str[i] == 'i' || 'I'){
            count++;
        }
        if(str[i] == 'o' || 'O'){
            count++;
        }
        if(str[i] == 'u' || 'U'){
            count++;
        }
    }
    printf("A quantidade vogais: %i\n", count);
    printf("Digite a letra que deseja substituir: ");
    scanf("%c", &letra);
    for(i = 0; i < j+1; i++){
        str[i] = letra;
    }
    printf("\n%s\n", str);
    return 0;
}