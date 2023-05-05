#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

int main(){
    int i, j, k = 0;
    char str[100];
    char str1[100];
    printf("Digite a string: ");
    fgets(str,100,stdin);
    j = strlen(str);
    for(i = 0; i < j; i++){
        if(str[i] != ' '){
            str1[k] = str[i];
            k++;
        }
    }
    str1[i] = '\0';
    printf("\n%s\n", str1);
    return 0;
}