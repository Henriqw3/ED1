// HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
// Primeira Lista Estrutura de dados
//To execute remove /**/ one by one
/*

// EXERCÍCIO 1:
#include <stdio.h>

int main(){
	
	int i = 10;
	
	while(!(i < 0)){

		printf("%d..", i);
		i--;
	}
		printf(".end");
	return 0;
}


// EXERCÍCIO 2:
#include <stdio.h>

int main(){
	
	int i = 10;
	
	do{
		printf("%d..", i);
		i--;
	}while(!(i < 0));
	printf(".FIM");

	return 0;
}
 
// EXERCÍCIO 3:
#include <stdio.h>

int main(){
	
	int i;
	
	for(i = 10; i >= 0; i--){
		printf("%d..", i);
	}
	printf(".FIM");
	return 0;
}
// EXERCÍCIO 4:
#include <stdio.h>

int main(void){
	
	int n = 0;
	printf("Qual o número inicial?\n");
	scanf("%d", &n);
	
	while(n >= 0){
		printf("%d..",n);
		n--;
	}
	printf(".FIM");
}

// EXERCÍCIO 5:
#include <stdio.h>

int main(void){
	
	int n = 0;
	printf("Qual o número inicial?\n");
	scanf("%d", &n);
	
	do{
		printf("%d..",n);
			n--;
	}while(n >= 0);
	
	printf(".FIM");
}

// EXERCÍCIO 6:
#include <stdio.h>

int main(){
	
	int n = 0;
	printf("Qual o número inicial?\n");
	scanf("%d",&n);
	
	for(int i = 0;i <= n; i++){
		printf("%d..",i);
	}
	printf(".FIM");
	return 0;
}

// EXERCÍCIO 7:
#include <stdio.h>

int main(){
	
	int n, i = 0;
	printf("Qual o número inicial?\n");
	scanf("%d",&n);
	
	while(i <= n){
		printf("%d..",i);
		i++;
	}
	printf(".FIM");
	return 0;
}

// EXERCÍCIO 8:
#include <stdio.h>

int main(){
	
	int n, i = 0;
	printf("Qual o número inicial?\n");
	scanf("%d",&n);
	
	do{
		printf("%d..",i);
		i++;
	}while(i <= n);
	printf(".FIM");
	return 0;
}

// EXERCÍCIO 9:
#include <stdio.h>

int main(){
	
	int n = 0;
	printf("Qual o número inicial?\n");
	scanf("%d",&n);
	
	for(int i = 0;i <= n; i++){
		printf("%d..",i);
	}
	printf(".FIM");
	return 0;
}

// EXERCÍCIO 10:
#include <stdio.h>

int main(){
	 
	int n, i, soma = 0;
	printf("Quantos números deseja somar?");
	scanf("%d",&n);
	
	while(i<=n){
		soma =+ soma + i;
		i++;
	}
	printf("A soma dos %d primeiros números naturais é: %d", n, soma);
	return 0;
}
// EXERCÍCIO 11:
#include <stdio.h>

int main(){
	 
	int n, i, soma = 0;
	printf("Quantos números deseja somar?");
	scanf("%d",&n);
	
	do{
		soma =+ soma + i;
		i++;
	}while(i<=n);
	
	printf("A soma dos %d primeiros números naturais é: %d", n, soma);
	
	return 0;
}

// EXERCÍCIO 12:
#include <stdio.h>

int main(){
	 
	int n, soma = 0;
	printf("Quantos números deseja somar?");
	scanf("%d",&n);
	
	for(int i = 0; i <= n; i++)
 		soma =+ soma + i;
	
	printf("A soma dos %d primeiros números naturais é: %d", n, soma);
	return 0;
}

// EXERCÍCIO 13:
#include <stdio.h>

int main(){
	
	unsigned n, j, i = 0;
	int auxi, auxj = 0;
	printf("Entre com o valor de n:");
	scanf("%d",&n);
	printf("Entre com o valor de i:");
	scanf("%d",&i);
	printf("Entre com o valor de j:");
	scanf("%d",&j);
	
	for(int k = 0; k < n; k++){
		
		if(auxi * i == auxj * j){
			if(auxi * i == 0){
				printf("Os múltiplos de i ou j são: %u", auxj * j);
			}
			else{
				printf(",%u", auxj * j);
			}
			auxj++;
			auxi++;
		}
			else
				if(auxi*i > auxj * j){
					printf(",%u", auxj * j);
					auxj++;
				}
			else{
				printf(",%u", auxi*i);
				auxi++;
			}
	}printf("\n");
	
	return 0;
}

// EXERCÍCIO 14:
#include <stdio.h>

int main(){
	
	unsigned n = 0;
	int ndiv = 0;
	printf("Entre com o valor:");
	scanf("%u", &n);
	
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
			ndiv =+ ndiv + 1;
	}
	if(ndiv > 2)
		printf("O numero %d nao eh Primo", n);
	else
		printf("O numero %d eh Primo", n);

	return 0;
}

// EXERCÍCIO 15:
#include <stdio.h>
#include <math.h>

int main(){	
	
	int n,bin, dec,bit = 0;
	printf("Entre com o número de bits:");
	scanf("%d",&n);
	int aux = 1;
	for(int i = n; i > 0;i--, aux++){
		printf("Digite o bit #%d:",aux);
		scanf("%d",&bin);
		dec += bin*pow(2, i-1);
		bit += bin*pow(10, i-1);
	}
	printf("O número binário %d em decimal é %d",bit, dec);
	return 0;
}

// EXERCÍCIO 16:
#include <stdio.h>
#include <math.h>

int main(){
	
	double pos = 2;
	int i = 2;
	
	while(i <= 128){
		pos = pow(pos, 2);
		printf("Com %d bits eh possivel enderecar %.lf posicoes de memoria\n", i, pos);
		i = i*2;
	}
	
	
	return 0;
}

// EXERCÍCIO 17:
#include <stdio.h>

int main(void){
	
	char key = 'w';
	char op = '\0';

	
	for(int i = 5; i > 0; i--){
		printf("Qual a letra?");
		scanf("%c", &op);
		getchar();
		
		if(op != key){
			printf("\nErrado! Você tem mais %d chances\n", i);
		}
		else{
			printf("ACERTOU!");
			return 0;
	}
}
}

// EXERCÍCIO 18:
#include <stdio.h>

void menu(){
		printf("\n<< Conversor >>				\n"
			"Digite uma opção\n"
			"1 - para converter de km/h para m/s\n"
			"2 - para converter de m/s para hm/h\n"
			"q - para sair\n\n");
}

int main(void){
	
	int opt = 0;
	double result, vel = 0;

	menu();
	
	scanf("%d", &opt);
	
	switch(opt){
		case 1:
				printf("Digite a velocidade (km/h):");
				scanf("%lf", &vel);

				result = vel / 3.6;
				printf("A velocidade em m/s é %lf\n",result);
				menu();
				break;
		
		case 2:
				printf("Digite a velocidade (m/s):");
				scanf("%lf", &vel);
				result = vel * 3.6;
				
				printf("A velocidade em km/h é %lf\n", result);
				menu();
				break;
		default:
				return 0;
				break;
	}
}

// EXERCÍCIO 19:
#include <stdio.h>

int main(){
	
	int jose = 50000;
	int carlos = 25000;
	int acum = 0;
	
	while(carlos<jose){
		carlos += 3000;
		jose += 800;
		acum +=acum + 1;
	}
	printf("Carlos ficara com mais dinheiro que o José em %d\n",acum/12 );
		
	
	return 0;
}


// EXERCÍCIO 20:
#include <stdio.h>

int main(){
	int n = 0;
	int r = 1;
	printf("Entre com um número:");
	scanf("%d",&n);
	
	for(int linha = 1; linha <= n ; linha++ ){
		for(int coluna = 0; coluna < linha; coluna++, r++)
			printf("%d ", r);
		printf("\n");
	}
	
	return 0;
}


// EXERCÍCIO 21:
#include <stdio.h>
#define LIM 10

int main(){
	
	int fat = 1;
	
	printf("<<Fatorial>>\n");

	for(int i = 1; i <= LIM; i++){
		fat *= i;
	printf("%d! = %d\n", i, fat);
	}

return 0;
}

// EXERCÍCIO 22:
#include <stdio.h>
#define LIM 15

int main(){
	
	long int fat = 1;
	
	printf("<<Fatorial>>\n");

	for(int i = 1; i <= LIM; i++){
		fat *= i;
	printf("%d! = %ld\n", i, fat);
	}

return 0;
}//O erro se dá devido a utilização do int que não suporta a quantidade gerada pelo 
 //número até 15 fatorial, estourando a variável

// EXERCÍCIO 23:
#include <stdio.h>

int main(){
	
	int n = 0;
	printf("Entre com o número de termos:");
	scanf("%d",&n);
	int i, j;
	float f, e = 1.0;
	
	for(i = 1; i <= n;i++){
		f = 1;
		for(j = 1; j <= i; j++){
			f = f * j;}
		e = e + 1.0/f;
	}
	printf("E = %f\n", e);
	return 0;
} 
*/
