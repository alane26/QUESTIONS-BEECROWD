/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Área;
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159
 
int main() {
 
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    
    double triangulo = (a*c)/2;
    double circulo = PI * pow(c, 2);
    double trapezio = ((a+b)*c)/2;
    double quadrado = pow(b,2);
    double retangulo = a * b;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    
    return 0;
}
