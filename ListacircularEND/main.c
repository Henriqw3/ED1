/**
 *
 * @author henrique
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

typedef struct aluno Aluno;

int main(void) {
  
	printf("________________Lista Circular_________________\n\n");
	Clist *li = criar_lista();

	int n = 0;
	printf("Quantos alunos serão inseridos?:");
	scanf("%d",&n);

	Aluno A[n], al_pos, al_mat;
	Aluno a[4] = {	{2, "Touring", 8.5, 6.8, 10.0},
					{4, "Stallman ", 8.5, 8.5, 6.7},
					{1, "Hawking ", 9.7, 6.7, 8.4},
					{3, "Curie", 7.7, 8.7, 6.4}	};


	if(n != 0)
		printf("\n\n>> Digite dados dos alunos para inserção <<\n");
	else{
		printf("\n\n>> Nenhum aluno foi inserido <<\n");
		exit(0);
	}	
	for(int i = 0; i<n; i++){
		printf("\nNumero de matricula do aluno %d:", i+1);
		scanf("%d",&A[i].matricula);
		printf("Nome Aluno:");
		scanf("%s", A[i].nome);
		setbuf(stdin, NULL);
		printf("Nota 1:");
		scanf("%f",&A[i].n1);
		printf("Nota 2:");
		scanf("%f",&A[i].n2);
		printf("Nota 3:");
		scanf("%f",&A[i].n3);
	}
	
	for(int i = 0; i<n; i++){
		insere_inicio(li, A[i]);
	}

	for (int i = 0; i < 4; ++i){
		insere_ordenada(li, a[i]);
	}

	consulta_pos(li, 4, &al_pos);
	printf("\n%s", al_pos.nome);
	
	consulta_mat(li, 4, &al_mat);
	printf("\n%s", al_mat.nome);

	int tam = tamanho(li);
	printf("Size list: %d elements", tam);


	liberar_lista(li);


  return 0;
}
