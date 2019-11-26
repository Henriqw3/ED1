/**
 *
 * @author henrique
 */

#include <stdlib.h>

struct aluno {
  char nome[30];
  int matricula;
  float n1,n2,n3;
};


typedef struct stack Stack;

Stack *stack_create();
void stack_free(Stack *st);

int stack_push(Stack *st, struct aluno al);
int stack_pop(Stack *st);
int stack_top(Stack *st, struct aluno *al);
int stack_empty(Stack *st);
int stack_size(Stack *st);
