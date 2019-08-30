//Henrique Corrêa de Oliveira - 11821bsi251
//Simples código para testar utilização do TAD matriz

#include <stdio.h>
#include <stdlib.h>
#include "Tmat2D.h"

int main()
{
    Tmat2D *matriz1 = NULL;
    Tmat2D *matriz2 = NULL;
    Tmat2D *matriz3 = NULL;
    Tmat2D *matsoma1 = NULL;
    Tmat2D *matsoma2 = NULL;
    Tmat2D *matsomares = NULL;
    int teste;
    double valor;
    double *vetc;

    printf("Inicializando as matrizes...\n");
    matriz1 = criar_mat(3,2);
    matriz2 = criar_mat(2,3);
    matriz3 = criar_mat(3,3);
    matsoma1 = criar_mat(2,2);
    matsoma2 = criar_mat(2,2);
    matsomares = criar_mat(2,2);

    teste = preencher(matriz1,5,10);
    if(teste == -1){
        printf("Erro ao preencher aleatoriamente a matriz");
    }
    printf("Matriz 1: \n");
    print_Mat(matriz1);
    teste = preencher(matriz2,1,5);
    if(teste == -1){
        printf("Erro ao preencher aleatoriamente a matriz");
    }
    printf("\n\nMatriz 2: \n");
    print_Mat(matriz2);

    teste = acessa_elem(matriz1,2,1,&valor);
    printf("\n\nMatriz 1(2,1): %.2lf\n", valor);
    teste = write_element(matriz1,2,1,9.2);
    printf("Depois de escrever o elemento (9.2):\n");
    print_Mat(matriz1);

    multiplica_Mats(matriz1, matriz2, matriz3);
    printf("\nMultiplicação de matrizes = \n\n");
    print_Mat(matriz3);

    printf("\nMatriz 1 x constante 2:\n\n");
    multiplicaEscalar(matriz1, 2, matriz3);
    print_Mat(matriz3);

    somaDiagonal(matriz3, &valor);
    printf("\n\nO traco da Matriz resultante anterior eh: %.2lf\n", valor);

    printf("Matriz da soma 1: \n");
    preencher(matsoma1,1,10);
    print_Mat(matsoma1);
    printf("\nMatriz da soma 2: \n");
    preencher(matsoma2,5,20);
    print_Mat(matsoma2);
    printf("\nMatriz resultado da soma: \n");
    somaMats(matsoma1, matsoma2, matsomares);
    print_Mat(matsomares);

    vetc = somadasColunas(matriz1);

    destruir_mat(matriz1);
    destruir_mat(matriz2);
    destruir_mat(matriz3);
    destruir_mat(matsoma1);
    destruir_mat(matsoma2);
    destruir_mat(matsomares);

    return 0;
}
