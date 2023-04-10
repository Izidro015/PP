#include <stdio.h>

/*40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do 
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, 
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.*/

int main() 
{
    float a, b, c, d;
    printf ("Digite o custo de fabrica\n");
    scanf ("%f", &a);
    if (a<12000){
        b = a*0.05;
        d = b+a;
        printf ("O custo ao consumidor r: %.2f", d);
        return 0;
    }if (a>=12000 && a<25000){
        b=a*0.10;
        c=a*0.15;
        d=c+b+a;
        printf ("O custo ao consumidor r: %.2f", d);
        return 0;
    }if (a>25000){
        b=a*0.15;
        c=a*0.20;
        d=b+a;
        printf ("O custo ao consumidor r: %.2f", d);
        return 0;
    }
}