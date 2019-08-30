struct aluno {
	int matricula;
	char nome[30];
	float n1, n2, n3;
};

typedef struct element* List;

List create_Cclist();

int size_Cclist(List *lc);
