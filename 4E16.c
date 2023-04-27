#include <stdio.h>
#include <stdlib.h>

/*16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma 
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos 
sinais de igual serão mostrados.*/

void desenha_linha(int qtd){
    int i;
    for (i = 0; i < qtd; i++){
        printf("=");
    }
}
int main(){
    int linhas;
    printf("Quantas linhas? ");
    scanf("%i",&linhas);
    desenha_linha(linhas);
    return 0;
}