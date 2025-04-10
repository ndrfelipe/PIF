#include <stdio.h>

typedef enum {
    Brasilia=61,
    Salvador=71,
    SaoPaulo=11,
    Rio=21,
    Juiz=32,
    Campinas=19,
    Vitoria=27,
    Belo=31
}Destinos;

typedef struct {
    Destinos valor;
}NumeroDeDestino;


int main(){
    NumeroDeDestino numero;
    scanf("%d", &numero.valor);

    switch (numero.valor)
    {
    case Brasilia:
        printf("Brasilia\n");
        break;
    case Salvador:
        printf("Salvador\n");
        break;
    case SaoPaulo:
        printf("Sao Paulo\n");
        break;
    case Rio:
        printf("Rio de Janeiro\n");
        break;
    case Juiz:
        printf("Juiz de Fora\n");
        break;
    case Campinas:
        printf("Campinas\n");
        break;
    case Vitoria:
        printf("Vitoria\n");
        break;
    case Belo:
        printf("Belo Horizonte\n");
        break;
    default:
        printf("DDD nao cadastrado\n");
        break;
    }

    return 0;
}