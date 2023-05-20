#include <stdio.h>

/*5. Considerando a estrutura
struct vetor {
float a;
float b;
float c;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.*/

typedef struct{
    float a;
    float b;
    float c;
}vetor;

int main(){
    int i;
    vetor c[2];
    vetor soma;
    for(i = 0; i < 2; i++){
        printf("Digite float a: ");
        scanf("%f", &c[i].a);
        printf("Digite float b: ");
        scanf("%f", &c[i].b);
        printf("Digite float c: ");
        scanf("%f", &c[i].c);
        printf("\n");
    }
    soma.a = c[0].a + c[1].a;
    soma.b = c[0].b + c[1].b;
    soma.c = c[0].c + c[1].c;
    printf("\nFloat Somas -->");
    printf("\nFloat A: %.2f", soma.a);
    printf("\nFloat B: %.2f", soma.b);
    printf("\nFloat C: %.2f", soma.c);
    return 0;
}