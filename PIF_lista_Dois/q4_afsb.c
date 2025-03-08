#include <stdio.h>

int main(){
    int firstValue, secondValue;
    scanf("%d%d", &firstValue, &secondValue);
    if(firstValue%secondValue == 0 || secondValue%firstValue == 0) printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");
    return 0;
}