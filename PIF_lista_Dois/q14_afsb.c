#include <stdio.h>
int main(){

    int codigoItem, quantidadeDoItem;
    double total;

    scanf("%d%d", &codigoItem, &quantidadeDoItem);
    switch (codigoItem){
        case 1:
            total = quantidadeDoItem * 4.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 2:
            total = quantidadeDoItem * 4.50;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 3:
            total = quantidadeDoItem * 5.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 4:
            total = quantidadeDoItem * 2.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 5:
            total = quantidadeDoItem * 1.50;
            printf("Total: R$ %.2lf\n", total);
            break;
    }
    
    return 0;
}