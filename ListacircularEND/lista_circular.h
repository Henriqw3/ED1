/**
 *
 * @author henrique
 */

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

typedef struct circlist Clist;
typedef struct aluno Aluno;
struct aluno{

	int matricula;
	char nome[30];
	float n1, n2, n3;
};

//Protótipo das funções

//Operações de inicialização 
Clist* criar_lista();
void liberar_lista(Clist *li);

//Operações de informação e Consulta 
int tamanho(Clist *li);
int consulta_pos(Clist *li, int pos, struct aluno *al);
int consulta_mat(Clist *li, int mat, struct aluno *al);

//Operações de inserção na lista
int insere_inicio(Clist *li, struct aluno al);
int insere_final(Clist *li, struct aluno al);
int insere_ordenada(Clist* li, struct aluno al);

//Operações de remoção
int remove_inicio(Clist *li);
int remove_final(Clist *li);
int remove_ordenada(Clist *li, int mat);
