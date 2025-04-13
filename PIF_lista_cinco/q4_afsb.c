#include <stdio.h>
#include <string.h>

#define MAX_STRING 21
#define MAX_PESSOA 100
// se houver uma pessoa dentro do grupo com o idioma nativo diferente, o inglês prevalece 
//  Uso obrigatório de struct para armazenar o nome e o idioma de cada participante

typedef struct{
    char nome[MAX_STRING];
    char idioma[MAX_STRING];
}PropParticipante;


int main(){
    int numero_de_casos_teste;

    scanf("%d", &numero_de_casos_teste);

    for (int j = 0; j < numero_de_casos_teste; j++){

        int tamanho_vetor;
        scanf("%d", &tamanho_vetor);

        PropParticipante participantes[MAX_PESSOA];
           
        for (int x = 0; x < tamanho_vetor; x++){
            scanf("%s", participantes[x].idioma);
        }
        
    
        int todos_participantes_iguais = 1;
        for(int i = 1; i < tamanho_vetor; i++){
            if(strcmp(participantes[0].idioma, participantes[i].idioma) != 0){
                todos_participantes_iguais = 0;
                break;
            }
        }

        if(todos_participantes_iguais){
            printf("%s\n", participantes[0].idioma);
        }else{
            printf("ingles\n");
        }
    }
    
    return 0;
}