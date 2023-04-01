/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: O Maior;
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c;
    
    scanf ("%d%d%d", &a, &b, &c);
    
    int maiorab = (a+b+abs(a-b))/2;
    
    if(maiorab > c){
        printf("%d eh o maior\n", maiorab);
    }
    else{
        printf("%d eh o maior\n", c);   
    }
    
    return 0;
}
