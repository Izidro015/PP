#include <stdio.h>

int main() {
    printf("Digite a hora inicial, horas, minutos e segundos, nessa ordem: \n");
    int inicioh;
    int iniciom;
    int inicios;
    scanf("%i%i%i", &inicioh, &iniciom, &inicios);
    printf("Digite a duração de experiênciaem segundos: ");
    int duracao;
    scanf("%i",&duracao);
    int seg=(inicioh*3600+iniciom*60)+inicios+duracao;
    int final_hora=(seg/3600)%24;
    int final_min=(seg%3600)/60;
    int final_seg=seg%60;
    int dias=(seg/3600)/24;
    printf("Hora de término: %ih \n Minutos do término: %imin \nSegundos do término: %iseg \nDias decorridos: %i dias", final_hora, final_min, final_seg, dias);
    return 0;
}