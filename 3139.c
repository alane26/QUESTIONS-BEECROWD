/*
    Autor: Alane Damasceno Moreno;
    Data: 18/06/2023;
    Nome: Buscando Novos Seguidores;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{

    long long seguidoresAtuais, metaSeguidores;
    long long subtracaoDiaria[30] = {0};

    // Entrada dos valores iniciais de seguidoresAtuais e metaSeguidores
    scanf("%lld %lld", &seguidoresAtuais, &metaSeguidores);

    long long somaSubtracoes = 0;
    for (size_t i = 0; i < 30; ++i)
        // Entrada das subtrações diárias
        scanf("%lld", &subtracaoDiaria[i]), somaSubtracoes += subtracaoDiaria[i];

    long long mediaDiaria = 0;
    long long dias = 0;

    // Loop para aumentar o número de seguidores até atingir a meta
    while (seguidoresAtuais < metaSeguidores)
    {

        for (size_t i = 0; i < 30 && seguidoresAtuais < metaSeguidores; ++i)
        {
            // Cálculo da média diária das subtrações
            mediaDiaria = ceil(somaSubtracoes / 30.0);
            // Incremento dos seguidores atuais com a média diária
            seguidoresAtuais += mediaDiaria;
            // Atualização da soma das subtrações com a diferença entre a média diária e a subtração diária anterior
            somaSubtracoes = somaSubtracoes + (mediaDiaria - subtracaoDiaria[i]);
            // Atualização da subtração diária para a nova média diária
            subtracaoDiaria[i] = mediaDiaria;
            // Incremento do número de dias
            ++dias;
        }
    }

    // Impressão do número de dias necessários para atingir a meta
    printf("%lld\n", dias);

    return 0;
}
