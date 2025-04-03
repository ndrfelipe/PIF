#include <stdio.h>

#define MAX 2000

char sequencia[MAX + 1];           
int posicoesEspeciais[MAX];       
int dpEspeciais[MAX][MAX]; 
int dpTamanho[MAX][MAX];   

void copiarString(char destino[], char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

int compararStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int maximo(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int tamanho = 0, i, j, k;
    int qtdPosicoes, posicao;

    scanf("%s", sequencia);

    while (sequencia[tamanho] != '\0') {
        tamanho++;
    }
    
    for (i = 0; i < tamanho; i++) {
        posicoesEspeciais[i] = 0;
    }

    scanf("%d", &qtdPosicoes);
    for (i = 0; i < qtdPosicoes; i++) {
        scanf("%d", &posicao);
        posicoesEspeciais[posicao - 1] = 1; 
    }

    for (i = 0; i < tamanho; i++) {
        dpEspeciais[i][i] = posicoesEspeciais[i];
        dpTamanho[i][i] = 1;
    }

    for (k = 2; k <= tamanho; k++) {
        for (i = 0; i <= tamanho - k; i++) {
            j = i + k - 1;

            int esp1 = -1, tam1 = -1;

            if (sequencia[i] == sequencia[j]) {
                if (i + 1 <= j - 1) {
                    esp1 = dpEspeciais[i + 1][j - 1];
                    tam1 = dpTamanho[i + 1][j - 1];
                } else {
                    esp1 = 0;
                    tam1 = 0;
                }
                esp1 += posicoesEspeciais[i] + posicoesEspeciais[j];
                tam1 += 2;
            }

            int esp2 = dpEspeciais[i + 1][j];
            int tam2 = dpTamanho[i + 1][j];

            int esp3 = dpEspeciais[i][j - 1];
            int tam3 = dpTamanho[i][j - 1];

            if (esp1 > esp2 || (esp1 == esp2 && tam1 > tam2)) {
                if (esp1 > esp3 || (esp1 == esp3 && tam1 > tam3)) {
                    dpEspeciais[i][j] = esp1;
                    dpTamanho[i][j] = tam1;
                } else {
                    dpEspeciais[i][j] = esp3;
                    dpTamanho[i][j] = tam3;
                }
            } else {
                if (esp2 > esp3 || (esp2 == esp3 && tam2 > tam3)) {
                    dpEspeciais[i][j] = esp2;
                    dpTamanho[i][j] = tam2;
                } else {
                    dpEspeciais[i][j] = esp3;
                    dpTamanho[i][j] = tam3;
                }
            }
        }
    }
    
    printf("%d\n", dpTamanho[0][tamanho - 1]);

    return 0;
}