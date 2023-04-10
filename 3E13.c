#include <stdio.h>
#include <math.h>

/*13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.*/

int main(){
    int a,b,total;
    b=0;
    for(a=0;a<1000;a++){
        b++;
        if((b%3==0)||(b%5==0)){
            total+=b;
        }else{
            continue;
        } 
    }
    printf("A soma dos números vai ser: %d", total);
    return 0;
}