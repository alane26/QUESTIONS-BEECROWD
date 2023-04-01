/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Frase Completa;
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_FRASE 1100

 /*<stdbool.h> é uma biblioteca padrão da linguagem C que
 permite o uso de variáveis booleanas na programação.
 Ela define o tipo bool, que pode ter apenas dois
 valores possíveis: true (verdadeiro) ou false (falso).*/

void main ()
{

	char frase[MAX_FRASE];
	unsigned short num_casos, num_letras = 0, i, j, tam_alfabeto, tam_frase;
	bool ha_letra = false;

	scanf("%hu", &num_casos);

    while (num_casos--)
    {
        char alfabeto[30] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0' };
        scanf(" %[^\n]", frase);
    
        tam_alfabeto = strlen(alfabeto);
        tam_frase = strlen(frase);
    
        for (i = 0; i < tam_frase; i++)
        {
            for (j = 0; j < tam_alfabeto; j++)
            {
                if (frase[i] == alfabeto[j])
                {
                    ha_letra = true;
                    alfabeto[j] = '1';
                    break;
                }
            }
    
            if (ha_letra)
                num_letras++;
    
            ha_letra = false;
        }
    
        if (num_letras == 26)
            printf("frase completa\n");
        else if (num_letras > 12 && num_letras < 26)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    
        num_letras = 0;
        memset(frase, 0, sizeof(frase));
        
        /*O memset é uma função da biblioteca padrão da
        linguagem C que permite definir um valor específico
        para uma área de memória. Ela recebe como argumentos
        um ponteiro para a área de memória a ser preenchida,
        um valor a ser usado para preencher a área e o número
        de bytes a serem preenchidos.*/
        
    }
}
