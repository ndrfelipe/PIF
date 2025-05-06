#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int velocidade;
} Lesma;

int determinarNivelVelocidade(int velocidade) {
    if (velocidade < 10) {
        return 1;  
    } else if (velocidade < 20) {
        return 2;  
    } else {
        return 3;  
    }
}

int nivelDaLesmaMaisVeloz(Lesma* lesmas, int totalLesmas) {
    int maxVelocidade = lesmas[0].velocidade;

    for (int i = 1; i < totalLesmas; i++) {
        if (lesmas[i].velocidade > maxVelocidade) {
            maxVelocidade = lesmas[i].velocidade;
        }
    }

    return determinarNivelVelocidade(maxVelocidade);
}

int main() {
    int numeroDeLesmas;

    while (scanf("%d", &numeroDeLesmas) != EOF) {
        Lesma* lesmas = malloc(numeroDeLesmas * sizeof(Lesma));
        if (lesmas == NULL) {
            fprintf(stderr, "Erro ao alocar memória para as lesmas.\n");
            return 1;
        }

        for (int i = 0; i < numeroDeLesmas; i++) {
            scanf("%d", &lesmas[i].velocidade);
        }

        int nivel = nivelDaLesmaMaisVeloz(lesmas, numeroDeLesmas);
        printf("%d\n", nivel);

        free(lesmas);
    }

    return 0;
}