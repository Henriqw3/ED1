/**
 *
 * @author henrique
 */

#include "TDLinkedList.h"

typedef struct d1node DLNode;

struct DLinkedList{//LISTA
	DLNode *begin;//começo elemento :ponteiro para o PRIMEIRO nó da lista (HEAD)
	DLNode *end;//final :ponteiro para o ÚLTIMO nó da lista(TAIL)
	int size; // var. tamanho : 4byts
}//List : 12byts

struct dlnode{//NÓ DA LISTA
	struct aluno data;//Dados alunos(Informação) : 46byts
	DLNode *next;//ponteiro para o próximo(==prev do outro) nó : 4byts
	DLNode *prev;//ponteiro para o nó anterior(==next do outro) nó :4byts
}//DLNode : 54 byts
//>>> NÓ DA LISTA
// *Primeiro -> 1°NÓ}[v ANTERIO|INFORMAÇÃO|PRÓXIMO >]...[< Anterior|Info.| Próximo v] <-Último*


List* list_creat(){

	List *li;//declara um ponteiro
	li = malloc(sizeof(List));//aloca o ponteiro na memória com o tamanho da lista q é 12byts

	if(li != NULL){//se o ponteiro da lista tiver sido alocado com sucesso
		li -> begin = NULL;//o ponteiro do começo dos elementos da lista recebem NULL
		li -> end = NULL;//O ponteiro do final dos elementos recebe NULL
		li -> size = 0;// o tamanho recebe 0
	}
	return li;//retorna a lista criada
}

int list_push_front(List *li, struct aluno al){//função de insere inicio

	if(li == NULL) // se a lista for vazia retorna erro
		return -1;
	else {
		DLNode *node;// novo nó

		node = malloc(sizeof(DLNode));//aloca o novo nó na memória com o tamanho da estrutura do nó
		node -> data = al;//passa os dados obtidos na main para os dados do novo nó
		node -> prev = NULL;//Aponta o ponteiro do anterior do nó para NULL
		node -> next = li -> begin;//Aponta o ponteiro do próximo para o anterior que era o begin
	}

	if (li->begin == NULL){
// *(begin)     *(end)
// *->[v prev[data]next v]<-*
// *->[v prev[data]next >][< prev[data]next v]<-*
// *b -> [nullv prev[data]next >][< prev[data]next >][< prev[data]next vnull] <- *e
            li->begin = node;//Aponta o ponteiro de inicio da lista para o nó inserido
            li->end = node;//Aponta o ponteiro de Fim da lsita para o nó inserido
            li->size = li->size + 1;//Aumenta o tamanho da lista
       } else {//Se o begin já possui um endereço de um nó inserido
           li->begin->prev = node;//Aponta o anterior do nó já existente para  o novo nó
           li->begin = node;//Aponta begin para o novo nó
           li->size = li->size + 1;//Aumenta o tamanho da lista
       }
       return 0;
    }
};

int list_push_back(List *li, struct aluno al){//Insere final
    if (li == NULL){//Lista vazia retorna erro
        return INVALID_NULL_POINTER;
    } else {
       DLNode *node;//Novo nó declarado
       node = malloc(sizeof(DLNode));//Novo nó alocado
       if (node == NULL){//Alocação falhada retorna erro
          return -1;
       } else {
        node->data = al;//Novo nó recebe os dados do aluno
        node->next = NULL;//o ponteiro do proximo aponta para null pois é final da lista
        node->prev = li->	end;//o ponteiro do anterior aponta para o final da lista
        if (li->begin == NULL) {//Se o começo da lista apontar para null
          li->begin = node;//Apenas aponta o começo da lista para o Novo Nó
          li->end = node;// final também
        } else {
          li->end->next = node;//Agora que end possui o nó inserido para o final aponte o *próximo do nó p/
          li->end = node;
        }
        li->size = li->size + 1;
        return 0;
       }
    }
}


int list_pop_front(List *li){
    if (li == NULL){
        return INVALID_NULL_POINTER;
    } else {
        if (li->size==0){
            return -2;
        } else {
          if (li->size == 1){
            free(li->begin);
            li->begin = NULL;
            li->end = NULL;
            li->size = li->size -1;
          } else {
              DLNode *p;
              p = li->begin;
              li->begin = p->next;
              free(p);
              li->begin->prev = NULL;
              li->size = li->size -1;
          }
          return 0;
        }
    }
};

int list_free(List *li){
   if (li == NULL){
      return INVALID_NULL_POINTER;
   } else {
       DLNode *p;
       p = li->begin;
       while (p != NULL){
            li->begin = p->next;
            free(p);
            p = li->begin;
        }
        free(li);
        return 0;
   }
};

int list_pop_back(List *li){

}

