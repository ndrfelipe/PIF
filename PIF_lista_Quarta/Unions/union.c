#include <stdio.h>
#include <math.h>
const double pi = 3.14;
// Identificar o tipo da figura
enum TipoFigura{RETANGULO, CIRCULO, TRIANGULO} typedef TipoFigura;

// Struct para definir um tipo retangulo
typedef struct{
    double base;
    double altura;
} Retangulo;

// Struct para definir um tipo círculo
typedef struct{
    double raio;
} Circulo;

// Estrutura triângulo
typedef struct{
    double base;
    double altura;
} Triangulo;

// Union contendo cículo e retangulo. A figura pode ser ou um, ou outro.
typedef union{
    Retangulo retangulo;
    Circulo circulo;
    Triangulo triangulo;
} Forma;

// Estrutura da forma geométrica.
typedef struct{
    TipoFigura tipo;
    Forma figura;
}FiguraGeometrica;

double get_area(FiguraGeometrica fih){
    switch (fih.tipo){
    case RETANGULO:
        return fih.figura.retangulo.altura * fih.figura.retangulo.base;
        break;
    case CIRCULO:
        return pi * fih.figura.circulo.raio * fih.figura.circulo.raio;
        break;
    case TRIANGULO:
        return (fih.figura.triangulo.altura * fih.figura.triangulo.base)/2;
    default:
        return 0.0;
    }
}



int main(){
    FiguraGeometrica f1 = {RETANGULO, .figura.retangulo ={5.0, 3.0}};
    FiguraGeometrica f2 = {CIRCULO, .figura.circulo={2.0}};
    FiguraGeometrica f3 = {TRIANGULO, .figura.triangulo={3.0, 10.0}};

    printf("Área do retângulo: %.2lf\n", get_area(f1));
    printf("Área do círculo: %.2lf\n", get_area(f2));
    printf("Área do triângulo: %.2lf\n", get_area(f3));

    return 0;
}