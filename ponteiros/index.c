#include <stdio.h>
#include <stdlib.h>

void reajuste(float *, float *);

int main()
{
    float val_prec, val_reaj;
    do
    {
        printf("\n Insira o preço atual: ");
        scanf("%f", &val_prec);
        reajuste(&val_prec, &val_reaj);
        printf("\n O preço novo é: %.2f\n", val_prec);
        printf("\n O aumento foi de: %.2f\n", val_reaj);


     } while (val_prec!= 0.0);
     
     system("PAUSE");
     return 0;
}

void reajuste(float *preco, float *reajuste){
    *reajuste = *preco * 0.2;
    *preco *= 1.2;
}