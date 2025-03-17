#include <stdio.h>

int main(){

    int varTemp;
    const int lenVector = 3;
    int vector[lenVector];
    int originalVector[lenVector];

    for(int i = 0; i < lenVector; i++){
        scanf("%d", &vector[i]);
        originalVector[i] = vector[i];
    }


    for(int i = 0; i < lenVector; i++){
        for(int j = 0; j < lenVector-1; j++){
            if(vector[j] > vector[j + 1]){

                varTemp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = varTemp;

            }
        }
    }

    for(int i = 0; i < lenVector; i++){
        printf("%d\n", vector[i]);
    }

    printf("\n");

    for(int i = 0; i < lenVector; i++){
        printf("%d\n", originalVector[i]);
    }

    return 0;
     
}