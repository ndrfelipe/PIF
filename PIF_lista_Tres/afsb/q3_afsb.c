#include <stdio.h>

int main(){

    long long int A = 0, B = 1, varAux;
    int numTeste = 0, i = 0, N;

    const int tamanhoValoresFibo = 61;
    long long int valoresFibo[tamanhoValoresFibo];

    for(int i = 0; i < tamanhoValoresFibo; i++){
        valoresFibo[i] = A;

        varAux = A + B;
        A = B;
        B = varAux;
    }

    scanf("%d", &numTeste);
    while(i < numTeste){

        scanf("%d", &N);
        printf("Fib(%d) = %lld\n", N, valoresFibo[N]);
    
        i++;
    }

    return 0;
}