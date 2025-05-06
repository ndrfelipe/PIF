#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int comprimento;
} Lado;

int podeFormarTriangulo(const Lado *lado1, const Lado *lado2, const Lado *lado3) {
    int a = lado1->comprimento;
    int b = lado2->comprimento;
    int c = lado3->comprimento;

    return (a + b > c) && (a + c > b) && (b + c > a);
}

int existeTrianguloPossivel(Lado *varetas, int quantidade) {
    for (int i = 0; i < quantidade - 2; i++) {
        for (int j = i + 1; j < quantidade - 1; j++) {
            for (int k = j + 1; k < quantidade; k++) {
                if (podeFormarTriangulo(&varetas[i], &varetas[j], &varetas[k])) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    const int quantidadeDeVaretas = 4;
    Lado *varetas = malloc(quantidadeDeVaretas * sizeof(Lado));

    if (varetas == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < quantidadeDeVaretas; i++) {
        scanf("%d", &varetas[i].comprimento);
    }

    int resultado = existeTrianguloPossivel(varetas, quantidadeDeVaretas);
    printf("%c\n", resultado ? 'S' : 'N');

    free(varetas);
    return 0;
}