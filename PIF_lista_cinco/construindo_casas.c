#include <stdio.h>
#include <math.h>

// Entrada: A - comprimento da casa B - largura da casa C - percentual

// Eu preciso encontrar o LADO MÍNIMO da casa
// Para encontrar o lado é necessário:
// Área da casa: largura X altura
// Percentual de construçao C
// depois disso, o lado vai ser a RAÍZ QUADRADA da área/percentual.

// preciso fazer isso repetidamente até o valor final ser zero

typedef struct
{
    double comprimento_da_casa;
    double largura_da_casa;
    double percentual_da_casa;
}PropCasa;

int calcular_lado_da_casa(PropCasa valor){
    
    double valor_lado_terreno = sqrt((valor.comprimento_da_casa * valor.largura_da_casa * 100)/valor.percentual_da_casa);
    return (int)(valor_lado_terreno);
}

int main(){

    PropCasa casa;
    int resultado;

    
    while (1){

        scanf("%lf", &casa.comprimento_da_casa);
        if(casa.comprimento_da_casa == 0) break;
        
        scanf("%lf %lf", &casa.largura_da_casa, &casa.percentual_da_casa);
        if(casa.percentual_da_casa < 0 || casa.percentual_da_casa >= 1000) return 0;
        
        resultado = calcular_lado_da_casa(casa);
        printf("%d\n", resultado);

        
    }
    

    return 0;
}