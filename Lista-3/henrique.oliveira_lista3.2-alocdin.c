//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//LISTA 3.2 - Alocação Dinâmica
//To execute remove /**/ one by one
//EXERCÍCIO 1:

/*

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double *produtos;
	int n,i;
	
	printf("Informe o numero de produtos");
	scanf("%d",&n);
	// é necessário usar o comando malloc para alocar a memória
	
	produtos = (double *)malloc(n*sizeof(double));
	
	for (i = 0; i < n; i++){
		printf("Informe o valor do produto %d R$:",i+1);
		scanf("%lf", &produtos[i]);
}
	printf("\nProdutos cadastrados\n");
	
	for (i = 0; i < n; i++){
		printf("Produto %d - R$: %f\n",i+1, produtos[i]);
}
	// ao terminar de usar o vetor, devemos liberar a memória
	free(produtos);
	
	return 0;
}
 * O valor de n é a quantidade de produtos que serão requeridas no programa
 * O (n *sizeof (double)) é a quantidade de produtos vezes o seu tamanho de acordo
 * com seu tipo que no caso é double. E um double é igual a 8 espaços na memória
 */

//EXERCÍCIO 2:

/*

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *n, i;
	
	n = (int *) malloc(5*sizeof(int));
	
	printf("Entre com os numeros\n");
	for(i = 0; i < 5; i++)
		scanf("%d", &n[i]);
		
	for(i = 0; i < 5; i++)
		printf("%d ", n[i]);
	
	free(n);
	
	return 0;
}

*/

//EXERCÍCIO 3:

/*

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int quant, imp, par = 0;
	
	printf("Digite a quantidade de numeros:");
	scanf("%d", &quant);
	
	int *num = (int *) malloc (quant*sizeof(int));
	
	for(int i = 0; i < quant; i++){
		printf("Informe o numero %d:", i+1);
		scanf("%d", &num[i]);
		if(num[i] % 2 == 0)
			imp++;
		else
			par++;
	}
	
	printf("Quantidade de impares:%d\nQuantidade de pares:%d\n", imp, par);
	
	
	
	return 0;
}

*/

//EXERCÍCIO 4:
/*

#include <stdio.h>
#include <stdlib.h>

typedef struct{

	int x;
	int y;
} PONTOS;

int main(void){
	
	int n;
	printf("Quantos pontos deseja digitar:");
	scanf("%d", &n);
	
	PONTOS *coord;
	coord = (PONTOS *)malloc(n*sizeof(PONTOS));
	
	for(int i = 0; i < n;i++){
		printf("\nEntre com a coordenada x do ponto %d:", i+1);
		scanf("%d", &coord[i].x);
		printf("Entre com a coordenada y do ponto %d:", i+1);
		scanf("%d", &coord[i].y);
	}
	
	printf("\nPontos digitados:");
	for(int j = 0; j < n; j++){
		printf("(%d,%d);", coord[j].x, coord[j].y);
	}

	free(coord);
	return 0;
}

*/

//EXERCÍCIO 5:

/*

#include <stdio.h>
#include <stdlib.h>

typedef struct{

	int x;
	int y;
} PONTOS;

int main(void){
	
	int n;
	printf("Quantos pontos deseja digitar:");
	scanf("%d", &n);
	
	PONTOS *coord;
	coord = (PONTOS *)malloc(n*sizeof(PONTOS));
	int *maior_x = &coord[0].x;
	int *menor_x = &coord[0].x;
	int *maior_y = &coord[0].y;
	int *menor_y = &coord[0].y;
	
	for(int i = 0; i < n;i++){
		printf("\nEntre com a coordenada x do ponto %d:", i+1);
		scanf("%d", &coord[i].x);
		printf("Entre com a coordenada y do ponto %d:", i+1);
		scanf("%d", &coord[i].y);
		
		if(coord[i].x > *maior_x)
			maior_x = &coord[i].x;
		else if(coord[i].x < *menor_x)
			menor_x = &coord[i].x;
		else if(coord[i].y > *maior_y)
			maior_y = &coord[i].y;
		else if(coord[i].y > *menor_y)
			maior_y = &coord[i].y;
	}
	
	printf("\nPontos mais a esquerda:%d",*maior_x);
	printf("\nPontos mais a direita:%d",*menor_x);
	printf("\nPontos mais acima:%d",*maior_y);
	printf("\nPontos mais abaixo:%d",*menor_x);

	free(coord);
	return 0;
}
*/

