#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    int frequencia;
}Numero;

int encontrarPosicao(Numero *vetor, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i].valor == valor) {
            return i;
        }
    }
    return -1;
}

void contarFrequencias(Numero **vetor, int *tamanho, int valor) {
    int pos = encontrarPosicao(*vetor, *tamanho, valor);

    if (pos != -1) {
        (*vetor)[pos].frequencia++;
    } else {
        *vetor = (Numero *)realloc(*vetor, (*tamanho + 1) * sizeof(Numero));
        (*vetor)[*tamanho].valor = valor;
        (*vetor)[*tamanho].frequencia = 1;
        (*tamanho)++;
    }
}

int comparar(const void *a, const void *b) {
    return ((Numero *)a)->valor - ((Numero *)b)->valor;
}


void imprimir(Numero *vetor, int tamanho) {
    qsort(vetor, tamanho, sizeof(Numero), comparar);
    for (int i = 0; i < tamanho; i++) {
        printf("%d aparece %d vez(es)\n", vetor[i].valor, vetor[i].frequencia);
    }
}

int main() {
    int casoDeTeste, valorInput;
    scanf("%d", &casoDeTeste);

    Numero *numeros = NULL; 
    int tamanho = 0;

    for (int i = 0; i < casoDeTeste; i++) {
        scanf("%d", &valorInput);
        contarFrequencias(&numeros, &tamanho, valorInput);
    }

    imprimir(numeros, tamanho);

    free(numeros);

    return 0;
}
