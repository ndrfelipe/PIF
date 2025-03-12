#include <stdio.h>

int main(){

    double valor;
    int nota_moedas;
    
    scanf("%lf", &valor);

    printf("NOTAS:\n");
    nota_moedas = valor / 100;
    printf("%d nota(s) de R$ 100.00\n", nota_moedas);
    valor -= nota_moedas * 100;

    nota_moedas = valor / 50;
    printf("%d nota(s) de R$ 50.00\n", nota_moedas);
    valor -= nota_moedas * 50;

    nota_moedas = valor / 20;
    printf("%d nota(s) de R$ 20.00\n", nota_moedas);
    valor -= nota_moedas * 20;

    nota_moedas = valor / 10;
    printf("%d nota(s) de R$ 10.00\n", nota_moedas);
    valor -= nota_moedas * 10;

    nota_moedas = valor / 5;
    printf("%d nota(s) de R$ 5.00\n", nota_moedas);
    valor -= nota_moedas * 5;

    nota_moedas = valor / 2;
    printf("%d nota(s) de R$ 2.00\n", nota_moedas);
    valor -= nota_moedas * 2;

    printf("MOEDAS:\n");
    nota_moedas = valor / 1;
    printf("%d moeda(s) de R$ 1.00\n", nota_moedas);
    valor -= nota_moedas * 1;

    nota_moedas = valor / 0.5;
    printf("%d moeda(s) de R$ 0.50\n", nota_moedas);
    valor -= nota_moedas * 0.5;

    nota_moedas = valor / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", nota_moedas);
    valor -= nota_moedas * 0.25;

    nota_moedas = valor / 0.1;
    printf("%d moeda(s) de R$ 0.10\n", nota_moedas);
    valor -= nota_moedas * 0.1;

    nota_moedas = valor / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", nota_moedas);
    valor -= nota_moedas * 0.05;

    nota_moedas = valor / 0.01;
    printf("%d moeda(s) de R$ 0.01\n", nota_moedas);
    valor -= nota_moedas * 0.01;

    return 0;
};