#include <stdio.h>
#include <stdlib.h>

/*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que 
são primos e suas respectivas posições no vetor.*/

int main (){
    int vet[10];
    int i, j, ehPrimo;
    for(i=0;i<10;i++){
        printf("Digite o numero %i: ", i);
        scanf("%i", &vet[i]);
    }
    for(i = 0; i < 10; i++){
        if((vet[i]==2)||(vet[i]==3)||(vet[i]==5)||(vet[i]==7)){
                printf("O vet[%i] eh primo: %i", i, vet[i]);
                printf("\n");
            }
            else{
                for(j=2;j<vet[i];j++){    
                    ehPrimo=1;
                    if(vet[i]%j==0){
                        ehPrimo=0;
                        break;
                    }
		        }
            }
        if((ehPrimo) && (i>=1)){
                    printf("O vet[%i] eh primo: %i", i, vet[i]);
                    printf("\n");
        }
    }
return 0;
}