//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//LISTA 3.1 - Ponteiros

//EXERCÍCIO 1:

/*

#include <stdio.h>

int main(){

	int val[5] = {2,4,5,8,10};
	unsigned int p;
	
	p = &val[2];
	
	scanf("%d", p);

	for(int i = 0; i < 5; i++){
		printf("%d ",val[i]);	
	}
	
	
	return 0;
}

*/
//EXERCÍCIO 2:

//LETRA A:

/*
#include <stdio.h>

int main(){

	int a = 40;
	int *p; 
	p = &a;
	
	printf("%d ",&a);
	printf("%d ", p);
	
	return 0;
}	
*/

//LETRA B:

/*
#include <stdio.h>

int main(){

	int a = 40;
	int *p; 
	p = &a;
	
	scanf("%d", p);
	printf("%d ",a);
	printf("%d ", *p);
	
	return 0;
}
*/

//LETRA C:
/*

#include <stdio.h>

int main(){

	int val[5] = {2,4,5,8,10};
	int *p;
	int i;

	for(i = 0; i < 5; i++){
		if(val[i] == 10){
			p = &val[i];
			scanf("%d", p);
		}
	}
	for(i = 0; i < 5; i++){
		printf("%d ", val[i]);
	}
	
	return 0;
}
*/

//LETRA D: 
/*

#include <stdio.h>

int main(){

	int val[5] = {2,4,5,8,10};
	int *p;
	int i;

	for(int i = 0; i < 5; i++){
		printf("Valor do vetor na posicao %d: %d\n", i+1, val[i]);
		printf("Endereco do vetor na posicao %d: %d\n", i+1, &val[i]);
		printf("Endereco em hexadecimal do vetor na posicao %d: %p\n\n", i+1, &val[i]);
		if(val[i] == 10){
			p = &val[i];
			printf("Digite um novo valor para 10:");
			scanf("%d", p);
		}
	}
	printf("\nApos alteracao:\n\n");
	for(i = 0; i < 5; i++){
		if(i == *p){
			printf("Valor de val[%d]: %d \n",i+1, val[*p]);
			printf("Endereco de val[%d]: %d \n",i+1, &val[*p]);
			printf("Endereco em val[%d](Hexadecimal): %d: %p\n\n", i+1, &val[*p]);
		}else{
			printf("Valor de val[%d]: %d\n", i+1, val[i]);
			printf("Endereco de val[%d]: %d\n", i+1, &val[i]);
			printf("Endereco em val[%d](Hexadecimal): %p\n\n", i+1, &val[i]);
		}
	}

	return 0;
}
*/


//EXERCÍCIO 3:

/*

#include <stdio.h>

int main(){

	int val[5] = {2,4,5,8,10};
	unsigned int p;
	
	for(int i = 0; i < 5; i++){
		p = val[i];
		printf("Valor de val[%d] eh: %d\n", i+1, p);
		p = &val[i];
		printf("Endereco de val[%d] eh: %d\n", i+1, p);
		printf("Endereco em val[%d](Hexadecimal) eh: %p\n\n", i+1, p);			
	}

	return 0;
}

*/

//EXERCÍCIO 4:

/*
#include <stdio.h>

int main(){

	int val[5] = {2,4,5,8,10};
	unsigned int p;

	for(int i = 0; i < 5; i++){
		p = val[i];
		printf("%d ", p - 1);	
	}
	
	return 0;
}
*/


//EXERCÍCIO 5:

/*

#include <stdio.h>

int main(){
	
	int v1 = 1;
	double v2 = 2;
	char c = 'a';
	int *p_v1;
	double *p_v2;
	char *p_c;
	
	p_v1 = &v1;
	p_v2 = &v2;
	p_c = &c;
	
	
	printf("\nEndereço de v1 %u", p_v1);
	printf("\nEndereço de v2 %u", p_v2);
	printf("\nEndereço de c %u", p_c);
	printf("\nEndereço+1 de v1 %u", p_v1+2);
	printf("\nEndereço+1 de v2 %u", p_v2+2);
	printf("\nEndereço+1 de c %u", p_c+2);
	printf("\nEndereço-1 de v1 %u", p_v1-2);
	printf("\nEndereço-1 de v2 %u", p_v2-2);
	printf("\nEndereço-1 de c %u", p_c-2);
	
	return 0;
}
*/

//EXERCÍCIO 6:

/*Há um comportamento diferente na variável pois a operação
 *feita foi uma alteração de endereço da mesma, resultando em outro endereço
 *consequentemente outro valor para elas.
 */

//EXERCÍCIO 7:

/*
#include <stdio.h>

int main(){
	
	char nome[] = "Jose Augusto";
	char *p = &nome;
	
	for(int i = 0; i < sizeof(nome); i++)
		printf("%c", *(p+i));
	
	return 0;
}
*/

//EXERCÍCIO 8:

/*
#include <stdio.h>

int main(){
	
	int num_1 = 0;
	double num_2 = 0.0;
	void *p;
	
	p = &num_1;
	scanf("%d", p);
	printf("%d\n", *(int*)p);
	p = &num_2;
	scanf("%d", p);
	printf("%d\n", *(double*)p);
	
	return 0;
}
*/


//EXERCÍCIO 9:

/*
#include <stdio.h>
#define TAM 10

int main(){
	
	double vet[TAM] = {0}; 
	
	printf("Entre com o ponteiro de 10 conteúdos:\n");
	for(int i = 0; i < TAM; i++)
		scanf("%lf", &vet[i]);
		
	for(int i = 0; i < TAM; i++)
		printf("%lf ", *(vet+i));
	
 	return 0;
}

*/


//EXERCÍCIO 10:

/*

#include <stdio.h>
#define TAM 10

int main(){
	
	int vetor[TAM] = {0};
	
	printf("Entre com o ponteiro de 10 conteúdos:\n");
	for(int i = 0; i < TAM; i++)
		scanf("%d", &vetor[i]);
		
	for(int i = 0; i < TAM; i++)
		printf("%d ", *(vetor+i));
	
 	return 0;
}
*/
