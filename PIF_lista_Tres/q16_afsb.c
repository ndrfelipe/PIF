#include <stdio.h>

int main(){
    const int dim = 12;
    char op;
    double M[dim][dim], soma=0.0;
    int inicio, fim, count=0;

    scanf("%c", &op);

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            scanf("%lf", &M[i][j]);
        }

    }


    inicio=5, fim=6;
    for(int i = 7; i < dim; i++){
        for(int j = inicio; j <= fim; j++){
            soma+= M[i][j];
            count++;
        }
        inicio--;
        fim++;
    }

    if(op == 'M'){
        soma /= count;
    }

    printf("%.1lf\n", soma);
    return 0;
}