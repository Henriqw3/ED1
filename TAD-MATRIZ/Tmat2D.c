//Henrique Corrêa de Oliveira - 11821BSI251
//Tad de Matriz.c

//>>>>>>>>>No arquivo Tmat2D.c<<<<<<<<<
//struct no ponto c pois queremos esconder do usuario
// não teremos func main nesse .c, apenas funções e estruturas

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Tmat2D.h"


struct tmat2D{
    double *valores;
    int nlinhas;
    int ncolunas;
};

typedef struct tmat2D Tmat2D;

Tmat2D *criar_mat(int linhas, int colunas){
    Tmat2D *matriz = NULL;
    matriz = malloc(sizeof(Tmat2D));
    if(matriz == NULL){
        return NULL;
    }else{
        matriz->valores = malloc(linhas*colunas*sizeof(double));
        if(matriz->valores == NULL){
            return NULL;
        }else{
            matriz->nlinhas = linhas;
            matriz->ncolunas = colunas;
        }
    }
return matriz;
}

void destruir_mat(Tmat2D *matriz){

free(matriz->valores);
free(matriz);

}
int write_element(Tmat2D *m, int i, int j, double elem){
    if(m == NULL || m->valores == NULL){
        return -1;
    }
    else if(i >= m->nlinhas || i <= 0 || j >= m->ncolunas || j <= 0){
        return -1;
    }
    else{
        m->valores[i*m->ncolunas+j] = elem;
        return 0;
    }
}

int acessa_elem(Tmat2D *m, int i, int j, double *valor){

    if(m != NULL || m->valores != NULL || i < m->nlinhas || j < m->ncolunas){
        *valor = m->valores[i*m->ncolunas+j];
        return 0;
    }
    else
        return -1;
}

int preencher(Tmat2D *m, int maximo, int minimo){
    if(m != NULL || m->valores != NULL){
        srand(time(NULL));
        int elementos;
        elementos = m->ncolunas*m->nlinhas;
        for(int i = 0; i < elementos; i++)
            m->valores[i] = (rand() % (maximo - minimo) + 1);
        return 0;
    }
    else
        return -1;
}

int somaMats(Tmat2D *mat1, Tmat2D *mat2, Tmat2D *resultado){
    if(mat1 != NULL && mat2 != NULL){
        if(mat1->nlinhas != mat2 ->nlinhas || mat1->ncolunas != mat2->ncolunas){
            return -1;
        }
        else{
            if(resultado == NULL){
                return -1;
            }
            else{
                int elementos;
                elementos = mat1->ncolunas*mat1->nlinhas;
                resultado->valores = malloc(elementos*sizeof(double));
                if(resultado->valores == NULL){
                    return -1;
                    }
                else{
                    for(int i = 0; i < elementos; i++)
                        resultado->valores[i] = mat1->valores[i] + mat2->valores[i];
                    return 0;
                    }
                }
            }
        }
	return 0;
}

int multiplica_Mats(Tmat2D *mat1, Tmat2D *mat2, Tmat2D *resultado)
{
    if (mat1 != NULL && mat2 != NULL)
    {
        if (mat1->ncolunas != mat2->nlinhas || mat1->nlinhas != resultado->nlinhas || mat2->ncolunas != resultado->ncolunas)
        {
            return -1;
        }
        else
        {
            int elementos;
            resultado->nlinhas = mat1->nlinhas;
            resultado->ncolunas = mat2->ncolunas;
            elementos = mat1->nlinhas * mat2->ncolunas;
            resultado->valores = malloc(elementos * sizeof(double));
            if (resultado->valores == NULL)
            {
                return -1;
            }
            else
            {
                for (int i = 0; i < resultado->nlinhas; i++)
                    for (int j = 0; j < resultado->ncolunas; j++)
                    {
                        resultado->valores[i * resultado->ncolunas + j] = 0; // zera para acumular o somatorio
                        for (int k = 0; k < resultado->ncolunas; k++)
                            resultado->valores[i * resultado->ncolunas + j] += mat1->valores[i * mat1->ncolunas + k] * mat2->valores[k * mat2->ncolunas + j];
                    }
            }
            return 0;
        }
    }
return 0;
}

int multiplicaEscalar(Tmat2D *m, int multiplicador, Tmat2D *resultado){
    int num_elementos;
    if(m == NULL || m->valores == NULL || resultado == NULL){
        return -1;
    }else{
        num_elementos = m->nlinhas * m->ncolunas;
        for(int i = 0; i < num_elementos; i++)
            resultado->valores[i] = m->valores[i] * multiplicador;
        return 0;
    }
}

int somaDiagonal(Tmat2D *m, double *traco){
    if(m != NULL && m->valores != NULL){
        *traco = 0;
        for(int i = 0; i < m->nlinhas; i++){
            for(int j = 0; j < m->ncolunas; j++){
                if(i==j){
                    *traco += m->valores[i*m->ncolunas+j];
                }
            }
        }
        return 0;
    }else
        return -1;
}

double *somadasLinhas(Tmat2D *mat1){
    if(mat1 != NULL && mat1->valores != NULL){
        double *vetlin = NULL;
        vetlin = malloc(mat1->nlinhas*sizeof(double));
        if(vetlin != NULL){
            for(int i = 0; i < mat1->nlinhas;i++)
                vetlin[i] = 0;
            for(int i = 0; i < mat1->nlinhas; i++){
                for(int j = 0; j < mat1->ncolunas; j++)
                    vetlin[i] += mat1->valores[i*mat1->ncolunas+j];
            }
        return vetlin;
        }
    }else{
    return NULL;
    }
return 0;
}

double *somadasColunas(Tmat2D *mat1){
    if(mat1 != NULL && mat1->valores != NULL){
        double *vetcol = NULL;
        vetcol = malloc(mat1->nlinhas*sizeof(double));
        if(vetcol != NULL){
            for(int i = 0; i < mat1->nlinhas;i++)
                vetcol[i] = 0;
            for(int i = 0; i < mat1->nlinhas; i++){
                for(int j = 0; j < mat1->ncolunas; j++)
                    vetcol[i] += mat1->valores[j*mat1->ncolunas+i];
            }
        return vetcol;
        }
    }else{
    return NULL;
    }
return 0;
}

void print_Mat(Tmat2D *matriz){
    if(matriz == NULL || matriz->valores == NULL){
        return;
    }else{
    int i;
    int j;
    int k = 0;
    for(i = 0; i < matriz->nlinhas; i++){
        for(j = 0; j < matriz->ncolunas; j++){
            printf("%.2lf\t", matriz->valores[k]);
            k++;
            }
        printf("\n");
        }
    }
}
