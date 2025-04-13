#include <stdio.h>
#include <string.h>

typedef enum {
    AGUIA,
    POMBA,
    VACA,
    HOMEM,
    LAGARTA,
    PULGA,
    MINHOCA,
    SANGUESSUGA,
    DESCONHECIDO
} CategoriaAnimal;

typedef struct {
    char coluna_vertebral[20];
    char tipo[20];
    char alimentacao[20];
} CaracteristicasAnimais;

CategoriaAnimal identificar_animal(CaracteristicasAnimais animal) {
    if (strcmp(animal.coluna_vertebral, "vertebrado") == 0) {
        if (strcmp(animal.tipo, "ave") == 0) {
            if (strcmp(animal.alimentacao, "carnivoro") == 0) return AGUIA;
            if (strcmp(animal.alimentacao, "onivoro") == 0) return POMBA;
        }
        if (strcmp(animal.tipo, "mamifero") == 0) {
            if (strcmp(animal.alimentacao, "onivoro") == 0) return HOMEM;
            if (strcmp(animal.alimentacao, "herbivoro") == 0) return VACA;
        }
    } else if (strcmp(animal.coluna_vertebral, "invertebrado") == 0) {
        if (strcmp(animal.tipo, "inseto") == 0) {
            if (strcmp(animal.alimentacao, "herbivoro") == 0) return LAGARTA;
            if (strcmp(animal.alimentacao, "hematofago") == 0) return PULGA;
        }
        if (strcmp(animal.tipo, "anelideo") == 0) {
            if (strcmp(animal.alimentacao, "hematofago") == 0) return SANGUESSUGA;
            if (strcmp(animal.alimentacao, "onivoro") == 0) return MINHOCA;
        }
    }
    return DESCONHECIDO;
}

void imprimir_animal(CategoriaAnimal categoria) {
    switch (categoria) {
        case AGUIA: printf("aguia\n"); break;
        case POMBA: printf("pomba\n"); break;
        case VACA: printf("vaca\n"); break;
        case HOMEM: printf("homem\n"); break;
        case LAGARTA: printf("lagarta\n"); break;
        case PULGA: printf("pulga\n"); break;
        case MINHOCA: printf("minhoca\n"); break;
        case SANGUESSUGA: printf("sanguessuga\n"); break;
        default: printf("animal desconhecido\n"); break;
    }
}

int main() {
    CaracteristicasAnimais animal;

    scanf("%s", animal.coluna_vertebral);
    scanf("%s", animal.tipo);
    scanf("%s", animal.alimentacao);

    CategoriaAnimal categoria = identificar_animal(animal);
    imprimir_animal(categoria);

    return 0;
}
