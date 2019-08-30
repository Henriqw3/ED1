#include <stdlib.h>
#include "lista_circular.h"


typedef struct circlist_node Clnode;

struct circlist{
	Clnode *end;//Ponteiro para o fim da lista
//Clnode *...;  Poderia ser utilizado um ponteiro para o início da lista também
	int size;
};//Clist

//Poderia fazer sem nó descritor se usasse apenas um elemento no nó como por exemplo o end
//Mas como vou utilizar a quantidade farei um nó descritor

//Tipo de dado da lista circular
struct circlist_node{//[dados|prox()]
	struct aluno dados;
	Clnode *prox;
};//Clnode

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Funções de Criação de Lista
Clist* criar_lista(){

	Clist *li = malloc(sizeof(struct circlist));
	if(li == NULL)return NULL;
	else{//Se alocação deu certo
		li->end = NULL;//Conteúdo dela começa recebendo NULL para informar que é vazia
		li->size = 0;
	}
	return li;
}

void liberar_lista(Clist* li){

	if(li != NULL){
		Clnode* aux, *no = li->end;
		while(li->end != no->prox){
				aux =  no;
				no = no->prox;
				free(aux);
		}
		free(no);
		free(li);
	}
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Funções de informação e Consulta 

int tamanho(Clist* li){

	if(li == NULL)
		return INVALID_NULL_POINTER;
	else
	if(li->end == NULL)
		return INVALID_NULL_POINTER;
	
	else
		return li->size;
}

int consulta_pos(Clist *li, int pos, struct aluno *al){
	if(li == NULL || li->end == NULL || pos<=0)
		return INVALID_NULL_POINTER;
	Clnode *node = li->end;
	int quant = 0;
	while(node->prox != li->end && quant<pos){
		node = node->prox;
		quant++;
	}//Varre a lista enquanto o nó é diferente do final e ao mesmo tempo se o contador é < que pos
	if(quant != pos)return OUT_OF_RANGE;//Se a contador execedeu ou foi diferente da pos requerida retorna erro
	else{
		*al = node->dados;
		return SUCCESS;
	}
	return SUCCESS;
}

int consulta_mat(Clist *li, int mat, struct aluno *al){
	if(li == NULL || li->end == NULL)return INVALID_NULL_POINTER;

	Clnode *node = li->end;
	while(node->prox != li->end && node->dados.matricula != mat){
		node = node->prox;
	}
	if(node->dados.matricula != mat)return ELEM_NOT_FOUND;
	else{
		*al = node->dados;
	}
	return SUCCESS;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Funções de inserção na lista

int insere_inicio(Clist *li, struct aluno al){
	if(li == NULL)return 4;

	Clnode *no = malloc(sizeof(struct circlist));
	if(no == NULL)return 3;

	no->dados = al;

	if(li->end == NULL){//lista vazia
		li->end->prox = no;//insere inicio
		no->prox = no;//no recebe ele mesmo
	}
	else{ 
		no->prox = li->end->prox;
		li->end->prox = no;
	}
	li->size += 1;
	return 0;
}

int insere_final(Clist *li, struct aluno al){
	
	if(li == NULL)return INVALID_NULL_POINTER;

	Clnode *no = malloc(sizeof(Clist));//NewNode
	if(no == NULL)return INVALID_NULL_POINTER;

	no->dados = al;

	if(li->end == NULL){//lista vazia
		li->end->prox = no;//insere inicio
		no->prox = no;//no recebe ele mesmo
	}
	else{//Insere final
		no->prox = li->end->prox;//Próximo do no recebe próximo do final(início)
		li->end->prox = no;//o próximo do final fica sendo o nó
		li->end = no;//Final passa a ser o próprio nó
	}
	li->size += 1;
	return 0;
}

int insere_ordenada(Clist* li, struct aluno al){//Ordenada pela matricula

	if(li == NULL)return INVALID_NULL_POINTER;//Se a lista não existe retorna erro

	Clnode *no = malloc(sizeof(Clist));//create NewNode
	if(no == NULL)return INVALID_NULL_POINTER;//Verifica criação do no

	no->dados = al;//Dados recebem aluno passado pela main

	if(li->end == NULL){//lista vazia
		li->end->prox = no;//insere inicio
		no->prox = no;//no recebe ele mesmo
	}
	else{//se não for vazia
//Testa se a matrícula do primeiro é maior que a que está sendo inserida
		if(li->end->prox->dados.matricula > al.matricula){//Caso sim cria aux
			no->prox = li->end->prox;
			li->end->prox = no;
			//Insere no início como primeiro caso coincidente
			return SUCCESS;
		}
		Clnode *ant = li->end->prox;
		Clnode *atual = ant->prox;

		while(atual != li->end->prox && atual->dados.matricula < al.matricula){
			ant = atual;
			atual = atual->prox;
		}
		ant->prox = no;	
		no->prox = atual;
	}
	li->size += 1;
	return SUCCESS;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Funções de remoção da lista

int remove_inicio(Clist *li){

	if(li == NULL)return INVALID_NULL_POINTER;//Se lista foi criada
	if(li->end == NULL)return OUT_OF_RANGE;//lista vazia
	if(li->end->prox == li->end){//existir apenas um elemento
		free(li->end);
		li->end = NULL;
		return SUCCESS;
	}//liberou o único elemento da lista e apontou ela para NULL sinalizando que está vazia
	else{//Caso houver mais de um elemento é criado um nó auxiliar

		Clnode *no = li->end->prox;//Recebe o primeiro elemento da fila 
		li->end->prox = no->prox;//Recebe o proximo do inicio atual
		free(no);//libera o no que era atual, e agora o proximo do antigo inicial passa a ser o primeiro
	}
	li->size -= 1;
	return SUCCESS;
}

int remove_final(Clist *li){

	if(li == NULL)return INVALID_NULL_POINTER;//Se lista foi criada
	if(li->end == NULL)return OUT_OF_RANGE;//lista vazia
	if(li->end->prox == li->end){
		free(li->end);
		li->end = NULL;
		return SUCCESS;
	}
	else{
		Clnode *last, *aux_no = li->end->prox;
		while(aux_no!=li->end){//para guardar o penúltimo é necessário percorrer
			last = aux_no;//Guardou o penúltimo
			aux_no = aux_no->prox;//Parou no último(end)
		}
		last->prox = li->end->prox;//O próximo do penúltimo recebe o próximo
		li->end = last;
		free(aux_no);
	}
	li->size -= 1;
	return SUCCESS;
}

int remove_ordenada(Clist *li,int mat){
	if(li == NULL)return INVALID_NULL_POINTER;//Se lista foi criada
	if(li->end == NULL)return OUT_OF_RANGE;//lista vazia
	if(li->end->dados.matricula == mat){
		free(li->end);
		li->end = NULL;
		return SUCCESS;
	}
	Clnode *aux = li->end;
	Clnode *last;
	while(aux!=li->end && aux->dados.matricula != mat){
			last = aux;
			aux = aux->prox;
	}
	if(aux == li->end)return ELEM_NOT_FOUND;//não encontrado
	last->prox = aux->prox;
	free(aux);
	li->size -= 1;
	return SUCCESS;
	}
