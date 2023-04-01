/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Pegadinha de Evergreen;
*/

#include <stdio.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_SOBRENOME 100
#define MAX_NOME_COMPLETO 300

int main()
{
    char nome[MAX_NOME], sobrenome[MAX_SOBRENOME], nomeCompleto[MAX_NOME_COMPLETO];
    unsigned short numCasos, i, j, k;
    unsigned contador, tamanhoSobrenome;

    scanf("%hu", &numCasos);

    while (numCasos--)
    {

        scanf(" %[^\n] %[^\n]", nome, sobrenome);
        
        contador = 0;
        i = 0;
        k = 0;
        j = 0;

        tamanhoSobrenome = strlen(sobrenome);

        // Um laço que continua até que o tamanho da (talvez) menor string acabe;
        // Uma vez que a string do 'nome' sempre é iterada primeiro que a 'sobrenome';
        // A string 'sobrenome' vai acabar antes que a 'nome';
        while (tamanhoSobrenome--)
        {

            while (nome[i])
            {	
                // A string 'nomeCompleto' recebe as letras em 'nome' até que 'contador' seja 2
                // 'contador' sendo == 2 significa que passei duas letras da string fonte para a string destino;
                // O laço para e o laço da string 'sobrenome' itera da mesma forma;
                nomeCompleto[k++] = nome[i++];
                contador++;

                if (contador == 2)
                    break;
            }

            contador = 0;
            while (sobrenome[j])
            {

                nomeCompleto[k++] = sobrenome[j++];
                contador++;

                if (contador == 2)
                    break;
            }

            contador = 0;
        }

        nomeCompleto[k] = '\0';
        printf("%s\n", nomeCompleto);
    }

    return 0;
}
