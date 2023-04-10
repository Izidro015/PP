#include <stdio.h>

/*17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 =((basemaior + basemenor) ∗ altura)/2
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

int main(){
    float a,b,c,d;
    printf("Digite a medida da base menor de um trapézio: ");
    scanf("%f", &a);
    printf("Digite a medida da base maior de um trapézio: ");
    scanf("%f", &b);
    printf("Digite a medida da altura do trapézio: ");
    scanf("%f", &c);
    if(a<0){
        printf("medida da base menor do trapézio inválida");
        return 0;
    }if(b<0){
        printf("medida da base maior do trapézio inválida");
        return 0;
    }if(c<0){
        printf("medida da altura do trapézio inválida");
        return 0;
    }
    d=((b+a)*c)/2;
    printf("A área do trapézio é: %0.2f", d);
    return 0;
}