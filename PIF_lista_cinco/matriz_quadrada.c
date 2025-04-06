#include <stdio.h>

typedef enum{
    EXTERNO,
    INTERNO,
    DIAG_PRINC,
    DIAG_SEC,
    CENTRO
}TipoCelula;

typedef union{
    int inteiro;
    char caracter;
}ValorCelula;

typedef struct{
    TipoCelula tipo;
    ValorCelula valor;
}Celula;

int main(){
    int quantidade_de_casos_teste;
    Celula matriz[101][101];

    while (scanf("%d\n", &quantidade_de_casos_teste) != EOF){
        int inicio = quantidade_de_casos_teste / 3;
        int fim = quantidade_de_casos_teste - inicio;

        // inicializar com 0;
        for(int i = 0; i< quantidade_de_casos_teste; i++){
            for(int j = 0; j< quantidade_de_casos_teste; j++){
                matriz[i][j].tipo = EXTERNO;
            }
        }

        

        for(int i = 0; i< quantidade_de_casos_teste; i++){
           matriz[i][i].tipo = DIAG_PRINC;
        }

        for(int i = 0; i< quantidade_de_casos_teste; i++){
            matriz[i][quantidade_de_casos_teste - i - 1].tipo = DIAG_SEC;
        }

        //  Preencher o quadrado interno;
        for(int i = inicio; i< fim; i++){
            for(int j = inicio; j< fim; j++){
                matriz[i][j].tipo = INTERNO;
            }
        }

        // centro
        matriz[quantidade_de_casos_teste/2][quantidade_de_casos_teste/2].tipo = CENTRO;
        
        
        for(int i = 0; i< quantidade_de_casos_teste; i++){
            for(int j = 0; j< quantidade_de_casos_teste; j++){
                matriz[i][j].valor.inteiro = matriz[i][j].tipo;
            }
        }

        for(int i = 0; i< quantidade_de_casos_teste; i++){
            for(int j = 0; j< quantidade_de_casos_teste; j++){
                printf("%d", matriz[i][j].valor.inteiro);
            }
            printf("\n");
        }
        printf("\n");

    }
    


    return 0;
}