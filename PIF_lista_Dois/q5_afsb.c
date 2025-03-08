#include <stdio.h>

int main(){
    double firstValue, secondValue, thirdValue, A, B, C;
    
    scanf("%lf%lf%lf", &firstValue, &secondValue, &thirdValue);

    if(firstValue > secondValue && firstValue > thirdValue){
        A = firstValue;
    }else if( secondValue > firstValue && secondValue > thirdValue){
        A = secondValue;
    }else{
        A = thirdValue;
    }

    return 0;
}