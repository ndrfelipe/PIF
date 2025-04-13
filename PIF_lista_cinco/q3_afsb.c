// SUBMISSÃO # 44460335
#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX_PALAVRA 10
#define NUMERO_MAX_DE_PALAVRAS 1000

typedef enum {
    NUMERO_UM = 1,
    NUMERO_DOIS = 2,
    NUMERO_TRES = 3
} NumeroReconhecido;

typedef struct {
    char palavra_digitada[TAMANHO_MAX_PALAVRA];
    NumeroReconhecido numero_inferido;
} PalavraComNumero;

int contar_caracteres_iguais(const char* palavra, const char* referencia) {
    int quantidade_de_acertos = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == referencia[i]) {
            quantidade_de_acertos++;
        }
    }
    return quantidade_de_acertos;
}

int main() {
    int quantidade_de_palavras;
    PalavraComNumero entrada;

    scanf("%d", &quantidade_de_palavras);

    if (quantidade_de_palavras > NUMERO_MAX_DE_PALAVRAS) {
        return 0;
    }

    for (int i = 0; i < quantidade_de_palavras; i++) {
        scanf("%s", entrada.palavra_digitada);

        int tamanho_da_palavra = strlen(entrada.palavra_digitada);

        if (tamanho_da_palavra == 5) {
            int acertos_com_three = contar_caracteres_iguais(entrada.palavra_digitada, "three");
            if (acertos_com_three >= 4) {
                entrada.numero_inferido = NUMERO_TRES;
                printf("%d\n", entrada.numero_inferido);
            }
        } else {
            int acertos_com_one = contar_caracteres_iguais(entrada.palavra_digitada, "one");
            int acertos_com_two = contar_caracteres_iguais(entrada.palavra_digitada, "two");

            if (acertos_com_one >= 2) {
                entrada.numero_inferido = NUMERO_UM;
                printf("%d\n", entrada.numero_inferido);
            } else if (acertos_com_two >= 2) {
                entrada.numero_inferido = NUMERO_DOIS;
                printf("%d\n", entrada.numero_inferido);
            }
        }
    }

    return 0;
}
