#include <stdio.h>

int main(){
    int a = 0, b = 1, varTemp, value;

    scanf("%d", &value);

    for (int i = 0; i < value; i++){
        printf("%d", a);
        if (i < value-1){
            printf(" ");
        }
        
        varTemp = a + b;
        a = b;
        b = varTemp;
    }
    
    return 0;
}