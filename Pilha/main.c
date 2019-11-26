/**
 *
 * @author henrique
 */

#include <stdio.h>
#include <stdlib.h>
#include "TStack.h"

typedef struct aluno Aluno;

int main(){

  Aluno al;

  Stack *s == NULL;

	int escolha = menu_options();

	switch(escolha){
	case 1:
    Stack *s = stack_create();

    if(s != NULL){
      printf(">>>Pilha criada com sucesso<<<\n\n");
    }
		menu_options();
		break;
	case 2:

    printf("Inserir o nome do aluno:");
    fgets(al.nome);
    printf("Insira o número de matrícula:");
    scanf("%d", &al.matricula);
    printf("Digite a nota da p1");
    scanf("%d",&al.p1);
    printf("Digite a nota da p2",&al.p2)
    printf("Digite a nota do aluno p3:");
    scanf("%d", &al.p3);

    stack_push(s, Aluno al);

		menu_options();
		break;
	case 3:
    stack_pop(s);
    printf(">>>Elemento do topo da pilha retirado com sucesso<<<\n\n");
		menu_options();
		break;
	case 4:
    printd("\nO elemento do topo da pilha :");
    stack_top(st,al);

		menu_options();
		break;
	case 5:
    stack_empty(st);
		menu_options();
		break;

	case 6:
    stack_size(st);
    menu_options();
		break;

    case 7:
      stack_free(s);
      menu_options();
      break;

    case 8:
    		exit(0);
    		break;
    default:
		  return 0;
	}
}

int menu_options(){

	int escolha = 0;

	printf("\n===============   ============\n"
		   "1: Criar Pilha de elementos\n"
		   "2: Inserir novo elemento na pilha \n"
		   "3: Retirar elemento do topo da pilha\n"
		   "4: Consultar elemento do topo da pilha\n"
		   "5: Verificar se pilha está vazia\n"
		   "6: Retornar o número de elementos da pilha\n"
		   "7: Liberar Pilha\n"
       "8: Fechar Programa\n"
		   "===============================================\n"
		   "Digite sua opção:");
	scanf("%d",&escolha);


	while(!(escolha > 0 && escolha <= 8)){
		Printf(">>ERROR OPTION NOT FOUND<<\n\n");
		Printf("Try Again\n");
		menu_options();
	}
	return escolha;
}
