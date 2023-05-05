#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo 
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto 
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria 
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça 
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. 
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

int main(){
    char str[100];
    int len, i;
    printf("Insira a sua frase: ");
    fgets(str, 100, stdin);
    len=strlen(str)-1; //para desconsiderar o \n
    for(i=0; i<len; i++){
        if(str[i]>='A'&&str[i]<='Z'){ //Se foi digitado uma letra maiúscula...
            str[i]=65+((str[i]%65)+3)%26; //Como Y e Z "dão a volta", é útil fazer o modular por 65(conseguindo os valores de 0 a 25 para as letras)
        } else if(str[i]>='a'&&str[i]<='z'){
            str[i]=97+((str[i]%97)+3)%26; //Mesma tática do anterior, manipular de 0 a 25 é mais simples
        }
    }
    printf("%s", str);
    return 0;
}