#include "TStack.h"

#define MAX 100

struct stack {
   struct aluno data[MAX];
   int size;
};


Stack *stack_create(){
   Stack *st;
   st = malloc(sizeof(Stack));
   if (st != NULL){
     st->size = 0;
   }
   return st;

}

void stack_free(Stack *st){
   if (st != NULL){
    free(st);
   }
}

int stack_push(Stack *st, struct aluno al){
  if (st == NULL){
    return -1;
  } else {
      if (st->size == MAX){
        return -2;
      } else {
        st->data[st->size] = al;
        st->size++;
        return 0;
      }
  }
}
int stack_pop(Stack *st){
  if (st == NULL){
    return -1;
  } else {
      if (st->size == 0){
        return -2;
      } else {
        st->size--;
        return 0;
      }
  }

}
int stack_top(Stack *st, struct aluno *al){
  if (st == NULL){
    return -1;
  } else {
      if (st->size == 0){
        return -2;
      } else {
        *al = st->data[st->size-1];
        return 0;
      }
  }
}
int stack_empty(Stack *st){
  if (st == NULL){
    return -1;
  } else {
      if (st->size == 0)
        return 1;
      else
        return 0;
  }
}
int stack_size(Stack *st){
  if (st == NULL){
    return -1;
  } else {
      return st->size;
  }
}
