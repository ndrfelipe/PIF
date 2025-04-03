#include <stdio.h>

int main(){
    const int leng = 12;
    char opcao;
    int cont = 0;
    double resultado = 0.0;
    double matriz[leng][leng];

    scanf("%c", &opcao);

    for(int i = 0; i < leng; i++){
        for(int j = 0; j < leng; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(int i = 0; i < leng; i++){
        for(int j = i + 1; j < leng; j++){
            resultado += matriz[i][j];
            cont++;
        }
    }

    if(opcao == 'M'){
        resultado /= cont;
    }

    printf("%.1lf\n", resultado);

    return 0;
}