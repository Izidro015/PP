#include <stdio.h>

/*23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for 
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 
1996.*/

int main(){
    int a;
    printf("Digite uma ano: ");
    scanf("%d", &a);
    if((a%400==0)||((a%4==0)&&(a%100!=0))){
        printf("O ano é bissexto.");
    }else{
        printf("O ano não é bissexto.");
    }
    return 0;
}