/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Idade em Dias;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
 
    int idadeDias;
    scanf ("%d", &idadeDias);
    
    int ano = idadeDias / 365;
    int mes = (idadeDias % 365)/30;
    int dias = (idadeDias % 365)%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
    
    return 0;
}
