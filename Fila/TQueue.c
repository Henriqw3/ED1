#include <stdlib.h>
#include "TQueue.h"

struct queue{
  int front;//começo da fila
  int rear; // "traseira"
  int size;
  struct aluno data[MAX];
};//Nó discretor 


Queue *queue_create(){
  Queue *qu;
  qu = malloc(sizeof(Queue));
  if ( qu != NULL){
    qu->front = 0;
    qu->rear = 0;
    qu->size = 0;
  }
  return qu;
}


int queue_free(Queue *qu){
  if (qu == NULL){
    return INVALID_NULL_POINTER;
  }
  free(qu);
  return SUCCESS;
}

int queue_front(Queue *qu, struct aluno *al){
  if (qu == NULL){
    return INVALID_NULL_POINTER;
  }
  if (qu->size>0){
    *al = qu->data[qu->front];
     return SUCCESS;
  }
  else
    return OUT_OF_RANGE;
}


int queue_push(Queue *qu, struct aluno al){
  if (qu == NULL){
    return INVALID_NULL_POINTER;
  }
  if (qu->size == MAX) {
    return OUT_OF_MEMORY;
  }
  qu->data[qu->rear] = al;
  qu->size = qu->size + 1;
  qu->rear = (qu->rear+1)%MAX;
  return SUCCESS;

}

int queue_pop(Queue *qu){
  if (qu==NULL){
    return INVALID_NULL_POINTER;
  }
  if (qu->size == 0){
    return OUT_OF_RANGE;
  }
  qu->front = (qu->front+1)%MAX;
  qu->size = qu->size - 1;
  return SUCCESS;
}

int queue_size(Queue *qu){
  if (qu==NULL){
    return INVALID_NULL_POINTER;
  }
  return qu->size;

}
int queue_empty(Queue *qu){
  if (qu==NULL){
    return INVALID_NULL_POINTER;
  }
  return (qu->size==0);
}

int queue_full(Queue *qu){
  if (qu==NULL){
    return INVALID_NULL_POINTER;
  }
  return (qu->size==MAX);
}