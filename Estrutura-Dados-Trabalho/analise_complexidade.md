# Análise de Complexidade

## Descrição

Este documento apresenta a análise de complexidade dos algoritmos de busca implementados no programa: busca linear e busca binária.

O programa utiliza um vetor de números inteiros e permite ao usuário procurar um valor, contando o número de comparações realizadas em cada algoritmo.


## Busca Linear

A função `BuscaLinear` percorre o vetor do início até o fim utilizando um laço `for`.

A cada iteração, é feita uma comparação entre o elemento do vetor e o valor procurado:

```c
if(lista[i] == busca)

O número de comparações é controlado pela variável comparacoes, que é incrementada a cada passo do loop.

Complexidade

Pior caso: O(n) → quando o elemento está no final ou não existe

Melhor caso: O(1) → quando o elemento está na primeira posição

## Busca Binária

A função BuscaBinaria utiliza um laço while para dividir o vetor ao meio a cada iteração.

A cada passo, é feita uma comparação com o elemento central:

if(lista[meio] == busca)

Dependendo do resultado, o algoritmo descarta metade do vetor:

inicio = meio + 1;
ou
fim = meio - 1;

O número de comparações também é contado pela variável comparacoes.

Complexidade

Pior caso: O(log n)

Melhor caso: O(1)

Comparação entre os algoritmos

A partir dos resultados do programa:

A busca linear realiza mais comparações, pois percorre o vetor elemento por elemento

A busca binária realiza menos comparações, pois reduz o tamanho do problema pela metade a cada passo

Assim, para vetores maiores, a busca binária apresenta melhor desempenho.
