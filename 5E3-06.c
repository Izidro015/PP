#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 
32 dos caracteres cujo código ASCII está entre 97 e 122.*/

int main(){
    int i,j;
    char str[20];
    printf("Digite a string: ");
    gets(str);
    j = strlen(str);
    for(i = 0; i < j; i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 32;
        }
    }
    printf("\n%s\n", str);
    return 0;
}