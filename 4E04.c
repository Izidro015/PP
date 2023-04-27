#include <stdio.h>
#include <math.h>

/*4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado 
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de 
outro número inteiro. Ex.: 1, 4, 9...*/

int verificar(int a){
    int raiz;
    //verificar se é quadrado perfeito
    raiz=sqrt(a);
    if(pow (raiz,2)==a){
        return a;
    }else{
        return 0;
    }
}

int main(){
    int num, numverif;
    printf("Digite um número: ");
    scanf("%d", &num);
    numverif=verificar(num);
    if(numverif==0){
        printf("não é quadrado perfeito");
    }else{
        printf("é quadrado perfeito");
    }
    return 0;
}