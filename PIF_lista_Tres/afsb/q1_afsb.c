#include <stdio.h>

int main(){
    const int leng = 20;
    int vector[leng], varAux;

    for(int i = 0; i < leng; i++){
        scanf("%d", &vector[i]);
    }

    for(int i = 0; i < 10; i++){
        varAux = vector[i];
        vector[i] = vector[leng - 1 - i];
        vector[leng - 1 - i] = varAux;
    }
    
    for(int i = 0; i < leng; i++){
        printf("N[%d] = %d\n", i, vector[i]);
    }
    
    return 0;
}