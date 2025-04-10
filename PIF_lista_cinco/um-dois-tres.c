#include <stdio.h>
#include <string.h>

// Só pode ter Uma letra errada por string.
// O cumprimento deve sempre ser correto.
//  Cada palavra deve ser em letra minúscula.

// Primeira linha: Número de palavras

// Função para contar o número de acertos
int contar_caracteres_iguais(char* palavra, char* referencia){
    int quantidade_de_acertos = 0;
    for(int i = 0; palavra[i] != '\0'; i++){ // vai percorrer até o final da string
        if(palavra[i] == referencia[i]){
            quantidade_de_acertos++;
        }
    }

    return quantidade_de_acertos;
}

int main(){
    int quantidade_de_palavras;
    char palavra[10];
    const int NUMERO_MAX_DE_PALAVRAS = 1000;

    scanf("%d", &quantidade_de_palavras);
    
    if(quantidade_de_palavras>NUMERO_MAX_DE_PALAVRAS){
        return 0;
    }
        

    for(int i=0; i < quantidade_de_palavras; i++){
        scanf("%s", palavra);

        int tamanho_da_palavra = strlen(palavra);
        
        
        if(tamanho_da_palavra == 5){
            int quantidade_de_caracteres_iguais_a_three = contar_caracteres_iguais(palavra, "three");
            if(quantidade_de_caracteres_iguais_a_three >= 4){
                printf("3\n");
            }
        }else{
            int quantidade_de_caracteres_iguais_a_two = contar_caracteres_iguais(palavra, "two");
            int quantidade_de_caracteres_iguais_a_one = contar_caracteres_iguais(palavra, "one");

            if(quantidade_de_caracteres_iguais_a_one >=2){
                printf("1\n");
            }else{
                if(quantidade_de_caracteres_iguais_a_two >= 2){
                    printf("2\n");
                }
            }
           
        }
        
    

    }

}