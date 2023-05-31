#include <stdio.h>
#include <stdlib.h>

/*5 Elabore um programa que receba duas strings digitadas pelo usuário e
verifique se a segunda string ocorre dentro da primeira. Use aritmética de
ponteiros para acessar os caracteres das strings.*/

int main(){
    char str1[20], str2[20];
    char *p1, *p2;
    int i, j, tamanhostr2, k, c = 0;
    p1 = str1;
    p2 = str2;
    printf("Digite a string 1: ");
    fgets(str1, 20, stdin);
    fflush(stdin);
    printf("Digite a string 2: ");
    fgets(str2, 20, stdin);
    fflush(stdin);
    tamanhostr2 = strlen(str2) - 1;
    for (i = 0; *(p1+i) != '\0'; i++){
        if (*(p1+i) == *(p2+0)){
            k = i+1;
            for (j = 1; j < tamanhostr2; j++){
                if(*(p1+k) == *(p2+j)){
                    c++;
                    k++;
                    printf("c: %d\n", c);
                }else{
                    break; 
                }
            }if(c==tamanhostr2){
                break;
            }
        }
    }
    if (c == tamanhostr2 - 1){
            printf("A string 2 eh substring da substring 1!\n");
            printf("\n");
        }else{
            printf("A string 2 nao eh substring da substring 1!\n");
            printf("\n");
        }
    return 0;
}