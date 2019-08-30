#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamic.h"

int main(void) {

	printf("____________Dinamic QUEUE____________\n>>OPEN\n\n");
	Queue *qu = queue_create();

	int n = 0;
	printf("Quantos alunos serão inseridos?:");
	scanf("%d",&n);

	struct aluno A[n], al;

	if(n != 0)
		printf("\n\n>> Digite dados dos alunos para inserção <<\n");
	
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
		queue_push(qu, A[i]);
	}

	int t = queue_size(qu);
	printf("\n_______Tamanho da fila_________\n>> Size %d\n",t);

  for(int i=0; i < n; i++){
    queue_front(qu,&al);//Passa o endereço da estrutura q recebera os Dados solicitados, que sempre sera o primeiro elemento.
		queue_pop(qu);
    printf("\n%s", al.nome);
  }

	int tam = queue_size(qu);
	printf("\n_______Tamanho da fila_________\n>> Size %d\n",tam);

	int dim = queue_pop(qu);

  return 0;
}