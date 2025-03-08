#include <stdio.h>

int main(){
    int option, contAl=0, contGas=0, contDie=0;
    do
    {   
        printf("Insira a opção: \n");
        scanf("%d", &option);

        if (option <= 0 || option > 4){
            printf("Insira uma opção válida: \n");
            scanf("%d", &option);
        }

        switch (option){
        case 1:
            contAl++;
            break;
        case 2:
            contGas++;
            break;
        case 3:
            contDie++;
            break;
        }
    } while (option!=4);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", contAl);
    printf("Gasolina: %d\n", contGas);
    printf("Diesel: %d\n", contDie);
    

     
    return 0;
}