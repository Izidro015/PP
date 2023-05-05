#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em 
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

int main(){
    int i, j;
    char A, B;
    char str[20];
    printf("Digite a string: ");
    fgets(str, 20, stdin);
    setbuf(stdin, NULL);
    printf("Digite qual letra deseja trocar: ");
    scanf("%c", &A);
    setbuf(stdin, NULL);
    printf("Digite por qual letra trocar: ");
    scanf("%c", &B);
    j = strlen(str);
    for(i = 0; i < j; i++){
        if(str[i] == A){
            str[i] = B;
        }
    }
    printf("\n%s\n", str);
    return 0;
}