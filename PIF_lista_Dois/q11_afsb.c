#include <stdio.h>
#include <math.h>
int main(){
    double S = 0.0;
    int numerador;
    double denominador;

    for (int n = 1; n <= 20; n++){
        numerador = (2 * n - 1);
        denominador= pow(2, n-1);
        S += (double)numerador/ denominador;
    }

    printf("%.2lf\n", S);
    
     
    return 0;
}