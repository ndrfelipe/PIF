#include <stdio.h>
#include <string.h>

void compararCodigoGenetico(char *d, char *s){

    while(scanf("%s %s", d, s) != EOF){
        if(strstr(d, s)){
            printf("Resistente\n");
        }else{
            printf("Nao resistente\n");
        }
    }
}

int main(){
    char dnaBacteria[101], sequenciaCodigo[101];
    compararCodigoGenetico(dnaBacteria, sequenciaCodigo);

    return 0;
}