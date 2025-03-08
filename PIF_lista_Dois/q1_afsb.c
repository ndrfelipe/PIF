#include <stdio.h>

int main(){
    // Ler um valor float com duas casas decimais
    double valorDeEntrada;
    int contDeCem = 0, contDeCinq = 0, contDeVinte = 0, contDeDez = 0;
    int contDeCinco = 0, contDeDois = 0, contUm = 0, contCinqCent = 0, contVinteCincoCent = 0;
    int contDezCent = 0, contCincoCent = 0, contUmCent = 0;

    scanf("%lf", &valorDeEntrada);

    while( valorDeEntrada >= 100){
        contDeCem++;
        valorDeEntrada = valorDeEntrada - 100;
    }
    while( valorDeEntrada >= 50){
        contDeCinq++;
        valorDeEntrada = valorDeEntrada - 50;
    }
    while( valorDeEntrada >= 20){
        contDeVinte++;
        valorDeEntrada = valorDeEntrada - 20;
    }
    while( valorDeEntrada >= 10){
        contDeDez++;
        valorDeEntrada = valorDeEntrada - 10;
    }
    while( valorDeEntrada >= 5){
        contDeCinco++;
        valorDeEntrada = valorDeEntrada - 5;
    }
    while( valorDeEntrada >= 2){
        contDeDois++;
        valorDeEntrada = valorDeEntrada - 2;
    }
    while( valorDeEntrada >= 1){
        contUm++;
        valorDeEntrada = valorDeEntrada - 1;
    }
    while( valorDeEntrada >= 0.5){
        contCinqCent++;
        valorDeEntrada = valorDeEntrada - 0.5;
    }
    while( valorDeEntrada >= 0.25){
        contVinteCincoCent++;
        valorDeEntrada = valorDeEntrada - 0.25;
    }
    while( valorDeEntrada >= 0.10){
        contDezCent++;
        valorDeEntrada = valorDeEntrada - 0.10;
    }
    while( valorDeEntrada >= 0.05){
        contCincoCent++;
        valorDeEntrada = valorDeEntrada - 0.05;
    }
    while( valorDeEntrada >= 0.01){
        contUmCent++;
        valorDeEntrada = valorDeEntrada - 0.01;
    }
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", contDeCem);
    printf("%d nota(s) de R$ 50.00\n", contDeCinq);
    printf("%d nota(s) de R$ 20.00\n", contDeVinte);
    printf("%d nota(s) de R$ 10.00\n", contDeDez);
    printf("%d nota(s) de R$ 5.00\n", contDeCinco);
    printf("%d nota(s) de R$ 2.00\n", contDeDois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", contUm);
    printf("%d moeda(s) de R$ 0.50\n", contCinqCent);
    printf("%d moeda(s) de R$ 0.25\n", contVinteCincoCent);
    printf("%d moeda(s) de R$ 0.10\n", contDezCent);
    printf("%d moeda(s) de R$ 0.05\n", contCincoCent);
    printf("%d moeda(s) de R$ 0.01\n", contUmCent);

    return 0;
}