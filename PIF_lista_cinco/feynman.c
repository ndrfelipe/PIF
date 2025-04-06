#include <stdio.h>

typedef union {
    int inteiro;
    char caracter;
    float percentual;
}TipoSubquadrado;

typedef struct {
    TipoSubquadrado quantidade;
}SubQuadrado;



int main(){
    int ordem_da_matriz;
    SubQuadrado quadrado;
    do{
        int  total=0;
        scanf("%d", &ordem_da_matriz);
        for(int i = 1; i <=ordem_da_matriz; i++){
            quadrado.quantidade.inteiro = (ordem_da_matriz - i + 1) * (ordem_da_matriz - i + 1);
            total += quadrado.quantidade.inteiro;
        }
        
        if(total > 0){
            printf("%d\n", total);
        }
      
    }while(ordem_da_matriz != 0);

}