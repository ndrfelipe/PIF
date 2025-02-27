#include <stdio.h>

int main()
{
    int A, B, X;
    scanf("%d", &A);
    scanf("%d", &B);
    X = A + B;
    printf("X = %d\n", X);
    return 0;
}

#include <stdio.h>
 
int main() {
 
    double R, A, n;
    n = 3.14159;
    
    scanf("%lf", &R);
    A = n * R * R;
    
    printf("A=%.4lf\n", A);
 
    return 0;
}