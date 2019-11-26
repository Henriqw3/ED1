/**
 *
 * @author henrique
 */

#include <stdio.h>
#include <stdlib.h>
#include "Tad_Encad.h"

int main(void)
{
	Lista *lista;

	int teste;

	Aluno a[4] = {	{2, "Touring", 8.5, 6.8, 10.0},
					{4, "Stallman ", 8.5, 8.5, 6.7},
					{1, "Hawking ", 9.7, 6.7, 8.4},
					{3, "Curie", 7.7, 8.7, 6.4}	};
	printf("Criando lista\n\n");

	lista = criar_lista();

	if (lista == NULL){
		printf("Erro ao criar lista, sem espaço\n");
		return 1;
	}

	for (int i = 0; i < 4; ++i){
		teste = insere_lista_ordenado(lista, a[i]);
		if (teste ==  -1)
		{
			printf("ERRO!!!\n");
			return 1;
		}
	}
	imprime_lista(lista);

	liberar_lista(lista);


	return 0;
}
