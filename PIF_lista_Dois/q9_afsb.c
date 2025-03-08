#include <stdio.h>

int main(){

    int password = 2002, pass;

    do{
        scanf("%d", &pass);
        if (pass != password){
            printf("Senha Invalida\n");
        }
        
    } while (pass != password);
    
    printf("Acesso Permitido");
     
    return 0;
}