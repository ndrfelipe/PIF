#include <stdio.h>

int main(){

    int numeroQueSeraImprimido = 0, numeroParaCalculo = 1, variavelAuxiliarParaCalculo, valorDeEntrada_N;
    scanf("%d", &valorDeEntrada_N);

    if (valorDeEntrada_N > 0 && valorDeEntrada_N < 46){
        for(int i; i < valorDeEntrada_N; i++){
            printf("%d", numeroQueSeraImprimido);
            if( i < valorDeEntrada_N - 1){
                printf(" ");
            }
    
            variavelAuxiliarParaCalculo = numeroQueSeraImprimido + numeroParaCalculo;
            numeroQueSeraImprimido = numeroParaCalculo;
            numeroParaCalculo = variavelAuxiliarParaCalculo;
        }
    }
    printf("\n");
    return 0;
}