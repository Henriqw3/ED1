#include <stdlib.h>
#include "fila_dinamic.h"
	
struct queue{// Nó descritor |inicio|Final|
	struct elem_queue *begin;//Elem *begin
	struct elem_queue *end;//Elem *End
};// Nó descritor 

struct elem_queue{//representa um elemento da fila |dado|próx|

	struct aluno data;//dados
	struct elem_queue *next;//Elem *next
};//Elem

Queue *queue_create(){
  Queue *qu;
  qu = malloc(sizeof(Queue));//Aloca memória para o nó descritor 
  if ( qu != NULL){
    qu->end = NULL;
		qu->begin = NULL;
  }
  return qu;
}//A mesma ideia da fila dinâmica 


void queue_free(Queue *qu){
	if(qu != NULL){
		Elem* node;
	while(qu->begin != NULL){
		node = qu -> begin;
		qu->begin = qu->begin->next;
		free(node);
	}
  free(qu);
}
}

//Só é possível acessar o primeiro elemento da fila
int queue_front(Queue *qu, struct aluno *al){
	if(qu == NULL)//Testa se Fila existente
		return INVALID_NULL_POINTER;
	if(qu->begin == NULL)//Testa se Fila vazia
		return INVALID_NULL_POINTER;
	else
		*al = qu->begin->data;//Estrutura de consulta recebe os dados do primeiro elemento;
	return SUCCESS;
	}



int queue_push(Queue *qu, struct aluno al){
	if(qu == NULL){
		return INVALID_NULL_POINTER;
	}
	Elem *node = malloc(sizeof(Elem));
	if(node == NULL){// 
		return INVALID_NULL_POINTER;
	}
	node->data = al;
	node->next = NULL;// Recebe null pois a inserção na fila sempre sera no final ou seja o último sempre aponta para NULL em uma uma nova inserção
	if(qu->end == NULL){//Ou seja primeiro caso fila vazia
		qu->begin = node;//Novo nó é inserido no inicio
	}else{
		qu->end->next = node;//O próximo do elemento que era o final aponta para o novo nó
	}
	 qu->end = node;//Final aponta para o Nó representando ele agora como o final da lista
  return SUCCESS;
}

//remoção sempre é feita no inicio da fila
int queue_pop(Queue *qu){
  if (qu==NULL){//Testa se a fila existe
    return INVALID_NULL_POINTER;
  }
	if(qu->begin == NULL ){//Caso a fila for vazia
		return INVALID_NULL_POINTER;//retorna erro pois não se tira elementos de fila vazia
	}
	else{
		Elem *node = qu->begin;//Novo nó é criado e recebe o inicio da fila
		qu->begin = qu->begin->next;//O inicio passa a apontar para o próximo elemento

	}
  return SUCCESS;
}

int queue_size(Queue *qu){
  if (qu==NULL){
    return INVALID_NULL_POINTER;
  }
	int i = 0;
	Elem* node = qu -> begin;//Elemento auxiliar para percorrer a fila
	while(node != NULL){
		i++;//Contador aumenta a cada novo elemento existente
		node = node -> next;//Nó aux recebe o próximo até encontrar o final que vai estar apostando para NULL
	}
  return i;
}


int queue_empty(Queue *qu){
  if (qu==NULL){
    return 1;//é vazia
  }else{
			if(qu->begin == NULL){
				return 1;//é vazia
			}
	}
  return 0;//Cheia
}

int queue_full(Queue *qu){
//Fila Dinamica só será cheia se a memória do computador acabar
//Ou seja, dificilmente sera cheia 
  return 0;
}


