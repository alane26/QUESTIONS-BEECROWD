/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Conversão de Tempo;
*/

#include <stdio.h>
 
int main() {
 
    int a, h, m, s;
    
    scanf("%i", &a);
    
    h = a / 3600;
    a -= h * 3600;
    m = a / 60;
    a -= m * 60;
    
    printf("%i:%i:%i\n", h, m, a);
 
    return 0;
}
