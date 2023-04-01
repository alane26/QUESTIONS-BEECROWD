/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Entrada e Saída de String;
*/

#include <stdio.h>

int main()
{
    int i;
    char primeira_palavra[101];
    char segunda_palavra[101];
    char terceira_palavra[101];

  /*
    setbuf() é uma função da biblioteca padrão em C
    que é usada para definir o buffer de entrada/saída
    (buffering) para um fluxo de entrada/saída (stream).
  */
  
    setbuf(stdin, NULL);
    scanf(" %[^\n]", primeira_palavra);
    setbuf(stdin, NULL);
    scanf(" %[^\n]", segunda_palavra);
    setbuf(stdin, NULL);
    scanf(" %[^\n]", terceira_palavra);
    
    printf("%s%s%s\n", primeira_palavra, segunda_palavra, terceira_palavra);
    printf("%s%s%s\n", segunda_palavra, terceira_palavra, primeira_palavra);
    printf("%s%s%s\n", terceira_palavra, primeira_palavra, segunda_palavra);
    
    i = 0;
    
    while(primeira_palavra[i] != '\0' && i < 10)
    {
        printf("%c",primeira_palavra[i]);
        i++;
    }
    
    i = 0;
    
    while(segunda_palavra[i] != '\0' && i < 10)
    {
        printf("%c",segunda_palavra[i]);
        i++;
    }
    
    i = 0;
    
    while(terceira_palavra[i] != '\0' && i < 10)
    {
        printf("%c",terceira_palavra[i]);
        i++;
    }
    
    printf("\n");
    
    return 0;
}
