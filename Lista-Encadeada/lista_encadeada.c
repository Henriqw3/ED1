/**
 *
 * @author henrique
 */

#include <stdio.h>
#include "lista_encadeada.h"

#define SUCCESS 0
#define OUT_OF_MEMORY -1
#define ELEM_NOT_FOUN

struct lista{
 Lista_no *head;//Contém o primeiro dado + um ponteiro para o prox(NÓ)
};//Lista

struct lista_no{
 struct aluno dado;//matric_nome_ 3 ns
 Lista_no *prox;//recursividade de chamada 
};//Lista_no

typedef struct lista_no Lista_no;

//***********************FUNÇÕES**************************\\

Lista* cria_lista(){//retorna um ponteiro

	Lista *li;

	li = malloc(1*sizeof(struct lista_no));//Reserva na memória o first Nó
	//Lista*li { [início] -> NULL 
	if(li != NULL)
		*li = NULL;
	return li;

}
void libera_lista(Lista* li){
	free(li);
}

int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
	if(li -> head == NULL || pos < 0 || pos > li)

}
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){

}
int insere_lista_final(Lista* li, struct aluno al){

}
int insere_lista_inicio(Lista* li, struct aluno al){

}
int insere_lista_pos(Lista* li, int pos, struct aluno al){

}
int insere_lista_ordenada(Lista* li, struct aluno al){

}
int remove_lista(Lista* li, int mat){

}
int remove_lista_inicio(Lista* li){

}
int remove_lista_final(Lista* li){

}
int tamanho_lista(Lista* li){

}
int lista_cheia(Lista* li){

}
int lista_vazia(Lista* li){

}
void imprime_lista(Lista* li){
	if(li == NULL)
		return -1;
	
	Lista_no *p;

	p = li -> head;
	
	//primeira forma
	printf("%s", p->dado.nome)
	
}
