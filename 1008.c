/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Salário;
*/

#include <stdio.h>
 
int main() {
 
    int idFuncionario, tempTrabalhado;
    double valHora;
    
        scanf ("%d%d", &idFuncionario, &tempTrabalhado);
        scanf ("%lf", &valHora);
    
    double salario = tempTrabalhado * valHora;
    
        printf("NUMBER = %d\nSALARY = U$ %.2lf\n", idFuncionario, salario);
 
    return 0;
}
