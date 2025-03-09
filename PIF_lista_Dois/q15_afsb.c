#include <stdio.h>
int main(){

    int valorUm, valorDois, valorTres, A, B, C, varTemp;
    scanf("%d%d%d", &valorUm, &valorDois, &valorTres);

    A = valorUm;
    B = valorDois;
    C = valorTres;

    if(valorUm >= valorDois){
        varTemp = valorUm;
        valorUm = valorDois;
        valorDois = varTemp;
    }

    if(valorUm >= valorTres){
        varTemp = valorUm;
        valorUm = valorTres;
        valorTres = varTemp;
    }

    if(valorDois >= valorTres){
        varTemp = valorDois;
        valorDois = valorTres;
        valorTres = varTemp;
    }

    printf("%d\n", valorUm);
    printf("%d\n", valorDois);
    printf("%d\n", valorTres);
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    
    return 0;
}