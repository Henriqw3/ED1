//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//TAD Arquivo Tmat2D.h

//>>>>>>>>>>No arquivo Tmat2D.h<<<<<<<<<<<<

typedef struct tmat2D Tmat2D;

Tmat2D *criar_mat(int linhas, int colunas);
void destruir_mat(Tmat2D *matriz);
int write_element(Tmat2D *m, int i, int j, double elem);
int acessa_elem(Tmat2D *m, int i, int j, double *valor);
int preencher(Tmat2D *m, int maximo, int minimo);
int somaMats(Tmat2D *mat1, Tmat2D *mat2, Tmat2D *resultado);
int multiplica_Mats(Tmat2D *mat1, Tmat2D *mat2, Tmat2D *resultado);
int multiplicaEscalar(Tmat2D *m, int multiplicador,Tmat2D *resultado);
int somaDiagonal(Tmat2D *m, double *traco);
double *somadasLinhas(Tmat2D *mat1);
double *somadasColunas(Tmat2D *mat1);
void print_Mat(Tmat2D *matriz);

