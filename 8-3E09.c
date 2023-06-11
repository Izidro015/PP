#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //para motivos de demonstração, será usado um array aleatório de 10 elementos;

int main(){
    int arr[10], i, *p;
    srand(time(NULL));
    p = arr;

    printf("\t\tArray inicial.\n\t[");
    for(i = 0; i < 10; i++){
        *(p+i) = ((rand() % 21) - 10);  //números de -10 - +10;
        printf("%d, ", *(p+i));
    }
    printf("\b\b]\n\n");

    printf("\t\tArray modificado.\n\t[");
    for(i = 0; i < 10; i++){
        *(p+i) += 1;
        printf("%d, ", *(p+i));
    }
    printf("\b\b]\n\n");
    system("pause");
    return 0;
}