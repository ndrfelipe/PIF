#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
#define MAX_SUBS 1000

char subsequencias[MAX_SUBS][MAX + 1];  
int totalSubs;

int comparar(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

void gerarSubsequencias(char *entrada, int len) {
    int limite = 1 << len;
    totalSubs = 0;

    for (int mascara = 1; mascara < limite; mascara++) {
        int index = 0;
        for (int j = 0; j < len; j++) {
            if (mascara & (1 << j)) {
                subsequencias[totalSubs][index++] = entrada[j];
            }
        }
        subsequencias[totalSubs][index] = '\0';
        totalSubs++;
        
        if (totalSubs >= MAX_SUBS) return;
    }
}

int main() {
    char entrada[MAX + 1];
    int primeiroCaso = 1;

    while (scanf("%s", entrada) != EOF) {
        if (!primeiroCaso) printf("\n");
        primeiroCaso = 0;

        int len = strlen(entrada);
        gerarSubsequencias(entrada, len);

        qsort(subsequencias, totalSubs, MAX + 1, comparar);

        for (int i = 0; i < totalSubs; i++) {
            if (i == 0 || strcmp(subsequencias[i], subsequencias[i - 1]) != 0) {
                printf("%s\n", subsequencias[i]);
            }
        }
    }

    return 0;
}
