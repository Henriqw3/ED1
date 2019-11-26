//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
// MATRIZES
//To execute remove /**/ one by one
// EXERCÍCIO 1:

/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rand(void); 
#define TAM 4

int main(){

  int mat[TAM][TAM];
  int mat2[TAM][TAM];
  int i,j;

 srand(time(NULL));

 for (i = 0; i < TAM; i++) {
   for (j = 0; j < TAM; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*100;
    }
  }
  for (i = 0; i < TAM; i++) {
   for (j = 0; j < TAM; j++) {
      mat2[i][j] = (rand()/(double)RAND_MAX)*100;
    }
  }

  for (i = 0; i < TAM; i++) {
   for (j = 0; j < TAM; j++) {
      mat[i][j] = mat[i][j] + mat2[i][j];
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
 return 0;
}
*/

// EXERCÍCIO 2:

/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rand(void); 
#define TAM 3

int main(){

  int mat[TAM][TAM];
  int mat2[TAM][TAM];
  int i,j;

 srand(time(NULL));

 for (i = 0; i < TAM; i++) {
   for (j = 0; j < TAM; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*100;
    }
  }
  for (i = 0; i < TAM; i++) {
   for (j = 0; j < TAM; j++) {
      mat2[i][j] = (rand()/(double)RAND_MAX)*100;
    }
  }

  for (i = 0; i < TAM; i++) {
   for (j = 0; j < TAM; j++) {
      mat[i][j] = mat[i][j] * mat2[i][j];
      printf("| %d | ",mat[i][j]);
    }
    printf("\n");
  }
 return 0;
}

*/

// EXERCÍCIO 3:
/*Só é possível multiplicar duas matrizes 
  se o n de colunas da primeira matriz for
  igual ao número de linhas da segunda

  exemplo matriz 3x4 e 4x5 será do tipo 3x5

  a1 a2 a3 a4         A1 A2 A3 A4 A5 
  b1 b2 b3 b4     X   B1 B2 B3 B4 B5
  c1 c2 c3 c4         C1 C2 C3 C4 C5
                      D1 D2 D3 D4 D5

a1*A1 + a2*B1 + a3*C1 + a4*D1 | a1*A2 + a2*B2 + a3*C2 + a4*D2 ...

b1*A1 + b2*B1 + b3*C1 + b4*D1 | b1*A2 + b2*B2 + b3*C2 + b4*D2 
  
*/
/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rand(void); 
#define LIN 3
#define COL 4
#define LINE 4
#define COLU 5

int main(){

  int mat[LIN][COL];
  int mat2[LINE][COLU];
  int mat3[LIN][COLU];
  int i,j;

 srand(time(NULL));

 for (i = 0; i < LIN; i++) {
   for (j = 0; j < COL; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*100;
    }
  }
  for (i = 0; i < LINE; i++) {
   for (j = 0; j < COLU; j++) {
      mat2[i][j] = (rand()/(double)RAND_MAX)*100;
    }
  }

  for (i = 0; i < LIN; i++) {
   for (j = 0; j < COLU; j++) {
      mat3[i][j] = mat[i][j] * mat2[i][j];
      printf("%d ",mat3[i][j]);
    }
    printf("\n");
  }
 return 0;
}

*/

// EXERCÍCIO 4:

/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rand(void); 
#define LIN 5
#define COL 8

int main(){

  int mat[LIN][COL];
	int menor = 0; 
  int pos[2] = {0};
	int i,j;

 srand(time(NULL));

 for (i = 0; i < LIN; i++) {
   for (j = 0; j < COL; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*100;
    }
  }

	menor = mat[0][0];

  for (i = 0; i < LIN; i++) {
   for (j = 0; j < COL; j++) {
			printf("%d ",mat[i][j]);
			if (mat[i][j] < menor){
				menor = mat[i][j];
				pos[0] = i+1;
				pos[1] = j+1;
			}
		}
    printf("\n");
  }
	printf("Menor :%d\nPosition: linha %d coluna %d", menor, pos[0], pos[1]);

 return 0;
}

*/

// EXERCÍCIO 5:

/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rand(void); 
#define LIN 5
#define COL 5

int main(){

  int mat[LIN][COL];
	int diagonal = 0; 
	int i,j;

 srand(time(NULL));

 for (i = 0; i < LIN; i++) {
   for (j = 0; j < COL; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*100;
			printf("%d ",mat[i][j]);
			if(i == j)
				diagonal += mat[i][j];
		}
    printf("\n");
  }
	printf("Soma diagonal = %d", diagonal);
 return 0;
}

*/

// EXERCÍCIO 6:

/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rand(void); 
#define LIN 3
#define COL 3

int main(){

  int mat[LIN][COL];
	int vet_lin[LIN] = {0};
	int vet_col[COL] = {0};
	int i,j;

 srand(time(NULL));

 for (i = 0; i < LIN; i++) {
   for (j = 0; j < COL; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*100;
			printf("%d ",mat[i][j]);
		}
    printf("\n");
  }

for (i = 0; i < COL; i++){
	for (j = 0; j < LIN; j++){
    vet_lin[i] += mat[i][j];
	}
}

for(j = 0; j < COL; j++){
	for(i = 0; i < LIN; i++){
		vet_col[j] += mat[i][j];
	}
}
printf("***Soma linhas***\n");
for(i = 0; i < LIN; i++){
	printf("%d\n", vet_lin[i]);
}
printf("***Soma colunas***\n");
for(i = 0; i < COL; i++){
	printf("%d ", vet_col[i]);
}
 return 0;
}
*/

// EXERCÍCIO 7:

/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

int simetria(int mat[][COL], int mat2[][COL]){
	for(int i = 0; i < LIN;i++){
		for(int j = 0; j < LIN; j++){
			if(mat[i][j] == mat2[j][i]){
				return 1;
			}
			else{
				return 0;
			}
		}
	}
}

int main(){

  int mat[LIN][COL];
	int mat2[LIN][COL];
	int i,j;

 srand(time(NULL));

 for (i = 0; i < LIN; i++) {
   for (j = 0; j < COL; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*100;
		}
  }

for (i = 0; i < LIN; i++) {
  for (j = 0; j < COL; j++) {
			mat2[j][i] = mat[i][j];
	}
}

printf("MATRIZ ORIGINAL\n");
for(int i = 0; i < COL; i++){
	for(int j = 0; j < COL; j++){
		printf("%d ", mat[i][j]);
	}
	printf("\n");
}
printf("\n");
printf("MATRIZ TRANSPOSTA\n");
for(int i = 0; i < COL; i++){
	for(int j = 0; j < COL; j++){
		printf("%d ", mat2[i][j]);
	}
	printf("\n");
}

int result = 0;

result = simetria(mat,mat2);
if(result == 1){
		printf("\nÉ simétrico");
}
if(result == 0){ 
	printf("\nNão é simétrica");
}

return 0;
}



// EXERCÍCIO 8:



#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define LIN 4
#define COL 4

int rand(void);

int met_esquerda(int mat[LIN][COL]);
int met_direita(int mat[LIN][COL]);
int cima(int mat[LIN][COL]);
int baixo(int mat[LIN][COL]);
int esquerda(int mat[LIN][COL]);
int direita(int mat[LIN][COL]);



int main(){

  int mat[LIN][COL]; 
	int soma = 0;
	int i,j;

 srand(time(NULL));

 for (i = 0; i < LIN; i++) {
   for (j = 0; j < COL; j++) {
      mat[i][j] = (rand()/(double)RAND_MAX)*6;
			printf("%d  ",mat[i][j]);
		}
    printf("\n");
  }
	
	soma += met_direita(mat);
	soma += met_esquerda(mat);
	soma += cima(mat);
	soma += esquerda(mat);
	soma += esquerda(mat) + direita(mat); 
	soma += cima(mat) + baixo(mat);
	soma += esquerda(mat) + cima(mat);
	soma += esquerda(mat) + baixo(mat);

	printf("\n\nSoma final = %d", soma);

 return 0;
}


//FUNÇÕES:

int met_direita(int mat[LIN][COL]){

	int somamtdr = 0;

	for(int i = 0; i < LIN; i++){
		for(int j = i+1; j < COL; j++){
			somamtdr += mat[i][j];
		}
	}
	return somamtdr;
}

int met_esquerda(int mat[LIN][COL]){

	int somamtes = 0;

	for(int i = 0; i <= LIN-1; i++){
		for(int j = COL-i-2; j >= 0; j--){
			somamtes += mat[i][j];
		}
	}
	return somamtes;
}

int cima(int mat[LIN][COL]){

	int somac = 0;

	for(int i = 0; i < LIN/2; i++){
		for(int j = 1 + i; j < COL-i-1; j++){
			somac += mat[i][j];
		}
	}
	return somac;
}

int baixo(int mat[LIN][COL]){

	int somab = 0;

	for(int i = LIN -1 ; i > LIN/2; i--){
		for(int j = COL-(i-1)+1; j > i-1; j--){
			somab += mat[i][j];
		}
	}
	return somab;
}

int esquerda(int mat[LIN][COL]){

	int somae = 0;

	for(int i = 1; i <= LIN -2; i++){
		for(int j = 0; j <= i; j++){
			somae += mat[i][j];
		}
	}
	return somae;
}

int direita(int mat[LIN][COL]){

	int somad = 0;

	for(int i = 1; i < LIN - 2; i++){
		for(int j = COL; j > COL - i; j--){
			somad += mat[i][j];
		}
	}
	return somad;
}

*/

#include <stdio.h>

int main(){
	printf("\n\n\n\n\n\n\n\nHello World\n\n\n\n\n\n\n\n");
return 0;	
}
