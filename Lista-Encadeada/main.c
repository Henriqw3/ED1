/**
 *
 * @author henrique
 */

#include <stdio.h>
#include <stdlib.h>
#include "TADpontos.h"

int menu_options();

int main(){


	int escolha = menu_options();

	switch(escolha){
	case 1:
		Lista *L1 = cria_lista();
		menu_options();
		break;
	case 2:
		int position = 0;
		printf("Digite posição que sera consultada na lista\n");
		scanf("%d", &position);

		Aluno *al;

		al = consulta_lista_pos(L1,position, al);

		printf("matricula:%d\nnome:%s\ntestes:%f  %f  %f\n"al->matricula, al->nome, al->n1,al->n2,al->n3);
		menu_options();
		break;
	case 3:
		int matric = 0;
		printf("Digite posição que sera consultada na lista\n");
		scanf("%d", &matric);

		Aluno *al;

		consulta_lista_mat(L1, matric, al);
		menu_options();
		break;
	case 4:
		
		Aluno alun_fin;
		Printf("Dados aluno:\nMatricula:");
		scanf("%d",alun_fin.matricula);
		Printf("nome:");
		gets(alun_fin.nome);
		Printf("Provas n1 n2 e n3 :\n");
		scanf("%f%f%f",alun_fin.n1, alun_fin.n2, alun_fin.n3);

		insere_lista_final(L1, alun_fin);
		menu_options();
		break;
	case 5:
		Aluno alun_inic;
		Printf("Dados aluno:\nMatricula:");
		scanf("%d",alun_inic.matricula);
		Printf("nome:");
		gets(alun_inic.nome);
		Printf("Provas n1 n2 e n3 :\n");
		scanf("%f%f%f",alun_inic.n1, alun_inic.n2, alun_inic.n3);

		insere_lista_inicio(L1, alun_inic);
		menu_options();
		break;

	case 6:
		int posic = 0;

		printf("Digite a posicao onde sera inserido:");
		scanf("%d", &posic);

		Aluno alun_pos;
		Printf("Dados aluno:\nMatricula:");
		scanf("%d",alun_pos.matricula);
		Printf("nome:");
		gets(alun_pos.nome);
		Printf("Provas n1 n2 e n3 :\n");
		scanf("%f%f%f",alun_pos.n1, alun_pos.n2, alun_pos.n3);

		insere_lista_pos(L1, posic, alun_pos);
		menu_options();
		break;

	case 7:
		Aluno alun_ord;
		Printf("Dados aluno:\nMatricula:");
		scanf("%d",alun_ord.matricula);
		Printf("nome:");
		gets(alun_ord.nome);
		Printf("Provas n1 n2 e n3 :\n");
		scanf("%f%f%f",alun_ord.n1, alun_ord.n2, alun_ord.n3);

		insere_lista_ordenada(L1, alun_ord);
		menu_options();
		break;
	case 8:
		int n_mat = 0;
		printf("Numero de matricula a ser removido:");
		scanf("%d",&n_mat); 

		remove_lista(L1, n_mat);
		menu_options();
		break;
	case 9:
		remove_lista_inicio(L1);
		menu_options();
		break;
	case 10:
		remove_lista_final(L1);
		menu_options();
		break;
	case 11:
		int tam = tamanho_lista(L1);
		menu_options();
		break;
	case 12:
		int bool_val = lista_cheia(L1);
		if(bool_val == 1)
			printf("True\n");
		else
			printf("False\n");

		menu_options();
		break;
	case 13:
		int bool_vl = lista_vazia(L1);
		if(bool_vl == 1)
			printf("True\n");
		else
			printf("False\n");		

		menu_options();
		break;
	case 14:
		imprime_lista(L1);
		menu_options();
		break;
	case 15:
		libera_lista(L1);
		menu_options();
		break;

	default:
		exit(0);
		break;
	}
	return 0;
}

int menu_options(){

	int escolha = 0;

	printf("\n============ Menu Lista Encadeada ============\n"
		    "1: Criar Lista\n"
		   "2: Consultar lista por posicao\n"
		   "3: Consultar lista por número de matricula\n"
		   "4: Inserir elemento no final da lista\n"
		   "5: Inserir elemento no inicio da lista\n"
		   "6: Inserir lista por posicao"
		   "7: Inserir ordenadamente na lista\n"
		   "8: Remove toda lista\n"
		   "9: Remove início da lista"
		   "10: Remove final da lista\n"
		   "11: Retorna o tamanho da lista\n"
		   "12: Verifica se lista está cheia\n"
		   "13: Verifica se lista está vazia\n"
		   "14: Imprime lista\n"
		   "15: Libera a lista\n"
		   "16: Fechar Programa\n"
		   "================================================\n"
		   "Digite sua opção:");
	scanf("%d",&escolha);	


	while(!(escolha >= 1 && escolha <= 16)){
		Printf(">>ERROR OPTION NOT FOUND<<\n\n");
		Printf("Try Again\n");
		menu_options();
	}

	return escolha;
}
