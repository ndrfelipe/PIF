#include <stdio.h>

int main(){
    
    int valorUm, valorDois, valorTres, varTem;
    scanf("%d%d%d", &valorUm, &valorDois, &valorTres);
    
    if(valorUm <= valorDois){
        varTem = valorUm;
        valorUm = valorDois;
        valorDois = varTem;
    }

    if(valorUm <= valorTres){
        varTem = valorUm;
        valorUm = valorTres;
        valorTres = varTem;
    }

    if(valorDois <= valorTres){
        varTem = valorDois;
        valorDois = valorTres;
        valorTres = varTem;
    }
    
    printf("%d eh o maior\n", valorUm);

     
    return 0;
}