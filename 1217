/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Getline Two - Frutas;
*/

#include <stdio.h>
#define MAX_FRUTAS 10000

int main(){
    int num_dias, total_kg_frutas, num_frutas, i, j;
    float preco_total, preco_dia;
    char frutas[MAX_FRUTAS];
    
    scanf("%d", &num_dias);
    
    preco_total = 0.0;
    total_kg_frutas = 0;
    
    for (i = 0; i < num_dias; i++){
        num_frutas = 0;
        
        scanf("%f%*c", &preco_dia);
        preco_total += preco_dia;
        
        
        /*Lê uma string que contém todos os caracteres
        digitados pelo usuário até a pressão da tecla
        Enter e armazena na variável frutas*/
        
        scanf("%[^\n]%*c", &frutas);
        for (j = 0; frutas[j] != '\0'; j++){
            if (frutas[j] == ' '){
                num_frutas++;
            }
        }
        total_kg_frutas += num_frutas + 1;
        
        printf("day %d: %d kg\n", i + 1, num_frutas + 1);
     }
     
     printf("%.2f kg by day\n", (float) total_kg_frutas / num_dias);
     printf("R$ %.2f by day\n", preco_total / num_dias);
     
     return 0;
}
