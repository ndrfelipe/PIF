#include <stdio.h>

int main(){

    int valorInicial, value;

    scanf("%d", &valorInicial);

    for (int i = 0; i < valorInicial; i++)
    {
        scanf("%d", &value);
        if (value % 2 == 0 && value > 0){
            printf("EVEN POSITIVE\n");
        } else if(value % 2 == 0 && value < 0 ){
            printf("EVEN NEGATIVE\n");
        }else if(value % 2 != 0 && value > 0){
            printf("ODD POSITIVE\n");
        }else if(value % 2 != 0 && value < 0){
            printf("ODD NEGATIVE\n");
        }else{
            printf("NULL\n");
        }
    }    

    return 0;
}