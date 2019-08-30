#ifndef TSTACK_H_INCLUDED
#define TSTACK_H_INCLUDED
#include <stdlib.h>
#include "aluno.h"


typedef struct stack Stack;

Stack *stack_create();
void stack_free(Stack *st);

int stack_push(Stack *st, struct aluno al);
int stack_pop(Stack *st);
int stack_top(Stack *st, struct aluno *al);
int stack_empty(Stack *st);
int stack_size(Stack *st);

#endif TSTACK_H_INCLUDED
