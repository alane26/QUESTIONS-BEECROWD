/*
  @autor: Alane;
  @data: 18/06/2023;
  @nome: Fila do Supermercado;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, tamanhoA, tamanhoB;

    // Ler o tamanho do array a[]
    scanf("%d", &tamanhoA);
    int a[tamanhoA];

    // Ler o tamanho do array b[]
    scanf("%d", &tamanhoB);
    int b[tamanhoB];

    // Ler os elementos do array a[]
    for (i = 0; i < tamanhoA; i++)
        scanf("%d", &a[i]);

    // Ler os elementos do array b[]
    for (i = 0; i < tamanhoB; i++)
        scanf("%d", &b[i]);

    int temp[tamanhoA];
    int indice = 0;

    // Calcular o produto dos elementos correspondentes de a[] e b[] e armazenar em temp[]
    while (indice < tamanhoB)
    {
        if (indice < tamanhoA)
        {
            temp[indice] = b[indice] * a[indice];
            indice++;
        }
        else
        {
            int menorValor = temp[0];
            int indiceMenor = 0;

            // Encontrar o índice do menor valor em temp[]
            for (i = 0; i < tamanhoA; i++)
            {
                if (menorValor > temp[i])
                {
                    menorValor = temp[i];
                    indiceMenor = i;
                }
            }

            // Atualizar o valor em temp[] com o novo produto
            temp[indiceMenor] += b[indice] * a[indiceMenor];

            indiceMenor = 0;
            indice++;
        }
    }

    int maiorValor = temp[0];

    // Encontrar o maior valor em temp[]
    for (i = 0; i < tamanhoA; i++)
    {
        if (maiorValor < temp[i])
            maiorValor = temp[i];
    }

    // Imprimir o maior valor encontrado em temp[]
    printf("%d\n", maiorValor);

    return 0;
}
