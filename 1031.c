/*
  @autor: Alane;
  @data: 03/05/2023;
  @nome: Crise de Energia;
*/

#include <stdio.h>

// função remaining, que calcula o valor final de ultimo
int remaining(int qtRegioes, int qtSalto) {
    int ultimo = 0;  // inicializa o valor de ultimo como zero
    for (int i = 1; i < qtRegioes; i++) {  // itera de 1 a n-1
        ultimo = (ultimo + qtSalto) % i;  // calcula o resto da divisão de ultimo + qtSalto por i e atribui a ultimo
    }
    return ultimo;  // retorna o valor final de ultimo
}

// função principal, que executa o programa
int main() {
    int qtRegioes;  // declara a variável qtRegioes como um inteiro
    while (1) {  // laço infinito
        scanf("%d", &qtRegioes);  // lê um valor inteiro do usuário
        if (qtRegioes == 0) {  // se o valor lido for zero, interrompe o laço
            break;
        }
        int y = 1;  // inicializa o valor de y como um
        while (1) {  // laço infinito
            if (remaining(qtRegioes, y) != 11) {  // se o valor retornado por remaining() for diferente de 11
                y++;  // incrementa y e continua o laço
            } else {  // se o valor retornado por remaining() for igual a 11
                break;  // interrompe o laço
            }
        }
        printf("%d\n", y);  // imprime o valor de y na tela, seguido de uma quebra de linha
    }
    return 0;  // indica que o programa foi executado com sucesso
}
