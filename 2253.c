/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Validador de Senhas;
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_PASSWORD 1000


    /*
    As funções isupper e islower são funções da
    biblioteca ctype.h da linguagem C que retornam
    um valor inteiro diferente de zero se o caractere
    passado como argumento for uma letra maiúscula ou
    minúscula, respectivamente. Caso contrário, essas
    funções retornam zero.
    */


    void main (void)
    {
    
    	unsigned short num_special_chars = 0, len, num_lower = 0, num_upper = 0, size;
    	unsigned short i, test_cases = 10;
        char password[MAX_PASSWORD];
        
    
    while (scanf(" %[^\n]", password) != EOF) {
        len = strlen(password);
        size = true;
    
        if (6 > len || len > 32)
            size = false;
        
        for (i = 0; i < len; i++) {
            if (isupper(password[i]) != 0)
                num_upper++;
            else if (islower(password[i]) != 0)
                num_lower++;
            else if ((password[i] >= 32 && password[i] <= '/') || password[i] > 58 && password[i] > 40)
                num_special_chars++;
        }
    
        if (size == true && num_upper != 0 && num_lower != 0 && num_special_chars == 0)
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    
            num_upper = 0;
            num_lower = 0;
            num_special_chars = 0;
            memset(password, 0, sizeof(password));
        }
    }
