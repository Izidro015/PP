#include <stdio.h>
#include <math.h>

/*7. Faça um programa que converta coordenadas polares para cartesianas:
 Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a) 
em radianos;
 Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo 
que x = r * cos(a) e y = r * sin(a). 
No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do 
ponto gerado no plano cartesiano.*/

typedef struct{
    int r;
    float raio;
}polar;

int main(){
    float x, y;
    polar c;
        printf("Digite a coordenada polar(r): ");
        scanf("%d", &c.r);
        printf("Digite a coordenada polar(raio): ");
        scanf("%f", &c.raio);
        x = c.r * cos(c.raio);
        y = c.r * sin(c.raio);
        printf("Coordenadas x e y transformadas: %.2f e %.2f", x, y);
    return 0;
}