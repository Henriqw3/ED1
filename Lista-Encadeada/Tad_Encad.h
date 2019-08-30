

typedef struct 
{
	int matricula;
	char  nome[30];
	float n1,n2,n3;
	
}Aluno;

typedef struct lista Lista;

Lista* criar_lista();

void imprime_lista(Lista *li);


int liberar_lista(Lista *li);

int consulta_lista_pos(Lista *li, int pos, Aluno *al);

int consulta_lista_mat(Lista *li, int mat, Aluno *al);

int tamanho_lista(Lista *li);

int insere_lista_inicio(Lista *li, Aluno al);

int insere_lista_final(Lista *li, Aluno al);

int insere_lista_pos(Lista *li, int pos, Aluno al);

int insere_lista_ordenado(Lista *li, Aluno al);

int remove_lista(Lista *li, int mat);

int remove_lista_inicio(Lista *li);

int remove_lista_final(Lista *li);

int lista_vazia(Lista *li);

int lista_cheia(Lista *li);
