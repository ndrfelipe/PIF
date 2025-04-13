#include <stdio.h>
int main(){
    typedef enum Meses {Jan = 1, Fev, Mar, Abril, Maio, Jun, Jul, Ago, Set, Out, Nov, Dez};
    int N;
    scanf("%d", &N);

    switch (N){
    case Jan:
        printf("Janeiro");
        break;
    case Fev:
        printf("Fevereiro");
        break;
    case Mar:
        printf("Março");
        break;
    case Abril:
        printf("Abril");
        break;
    case Maio:
        printf("Maio");
        break;
    case Jun:
        printf("Junho");
        break;
    case Jul:
        printf("Julho");
        break;
    case Ago:
        printf("Agosto");
        break;
    case Set:
        printf("Setembro");
        break;
    case Out:
        printf("Outubro");
        break;
    case Nov:
        printf("Novembro");
        break;
    case Dez:
        printf("Dezembro");
        break;
    
    default:
        printf("Ops");
    }

    return 0;
}
