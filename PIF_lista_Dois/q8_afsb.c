#include <stdio.h>

int main(){

    double salario, salarioFinal;
    scanf("%lf", &salario);

    if(salario <= 2000.00){
      printf("Isento\n");
    }else if(salario <= 3000.00 ){
      salarioFinal = (salario - 2000.00) * 0.08;
      printf("R$ %.2lf\n", salarioFinal);
    }else if(salario <= 4500.00){
      salarioFinal = ((salario - 2000.00 - (salario - 3000.00)) * 0.08) + ((salario - 3000.00) * 0.18);
      printf("R$ %.2lf\n", salarioFinal);
    }else{
      salarioFinal = ((salario - 2000.00 - (salario - 3000.00)) * 0.08) + ((salario - 3000.00 - (salario - 4500.00)) * 0.18) + ((salario - 4500.00) * 0.28);
      printf("R$ %.2lf\n", salarioFinal);
    }
     
    return 0;
}