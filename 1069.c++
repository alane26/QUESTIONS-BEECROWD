/*
  @autor: Alane;
  @data: 08/06/2023;
  @nome: Diamantes e Areia;
*/

#include <stdio.h>
#include <stack>

int main() {
    int n;
    scanf("%d", &n);  // Lê a quantidade de casos de teste
    
    while (n--) {
        char input[1001];
        scanf("%s", input);  // Lê a sequência de caracteres
        
        int diamonds = 0;  // Variável para contar os diamantes encontrados
        std::stack<char> stack;  // Pilha para armazenar os caracteres '<'
        
        for (int i = 0; input[i] != '\0'; i++) {
            if (input[i] == '<') {
                stack.push('<');  // Empilha o caractere '<'
            } else if (input[i] == '>' && !stack.empty()) {
                stack.pop();  // Remove o diamante encontrado
                diamonds++;  // Incrementa o contador de diamantes
            }
        }
        
        printf("%d\n", diamonds);  // Imprime a quantidade de diamantes encontrados
    }
    
    return 0;
}
