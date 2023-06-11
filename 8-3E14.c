#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int raizes(float A, float B, float C, float *X1, float *X2);    //função de cálculo de raízes de equação quadrática;


int main(){

    //var;
    float a, b, c, x1, x2;
    printf("\n\tCALCULADORA DE FUNCOES QUADRATICAS\n\n");
    printf("Insira os parametros de sua funcao quadratica (a, b, c, sendo que ax^2 + bx + c).\n>> ");
    scanf("%f%f%f", &a, &b, &c);
    printf("\n");

    switch(raizes(a, b, c, &x1, &x2)){
        case 0:
            printf("Nao existem raizes reais!\n\n");
            break;
        case 1:
            printf("Unica raiz real:\nx1 = %f\n\n", x1);
            break;
        case 2:
            printf("Raizes reais:\nx1 = %f\nx2 = %f\n\n", x1, x2);
            break;
        case 3:
            printf("Nao eh funcao quadratica!\n\n");
            break;
    }
    
    system("pause");
    return 0;
}


int raizes(float A, float B, float C, float *X1, float *X2){

    //var;
    float D;
    if(A == 0) return 3;        //3 é o código de erro da função, caso A == 0;
    D = (B * B) - (4 * A * C);
    
    if(D < 0) return 0;
    else if(D == 0){
        *X1 = -B/(2 * A);
        return 1;
    }
    else{
        *X1 = (-sqrt(D) - B) / (2 * A);
        *X2 = (sqrt(D) - B) / (2 * A);
        return 2;
    }
}