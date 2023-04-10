#include <stdio.h>
#include <stdlib.h>

/*3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.*/

int main(){
    int a;
    a=10;
    while(a>=0){
        printf("%d; ",a);
        a--;
        if(a<0){
            printf("FIM!");
        }
    }
    return 0;
}