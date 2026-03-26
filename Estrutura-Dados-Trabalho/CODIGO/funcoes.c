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

void BuscaBinaria(int lista[], int tamanho, int busca){
    int inicio, fim, comparacoes, encontrou;
    encontrou = 0;
    inicio = 0;
    fim = tamanho - 1;
    comparacoes = 0;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;
        comparacoes += 1;

        if (lista[meio] == busca)
        {
            encontrou += 1;
            printf("Encontrado na posição: %d\n", meio);
            printf("Comparações realizadas: %d\n", comparacoes);
            break;
        }
        else if (lista[meio] < busca)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    if (encontrou == 0)
    {
        printf("número %d não encontrado\n", busca);
    }
}