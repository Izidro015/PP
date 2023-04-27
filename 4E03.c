#include <stdio.h>

/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de 
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

int variavel (int num);

int main(){
    int num, numverif;
    printf("Digite um numero:");
    scanf("%d", &num);
    numverif=variavel(num);
    printf("\nO retorno eh: %d",numverif);
    return 0;
}

int variavel (int num){
    if(num>=1){
        return (num-num)+1;
    }else if(num==0){
        return num-num;
    }else{
        return (num-num)-1;
    }
}
