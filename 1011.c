/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Esfera;
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159
 
int main() {
 
    double raio;
    scanf("%lf", &raio);
    
    double volume = (4/3.0) * PI * pow(raio,3);
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}
