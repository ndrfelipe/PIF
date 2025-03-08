#include <stdio.h>

int main(){

    int horaInicial, horaFinal, intervalo;

    scanf("%d%d", &horaInicial, &horaFinal);

    if(horaFinal > horaInicial)
        intervalo = horaFinal - horaInicial;
    else if (horaFinal <= horaInicial)
        intervalo = (24 - horaInicial) + horaFinal;
    else if (horaFinal == horaInicial)
        intervalo = 24;

    printf("O JOGO DUROU %d HORA(S)\n", intervalo);
    return 0;
}