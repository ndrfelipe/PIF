#include <stdio.h>
#include <string.h>

void descodificarCifraDeCesar(char *texto, int deslocamento){
    int tamanhoDaString = strlen(texto);
    for(int i = 0; i < tamanhoDaString; i++){
        texto[i] = ((texto[i] - 'A' - deslocamento + 26) % 26) + 'A';
    }
}

int main(){

    int quantidadeDeCasosDeTeste, deslocamento;
    char texto[51];


    scanf("%d", &quantidadeDeCasosDeTeste);
    while(quantidadeDeCasosDeTeste--){
        scanf("%s", texto);
        scanf("%d", &deslocamento);

        descodificarCifraDeCesar(texto, deslocamento);
        printf("%s\n", texto);
    }


    return 0;
}