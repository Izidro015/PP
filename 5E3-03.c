#include <stdio.h>
#include <stdlib.h>

/*3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

int main(){
  char str[20], str1[20];
  int i, j;
  printf("Digite a frase a ser invertida: ");
  gets(str);
  j = strlen(str) - 1;
  for(i = 0; str[i] != '\0'; i++){
    str1[j] = str[i];
    j--;
  }
  str1[i] = '\0';
  printf("\nA frase invertida eh: %s\n", str1);
  return 0;
}