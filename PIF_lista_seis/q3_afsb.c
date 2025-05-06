#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PALAVRAS 50
#define TAMANHO_MAX_PALAVRA 51

typedef struct {
    char* texto;
    int tamanho;
} Palavra;

int compararPorTamanho(const void* a, const void* b) {
    Palavra* palavraA = (Palavra*)a;
    Palavra* palavraB = (Palavra*)b;

    if (palavraA->tamanho != palavraB->tamanho) {
        return palavraB->tamanho - palavraA->tamanho;
    }
    return 0;
}

void ordenarPalavras(Palavra* vetorPalavras, int quantidade) {
    qsort(vetorPalavras, quantidade, sizeof(Palavra), compararPorTamanho);
}

void liberarMemoria(Palavra* vetorPalavras, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        free(vetorPalavras[i].texto);
    }
}

int main() {
    int casosDeTeste;
    char linha[5000];

    scanf("%d\n", &casosDeTeste);

    for (int caso = 0; caso < casosDeTeste; caso++) {
        fgets(linha, sizeof(linha), stdin);

        Palavra* vetorPalavras = (Palavra*)malloc(MAX_PALAVRAS * sizeof(Palavra));
        int quantidadeDePalavras = 0;

        char* token = strtok(linha, " \n");
        while (token != NULL && quantidadeDePalavras < MAX_PALAVRAS) {
            int tamanho = strlen(token);

            vetorPalavras[quantidadeDePalavras].texto = (char*)malloc((tamanho + 1) * sizeof(char));
            strcpy(vetorPalavras[quantidadeDePalavras].texto, token);
            vetorPalavras[quantidadeDePalavras].tamanho = tamanho;

            quantidadeDePalavras++;
            token = strtok(NULL, " \n");
        }

        ordenarPalavras(vetorPalavras, quantidadeDePalavras);

        for (int i = 0; i < quantidadeDePalavras; i++) {
            printf("%s", vetorPalavras[i].texto);
            if (i != quantidadeDePalavras - 1) {
                printf(" ");
            }
        }
        printf("\n");

        liberarMemoria(vetorPalavras, quantidadeDePalavras);
        free(vetorPalavras);
    }

    return 0;
}