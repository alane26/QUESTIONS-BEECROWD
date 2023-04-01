/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Cálculo Simples;
*/

#include <stdio.h>
 
int main() {
 
    int idPeca1, numPeca1, idPeca2, numPeca2;
    double valPeca1, valPeca2;
    
        scanf ("%d%d", &idPeca1, &numPeca1);
        scanf ("%lf", &valPeca1);
        
        scanf ("%d%d", &idPeca2, &numPeca2);
        scanf ("%lf", &valPeca2);
        
    double valTotal = ((numPeca1 * valPeca1) + (numPeca2 * valPeca2));
    
        printf("VALOR A PAGAR: R$ %.2lf\n", valTotal);
 
    return 0;
}
