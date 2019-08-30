//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//LISTA 2.2 - STRINGS

/**************

//EXERCÍCIO 1:

#include<stdio.h>

int main(void)
{
   int i;
   for(i = 28; i < 256; i++)
   {
      printf("%d %c\n", i, i);
   }
   return 0;
}

//EXERCÍCIO 2:

#include <stdio.h>

int main(){
	
	char nome[50];
	int i = 0;
	
	while(1){
	
	nome[i] = getchar();
	if (nome[i] == '\n')
		break;
	i += 1;
}

	for(int j = 0; j <= i; j++)
		printf("%c", nome[j]);
	return 0;
}

//EXERCÍCIO 3:

#include <stdio.h>

int main(){
	
	char nome[50];
	int i = 0, j;
	
	while(1){
		nome[i] = getchar();
		
		if (nome[i] == '\n')
		break;
	i += 1;
}
	for(j = 0;j < i; j++){
		if(nome[j] >= 97 && nome [j] <= 122){
			nome[j] = nome[j] - 32;
			printf("%c", nome[j]);
		}
		else 
			printf("%c", nome[j]);
	}		
		
		return 0;
}

//EXERCÍCIO 4:

#include <stdio.h>

int main(void){

	char nome1[20];
	char nome2 [20];
	int i = 0,n = 0, j;
	int iguais = 0;
	
	setbuf(stdin,NULL);

	while(1){
	
	nome1[i] = getchar();
	if (nome1[i] == '\n')
		break;
	i += 1;
}

	while(1){
	
	nome2[n] = getchar();
	if (nome2[n] == '\n')
		break;
	n += 1;
}

	for(j = 0;j < i; j++){
		if(nome1[j] == nome2[j])
			iguais += 1;
	}
		if(iguais == i)
			printf("São iguais\n");
		else
			printf("Não são iguais\n");
	
	return 0;
}

//EXERCÍCIO 5:

#include <stdio.h>

int main(void){

	char nome1[20];
	char nome2 [20];
	int i = 0,n = 0, j;
	int iguais = 0;
	
	setbuf(stdin,NULL);

	while(1){
	
	nome1[i] = getchar();
	if (nome1[i] == '\n')
		break;
	i += 1;
}

	while(1){
	
	nome2[n] = getchar();
	if (nome2[n] == '\n')
		break;
	n += 1;
}

	for(j = 0;j < i; j++){
		if(nome1[j] >= 97 && nome1 [j] <= 122)
			nome1[j] = nome1[j] - 32;
		if(nome2[j] >= 97 && nome2 [j] <= 122)
			nome2[j] = nome2[j] - 32;
	}
	
	for(j = 0;j < i; j++){
		if(nome1[j] == nome2[j])
			iguais += 1;
	}
		if(iguais == i)
			printf("São iguais\n");
		else
			printf("Não são iguais\n");
	
	return 0;
}

//EXERCÍCIO 6:

#include <stdio.h>

int main(){

  char completo[40];
  char nome[20];
  int n = 0, i;
  
  	while(1){
	
	completo[n] = getchar();
	if (completo[n] == '\n')
		break;
	n += 1;
}
	printf("\nNome:");
	for (i = 0; i <= n; i++) {
		if (completo[i] == ' ')
			break;
		else{
			nome[i] = completo[i];
			printf("%c",nome[i]);}
	}

	printf("\nSobrenome:");
	for (i = n - i; i <= n; i++) {
		printf("%c",completo[i]);
	}
    return 0;
}

//EXERCÍCIO 7:

#include <stdio.h>

int main(){
	
	char nome[50];
	char c;
	int pos;

	setbuf(stdin,NULL);
	
	pos = 0;
	c = getchar();

	while (c != '\n') {
		nome[pos] = c;
		pos++;
		c = getchar();
		
}	nome[pos] = '\0';

			printf("%s", nome);

	return 0;
}

//o %s lê o vetor de caracters e armazena os valores respctivos do vetor
// até achar um \0, coloquei nome[pos]='\0' para ele ter fim logo após a leitura

**************/



	

