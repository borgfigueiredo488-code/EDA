#include <stdio.h>
#include "funcoes.h"

void BuscaLinear(int lista[], int tamanho, int busca)
{
    int comparacoes, encontrou = 0;
    comparacoes = 0;

    for (int i = 0; i <= (tamanho - 1); i++)
    {
        comparacoes += 1;
        if (lista[i] == busca)
        {
            encontrou = 1;
            printf("Encontrado na posição: %d\n", i);
            printf("Comparações realizadas: %d\n", comparacoes);
            break;
        }
    }

    if (encontrou == 0)
    {
        printf("número %d não encontrado\n", busca);
    }
}