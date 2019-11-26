/**
 *
 * @author henrique
 */

#include <stdio.h>
#include <stdlib.h>
#include "TStack.h"
#define TAM 

int main(){

			Aluno A[4] = {{2,"Andre",9.5,7.8,8.5},
									{4,"Ricardo",7.5,8.7,6.8}, 
									{1,"Bianca",9.7,6.7,8.4}, 
									{3,"Ana",5.7,6.1,7.4}}; 

		Lista* li = criar_lista();

    Stack *s = stack_create();

		insere_lista_inicio(A);
    return 0;
}
