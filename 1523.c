/*
  @autor: Alane;
  @data: 13/06/2023;
  @nome: Estacionamento Linear;
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int i, n, k, chegada, partida, max;
    bool erro;
    int estacionamento[100000];
    int topo;

    while (scanf("%d %d", &n, &k) == 2) {
        if (n == 0 && k == 0)
            break;

        int chegada_ordenada[100000] = {0};
        int partida_ordenada[100000] = {0};
        topo = 0;
        max = 0;
        erro = false;

        for (i = 1; i <= n; i++) {
            scanf("%d %d", &chegada, &partida);

            if (i == 0 || partida > max)
                max = partida;

            chegada_ordenada[chegada] = chegada;
            partida_ordenada[partida] = chegada;
        }

        for (i = 1; i <= max; i++) {
            if (partida_ordenada[i] != 0) {
                if (topo > 0 && estacionamento[topo - 1] == partida_ordenada[i])
                    topo--;
                else {
                    erro = true;
                    break;
                }
            }

            if (chegada_ordenada[i] != 0) {
                if (topo < k)
                    estacionamento[topo++] = chegada_ordenada[i];
                else {
                    erro = true;
                    break;
                }
            }
        }

        if (erro)
            printf("Nao\n");
        else
            printf("Sim\n");
    }

    return 0;
}
