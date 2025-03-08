#include <stdio.h>

int main(){

    int valorEntrada;

    scanf("%d", &valorEntrada);

     if(valorEntrada == 61){
        printf("Brasilia\n");
     }else if(valorEntrada == 71){
        printf("Salvador\n");
     }else if (valorEntrada == 11){
        printf("Sao Paulo\n");
     }else if (valorEntrada == 21){
        printf("Rio de Janeiro\n");
     }else if (valorEntrada == 32){
        printf("Juiz de Fora\n");
     }else if (valorEntrada == 19) {
        printf("Campinas\n");
     }else if (valorEntrada == 27) {
        printf("Vitoria\n");
     }else if (valorEntrada == 31) {
        printf("Belo Horizonte\n");
     }else{
        printf("DDD nao cadastrado\n");
     }
     
    return 0;
}