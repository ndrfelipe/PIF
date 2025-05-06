#include <stdio.h>
#include <string.h>

int main(){
    char mensagem1[100];

    scanf("%[^\n]", mensagem1);
    printf("%s", mensagem1);

    return 0;
}