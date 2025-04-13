#include <stdio.h>

enum especificacao{cachorro_quente=1, x_salada, x_bacon, torrada_simples, refri};
int total;

typedef struct {
    int codigo;
    double valor;
    int quantidade;
}Pedido;


int main(){
    Pedido pedido_cliente;
    scanf("%d%d", &pedido_cliente.codigo, &pedido_cliente.quantidade);

    switch (pedido_cliente.codigo){
    case cachorro_quente:
        pedido_cliente.valor = 4.00;
        printf("Total: R$ %.2lf\n", pedido_cliente.quantidade*pedido_cliente.valor);
        break;
    case x_salada:
        pedido_cliente.valor = 4.5;
        printf("Total: R$ %.2lf\n", pedido_cliente.quantidade*pedido_cliente.valor);
        break;
    case x_bacon:
        pedido_cliente.valor = 5.00;
        printf("Total: R$ %.2lf\n", pedido_cliente.quantidade*pedido_cliente.valor);
        break;
    case torrada_simples:
        pedido_cliente.valor = 2.00;
        printf("Total: R$ %.2lf\n", pedido_cliente.quantidade*pedido_cliente.valor);
        break;
    case refri:
        pedido_cliente.valor = 1.50;
        printf("Total: R$ %.2lf\n", pedido_cliente.quantidade*pedido_cliente.valor);
        break;
    default:
        break;
    }


    return 0;
}