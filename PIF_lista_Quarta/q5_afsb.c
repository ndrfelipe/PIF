#include <stdio.h>
#include <string.h>

void processarFrase(char *frase, char *maiorPalavra) {
    char *palavra = strtok(frase, " ");
    int primeiro = 1;
    
    while (palavra != NULL) {
        if (!primeiro) {
            printf("-");
        }
        printf("%lu", strlen(palavra));
        primeiro = 0;
        
        if (strlen(palavra) >= strlen(maiorPalavra)) {
            strcpy(maiorPalavra, palavra);
        }
        
        palavra = strtok(NULL, " ");
    }
    printf("\n");
}

int main() {
    char frase[101], maiorPalavra[101] = "";
    
    while (1) {
        fgets(frase, sizeof(frase), stdin);
        frase[strcspn(frase, "\n")] = '\0'; 
        
        if (strcmp(frase, "0") == 0) break;
        
        processarFrase(frase, maiorPalavra);
    }
    
    printf("\nThe biggest word: %s\n", maiorPalavra);
    
    return 0;
}