// list_erase
// Entrada:
//    List * => lista
//    int pos => posição do elemento a ser apagado
int list_erase(List *li, int pos){
  if (li == NULL){
        return INVALID_NULL_POINTER;
  } else {
    // teste se lista vazia
    if ((pos <= 0 ) || (pos > li->size)) {
      return OUT_OF_RANGE;
    } else {
      DLNode *p;
      // teste se existe somente um elemento
      if (li->size == 1){
        free(li->begin);
        li->begin = NULL;
        li->end = NULL;
        li->size = 0;
      } else {
        // sabendo que tem mais de um elemento, verifica
        // se é o primeiro ou o último
        if (pos == 1){
          p=li->begin;
          li->begin = li->begin->next;
          li->begin->prev = NULL;
          li->size = li->size - 1;
          free(p);
        } else {
          // se for o último elemento
          if (pos == li->size){
            p = li->end;
            li->end = li->end->prev;
            li->end->next = NULL;
            li->size = li->size - 1;
            free(p);
          } else {
            // o elemento está no 'miolo' da lista
            int i = 1;
            p=li->begin;
            // buscando o ponteiro para o elemento
            while (i < pos) {
              i++;
              p = p->next;
            }
            p->prev->next = p->next;
            p->next->prev = p->prev;
            free(p);
            li->size = li->size -1;
          }
        }
      }
    }
  }
}


// list_erase
// Entrada:
//    List * => lista
//    int pos => posição do elemento a ser apagado
int list_erase_short_version(List *li, int pos){
  if (li == NULL){
        return INVALID_NULL_POINTER;
  } else {
    // teste se lista vazia
    if ((pos <= 0 ) || (pos > li->size)) {
      return OUT_OF_RANGE;
    } else {
      DLNode *p;
      p = li->begin;

      int i = 1;
      while (i < pos) {
        i++;
        p = p->next;
      }

      // p é o primeiro elemento
      if (p->prev == NULL){
        li->begin = p->next;
      }

      // p é o úlitmo elemento
      if (p->next == NULL){
        li->end = p->prev;
      }

      // verificando se p não é o primeiro
      if (p->prev)
        p->prev->next = p->next;

      // verificando se p não é o último
      if (p->next)
        p->next->prev = p->prev;

      free(p);
      li->size = li->size - 1;
    }
  }
}


// list_find_pos
// Entrada:
//    List * => lista
//    int pos => posição do elemento desejado
// Saída:
//    struct aluno* => referência para o aluno
//                     (já alocado na chamada)
//                parâmetro por referência
int list_find_pos(List *li, int pos, struct aluno *al){

}

// list_find_mat
// Entrada:
//    List * => lista
//    int nmat => número de matricula procurado
// Saída:
//    struct aluno* => referência para o aluno nmat
//                     (já alocado na chamada)
//                parâmetro por referência
int list_find_mat(List *li, int nmat, struct aluno *al){
   if (li == NULL){
     return INVALID_NULL_POINTER;
   } else {
       if (li->size == 0){
          return ELEM_NOT_FOUND;
       } else {
           DLNode *p;
           p = li->begin;

           while (p!= NULL && p->data.matricula != nmat){
             p = p->next;
           } //end while

           if (p == NULL){
             return ELEM_NOT_FOUND;
           } else {
             *al = p->data;
             return SUCCESS;
          } // endif(p null)
       } //endif(Size)
   }// endif (li null)
}



// list_front
// Entrada:
//    List * => lista
// Saída:
//    struct aluno* => referência para o primeiro aluno
//                     (já alocado na chamada)
//                parâmetro por referência
int list_front(List *li, struct aluno *al){
}

// list_back
// Entrada:
//    List * => lista
// Saída:
//    struct aluno* => referência para o último aluno
//                     (já alocado na chamada)
//                parâmetro por referência
int list_back(List *li, struct aluno *al){
}

// list_get_pos
// Entrada:
//    List * => lista
//    int nmat => num. matriculo do aluno
//                procurado
// Saída:
//    int *pos => posição do aluno nmat na lista
//                deve estar alocado na chamada
//                parâmetro por referência
int list_get_pos(List *li, int nmat, int *pos){
}


int list_size(List *li){
    if (li == NULL) {
        return INVALID_NULL_POINTER;
    } else {
        return li->size;
    }
}

int list_print(List *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    DLNode *p = li->begin;
    while(p != NULL){
        printf("Matricula: %d\n",p->data.matricula);
        printf("Nome: %s\n",p->data.nome);
        printf("Notas: %f %f %f\n",p->data.n1,
                                   p->data.n2,
                                   p->data.n3);
        printf("-------------------------------\n");

        p = p->next;
    }
}
