#include <stdio.h>

int main(){

    int N[1000], t;

    scanf("%d", &t);
    if (t <= 50){
        for(int i = 0; i < 1000; i++){
            N[i] = i % t;
            printf("N[%d] = %d\n", i, N[i]);
        }
    }
    return 0;
}