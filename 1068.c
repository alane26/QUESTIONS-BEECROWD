/*
  @autor: Alane;
  @data: 12/06/2023;
  @nome: Balanço de Parênteses I;
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool VerificadorParenteses(char *);

int main()
{
    char expression[1100];

    while (scanf(" %s", expression) != EOF)
    {
        if (VerificadorParenteses(expression))
            printf("correct\n");
        else
            printf("incorrect\n");
    }

    return 0;
}

bool VerificadorParenteses(char *str)
{
    int ContAberturas = 0; // Contador de parênteses de abertura

    if (*str == ')')  // Se a expressão começar com um parêntese de fechamento, já está errado e o programa encerra
        return false;


    while ((*str) && (ContAberturas >= 0)) // Percorre a string até o final ou até que o balanceamento seja desigual ou irregular
    {
        if (*str == '(') // Se encontrar um parêntese de abertura, incrementa o contador
            ContAberturas++;

        if (*str == ')') // Se encontrar um parêntese de fechamento, decrementa o contador
            ContAberturas--;

        str++;
    }

    if (ContAberturas == 0)  // Se o contador 'ContAberturas' for igual a zero, todos parenteses foram fechados
        return true;
    else 
        return false; // Se o contador 'ContAberturas' for maior que zero, os parenteses não foram fechados corretamente
}
