/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Média 1;
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b;
    
        scanf("%lf", &a);
        scanf("%lf", &b);
        
    double media = (a * 3.5 + b * 7.5) / 11.0;
    
        printf("MEDIA = %.5lf\n", media);
 
    return 0;
}
