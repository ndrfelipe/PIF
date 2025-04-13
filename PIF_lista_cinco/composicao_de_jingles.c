#include <stdio.h>
#include <string.h>
#define TAMANHO_MAXIMO 200

typedef struct{
    char identificador[TAMANHO_MAXIMO];
}PropComposicao;

int contador_composicao(PropComposicao* valor){

    double duracao_da_nota = 0;
    int duracao_do_compasso = 0;

    for (int i = 0; valor->identificador[i] != '\0'; i++){
        // a duração de um compasso deve ser sempre 1.
        // A duração de um compasso é a soma da duração de suas notas

        
        if (valor->identificador[i] == 'W'){
            duracao_da_nota += 1.0;
        }else if (valor->identificador[i] == 'H'){
            duracao_da_nota+=0.5;
        }else if (valor->identificador[i] == 'Q'){
            duracao_da_nota+=0.25;
        }else if (valor->identificador[i] == 'E'){
            duracao_da_nota+=0.125;
        }else if (valor->identificador[i] == 'S'){
            duracao_da_nota+=0.0625;
        }else if (valor->identificador[i] == 'T'){
            duracao_da_nota+=0.03125;
        }else if (valor->identificador[i] == 'X'){
            duracao_da_nota+=0.015625;
        }else{
            duracao_da_nota+=0;
        }

        if(valor->identificador[i]=='/'){
            if(duracao_da_nota == 1.0){
                duracao_do_compasso += duracao_da_nota;
            }
            duracao_da_nota=0.0;
        }
        
    }

    return duracao_do_compasso;
}

int main(){
    int resultado;
    PropComposicao composicao;

    while (1){
        scanf("%s", composicao.identificador);
        if (strcmp(composicao.identificador, "*") == 0) break;

        resultado = contador_composicao(&composicao);
        printf("%d\n", resultado);
    }

    return 0;
}