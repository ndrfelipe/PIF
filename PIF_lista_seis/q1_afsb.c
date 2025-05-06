#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minuto;
}Horario;

int converterParaMinutos(Horario *h){
    return h->hora * 60 + h->minuto;
}

int calcularDiferencaDeMinutos(Horario *atual, Horario *alarme){
    int minutosAtual = converterParaMinutos(atual);
    int minutoAlarme = converterParaMinutos(alarme);

    if(minutoAlarme <= minutosAtual){
        minutoAlarme += 24 * 60;
    }

    int resultado = minutoAlarme - minutosAtual;
    return resultado;
}  

int main(){
    int horaAtual, minutoAtual, horaFinal, minutoFinal;
    
    while(1){
        scanf("%d %d %d %d", &horaAtual, &minutoAtual, &horaFinal, &minutoFinal);

        if(horaAtual == 0 && minutoAtual == 0 && horaFinal == 0 && minutoFinal == 0){
            break;
        }

        Horario *horarioAtual = (Horario *)malloc(sizeof(Horario));
        Horario *horarioAlarme = (Horario *)malloc(sizeof(Horario));

        horarioAtual->hora= horaAtual;
        horarioAtual->minuto = minutoAtual;
        horarioAlarme->hora = horaFinal;
        horarioAlarme->minuto = minutoFinal;

        int diferencaDeMinutos = calcularDiferencaDeMinutos(horarioAtual, horarioAlarme);

        printf("%d\n", diferencaDeMinutos);

        free(horarioAtual);
        free(horarioAlarme);
    }   
    
    return 0;
}
