# Exercício 10
##Por que a busca binária exige que o vetor esteja ordenado?

## Resposta
Porque ela decide a direção da busca (esquerda ou direita) com base na comparação do valor do meio com o valor buscado.
Se o vetor não estiver ordenado, não é possível garantir que o valor esteja à esquerda ou à direita, o que invalida a lógica do algoritmo.  
Essa condição é essencial para que a complexidade O(log n) seja válida.
