#include <stdio.h>
int main(){
    
    // T = numero de entradas
    // PA e PB = população
    // G1 e G2 = taxas

    int T = 0, anos=0, PA, PB;
    double G1, G2;

    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d%d%lf%lf", &PA, &PB, &G1, &G2);
        anos=0;
        while (PA <= PB){
            PA *= (1 + G1/100 );
            PB *= (1 + G2/100 );
            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if( anos <= 100){
            printf("%d anos.\n", anos);
        }
    }
    


    
    
    return 0;
}