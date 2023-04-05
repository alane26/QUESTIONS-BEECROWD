/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Frequência de Letras;
*/

  #include <stdio.h>
  #include <ctype.h>
  #include <string.h>

  int main() {
      int n;
      scanf("%d", &n);
      getchar(); // para consumir o \n após a leitura de n

      while(n--) {
          char str[201];
          fgets(str, 201, stdin); // ler a linha de texto
          int freq[26] = {0}; // vetor para contar as frequências

          // percorrer a linha de texto e contar as frequências
          for(int i = 0; str[i] != '\0'; i++) {
              if(isalpha(str[i])) { // verificar se o caractere é uma letra
                  freq[tolower(str[i]) - 'a']++; // contar a frequência da letra (ignorando o case)
              }
          }

          int max_freq = 0;
          for(int i = 0; i < 26; i++) {
              if(freq[i] > max_freq) {
                  max_freq = freq[i];
              }
          }

          // imprimir as letras de maior frequência (em ordem alfabética, se houver empate)
          for(int i = 0; i < 26; i++) {
              if(freq[i] == max_freq) {
                  printf("%c", 'a' + i);
              }
          }
          printf("\n");
      }

      return 0;
  }
