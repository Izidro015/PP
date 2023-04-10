#include <stdio.h>

/*39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que 
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor 
salário terão um aumento proporcionalmente maior do que os funcionários com um salário 
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
 o valor do salário atual do funcionário;
 o tempo de serviço desse funcionário na empresa (número de anos de trabalho na 
empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do 
salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum 
aumento*/

int main(){
    int a;
    float b, c;
    
    printf ("Digite o salario atual\n");
    scanf ("%f", &b);
    printf ("Digite o tempo de servico em anos");
    scanf ("%i", &a);
    if (b<=500 && a<1){
        c = b*1.25;
        printf ("Novo salario: %.2f", c);
        return 0;
    }if(b<=1000 && a >= 1 && a <=3){
        c = 100 + (b*1.20);
        printf ("Novo salario: %.2f", c);
        return 0;
    }if(b<=1500 && a>=4 && a<=6){
        c = 200 + (b*1.15);
        printf ("Novo salario: %.2f", c);
        return 0;
    }if ( b<=2000 && a>=7 && a<=10){
        c = 300 + (b*1.10);
        printf ("Novo salario: %.2f", c);
        return 0;
    }if(b>2000 && a>10){
    c = 500 + b;
        printf ("Novo salario: %.2f", c);
        return 0;
    }else{
    printf ("Sem direito a aumento");
    }
    return 0;
}
  
