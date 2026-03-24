#include <stdio.h>
#include "funcoes.h"

int main(){
    int numero, escolha;
    int vetor[21] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 17, 18, 19, 20};

    while(1){
        printf("\n====== Menu ======");
        printf("\nComo você quer procurar o número?\n");
        printf("[1]-Busca linear\n");
        printf("[2]-Busca binária\n");
        printf("[3]-Comparar os dois algoritmos\n");
        printf("[0]-Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        if(escolha == 0){
            break;
        }
        
        switch(escolha){
            case 1:
            printf("\nDigite o número que deseja procurar: ");
            scanf("%d", &numero);
            BuscaLinear(vetor, 21, numero);
            break;

            case 2:
            printf("\nDigite o número que deseja procurar: ");
            scanf("%d", &numero);
            BuscaBinaria(vetor, 21, numero);
            break;

            case 3:
            printf("\nDigite o número que deseja procurar: ");
            scanf("%d", &numero);
            printf("\n === Busca Linear ===\n");
            BuscaLinear(vetor, 21, numero);
            printf("\n === Busca Binaria ===\n");
            BuscaBinaria(vetor, 21, numero);
            break;
            
            default:
            printf("opção invalida\n");
        
        }
    }

    return 0;
}