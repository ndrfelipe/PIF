#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 2105

int contarSubstringUnica(const char *str, int len){
    char **substring = (char **)malloc(len * len *sizeof(char *));
    int count = 0;

    for(int i = 0; i < len; i++){
        for(int j = i; j < len ;j++){
            char *temp = (char *)malloc((j - i + 2) * sizeof(char));
            strncpy(temp, str + i, j - i + 1);
            temp[j - i + 1] = '\0';

            int unique = 1;
            for(int k = 0; k < count; k++){
                if(strcmp(temp, substring[k]) == 0){
                    unique = 0;
                    break;
                }
            }

            if(unique){
                substring[count++] = temp;
            }else{
                free(temp);
            }
        }
    }

    int result = count;

    for(int i = 0; i < count; i++){
        free(substring[i]);
    }
    free(substring);

    return result;
}

int main(){
    char str[MAX_N] = "";
    int len = 0;
    char comando[MAX_N];

    while(scanf("%s", comando) != EOF){

        for (int i = 0; comando[i] != '\0'; i++){
            if(comando[i] == '?'){
                int contagem = contarSubstringUnica(str, len);
                printf("%d\n", contagem);
            }else {
                str[len++] = comando[i];
                str[len] = '\0';
            }
        }

        len = 0;
        str[0] = '\0';
    }

    return 0;

}