//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//LISTA 2.3 - STRINGS

//EXERCÍCIO 1:
/*

#include <stdio.h>
#include <>

int main(){
	
	char nome[50];
	printf("<<Vetor Char>>\n");
	
	printf("Digite um nome:");
	gets(nome);
	
	printf("\nO nome digitado eh: %s", nome);

return 0;	
} 
*/

//EXERCÍCIO 2:

/*

#include <stdio.h>
#include <string.h>


int main(){
	char nome[50];

	printf("<<Vetor de Char>>\n");
	printf("Digite um nome:");
	gets(nome);

	printf("\nO nome digitado eh:%s", strlwr(nome));
	printf("\nO nome digitado eh:%s", strupr(nome));

return 0;	
} 
*/


//EXERCÍCIO 3:

/*

#include <stdio.h>
#include <string.h>

int main(){
	char nome[50], nomeCompara[50];

	printf("<<Compara Nomes>>\n");
	printf("Digite o nome 1:");
	gets(nome);

	printf("Digite o nome 2:");
	gets(nomeCompara);

	if (strcmp(nome, nomeCompara) == 0) {
		printf("Os nomes digitados sao iguais");
}
	else {
		printf("\nOs nomes digitados sao diferentes");
}
return 0;	
} 
*/

//EXERCÍCIO 4:

/*

#include <stdio.h>
#include <string.h>

int main(){

	char nome[50], nomeCompara[50];

	printf("<< Compara nomes>>\n");
	printf("Entre com o nome 1:");
	gets(nome);

	printf("Entre com o nome 2:");
	gets(nomeCompara);

	if (strcasecmp(nome,nomeCompara) == 0){
		printf("Os nomes sao iguais");
}
	else {
		printf("Os nomes sao diferentes");
}

return 0;	
} 
*/

//EXERCÍCIO 5:

/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char nome[40],sobrenome[40], inteiro[50];

	printf("<<Vetor de Char>>\n");
	printf("Digite o nome e sobrenome: ");
	gets(inteiro);

	char *ptr = strtok(inteiro, " ");

	for (int i = 0; i < 2; i++) {
		printf("%s\n", ptr);
}


return 0;	
} 
*/

//EXERCÍCIO 6:

/*

#include <stdio.h>
#include <string.h>

int main(){
	char palavra[40];

	printf("Digite o nome:");
	gets(palavra);
	
	int strLength = strlen(palavra);

	for (int i = 0; i < strLength; i++){
		printf("\n%da letra: %c\n",i+1 ,palavra[i]);
  }


return 0;	
} 
*/

//EXERCÍCIO 7:

/*

#include <stdio.h>
#include <string.h>

int main(){
	
int i, j, lenv;
	char frase[100], vogais[] = "aeiouAEIOU";
	
	printf("Digite a string:");
	
	lenv = strlen(vogais);
	gets(frase);
	printf("\n");

	for (i = 0; i < strlen(frase); i++){
        for (j = 0; j < lenv; j++)
            if (frase[i] == vogais[j])
                break;
			if (j == lenv)
				printf("%c", frase[i]);
    }

return 0;	
} 
*/

//EXERCÍCIO 8:

/*

#include <stdio.h>
#include <string.h>

int main(){
	


return 0;	
} 
*/

//EXERCÍCIO 9:

/*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	
	int x, tam;
	char nome[30];

	printf("Digite uma palavra:");
	gets(nome);
	tam = strlen(nome);

	printf("\n A palavra de tras pra frente eh:");
	for (x=tam-1; x >= 0; x--)
	printf("%c",nome[x]);
	printf("\n\n");


return 0;
}
*/

//EXERCÍCIO 10:

/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	 int i, valor = 0;
	 char palavra[15], inversa[15];

	printf("\nDigite uma palavra: ");
	gets(palavra);

	for(i = 0; palavra[i]; i++){
		palavra[i] = tolower(palavra[i]);
}

	strcpy(inversa, palavra);

	strrev(inversa);

	valor = strcmp(palavra, inversa);
	
	if (valor == 0)
		printf("\nA palavra %s eh um palindromo\n", palavra); 
	else
		printf("\nA palavra %s nao eh um palindromo\n", palavra);



return 0;	
} 
*/

//EXERCICIO 11
/* A)
Tem como funcao ver se o usuario digitou uma senha certa
caso ao contrario ele recebe a mensagem de acesso engado	
	B)O programa printa na tela acesso liberado
	C)a-Acesso Negado
	  b-acesso liberado mas senha errada
	  c- mesma coisa
	D)Por causa que o programa so verifica se os primeiros 4 caracteres sao iguais
*/
