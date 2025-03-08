#include <stdio.h>

int main(){

    double firstValue, secondValue, thirdValue, varTemp;
    
    scanf("%lf%lf%lf", &firstValue, &secondValue, &thirdValue);

    if( firstValue <= secondValue){
        varTemp = firstValue;
        firstValue = secondValue;
        secondValue = varTemp;        
    }
    if (firstValue <= thirdValue){
        varTemp = firstValue;
        firstValue = thirdValue;
        thirdValue = varTemp;
    }
    if (secondValue <= thirdValue){
        varTemp = secondValue;
        secondValue = thirdValue;
        thirdValue = varTemp;
    }
    
    if (firstValue >= secondValue + thirdValue){
        printf("NAO FORMA TRIANGULO\n");
    }else if(firstValue*firstValue == secondValue * secondValue + thirdValue * thirdValue ){
        printf("TRIANGULO RETANGULO\n");
    }else if(firstValue*firstValue > secondValue * secondValue + thirdValue * thirdValue){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(firstValue*firstValue < secondValue * secondValue + thirdValue * thirdValue){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(firstValue == secondValue && secondValue == thirdValue){
        printf("TRIANGULO EQUILATERO\n");
    }else if(firstValue == secondValue || secondValue == thirdValue){
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}