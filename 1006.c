/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Média 2;
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c;
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);
        
    double media = (a * 2 + b * 3 + c * 5) / 10.0;
    
        printf("MEDIA = %.1lf\n", media);
 
    return 0;
}
