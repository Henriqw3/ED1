//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//LISTA 2.1 - VETORES

/**************

//EXERCÍCIO 1:

#include <stdio.h>

int main(void){
	
	int VT[5] = {0};
	printf("<< Listando um vetor >>\n");
	printf("Entre com o número 1:");
	scanf("%d", &VT[0]);
	printf("Entre com o número 2:");
	scanf("%d", &VT[1]);
	printf("Entre com o número 3:");
	scanf("%d", &VT[2]);
	printf("Entre com o número 4:");
	scanf("%d", &VT[3]);
	printf("Entre com o número 5:");
	scanf("%d", &VT[4]);
	printf("Entre com o número 6:");
	scanf("%d", &VT[5]);
	
	//Usando vetor sem loop
	
	printf("Os valores lidos são:%d %d %d %d %d %d",VT[0], VT[1], VT[2], VT[3], VT[4], VT[5]);
}

//EXERCÍCIO 2:

#include <stdio.h>
#define TAM 6

int main(){
	
	int VT[TAM] = {0};
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%d",&VT[i]);
	}
	printf("Os valores lidos sao:");
	for(i = 0; i < TAM; i++)
		printf("%d ", VT[i]);
	return 0;
}

//EXERCÍCIO 3:

#include <stdio.h>
#define TAM 6

int main(){
	
	int VT[TAM] = {0};
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%d",&VT[i]);
	}
	printf("A ordem inversa dos numeros eh:");
	for(i = 5; i >= 0; i--)
		printf("%d ", VT[i]);
	
	return 0;
}


//EXERCÍCIO 4:

#include <stdio.h>
#define TAM 6

int main(){
	
	int VT[TAM] = {0};
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%d",&VT[i]);
		if(VT[i] % 2 != 0){
			printf("Erro: Valor inválido\n");
			i--;}
	}
	printf("Os numeros pares digitados foram:");
	for(i = 0; i < TAM; i++)
		printf("%d ", VT[i]);
	return 0;
}


//EXERCÍCIO 5:

#include <stdio.h>
#define TAM 5

int main(){
	
	double VT[TAM] = {0};
	double maior,menor;
	double media = 0.0;
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%lf",&VT[i]);
		media += VT[i];
	}
	menor = VT[0];
	maior = VT[0];
	
	for(i = 0; i < TAM; i++){
		if(maior < VT[i])
			maior = VT[i];
		if(menor > VT[i])
			menor = VT[i];
			
	}
	printf("Os numeros digitados sao:");
	for(i = 0; i < TAM; i++){
		printf("%.0lf ", VT[i]);}
	
	printf("\nO maior valor eh:%.2lf\n",maior);
	printf("O menor valor eh:%.2lf\n",menor);
	printf("A media eh:%.2lf\n", media/TAM);
	
	return 0;
}

//EXERCÍCIO 6:

#include <stdio.h>
#define TAM 5

int main(){
	
	double VT[TAM] = {0};
	double maior,menor;
	int p_menor, p_maior;
	double media = 0.0;
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%lf",&VT[i]);
		media += VT[i];
	}
	menor = VT[0];
	maior = VT[0];
	
	for(i = 0; i < TAM; i++){
		if(maior < VT[i]){
			maior = VT[i];
			p_maior = i;
		}
		if(menor > VT[i]){
			menor = VT[i];
			p_menor = i;
		}
	}
	printf("Os numeros digitados sao:");
	for(i = 0; i < TAM; i++){
		printf("%.0lf ", VT[i]);}
	
	printf("\nO maior valor eh:%.2lf localizado na posicao %d do vetor\n",maior, p_maior);
	printf("O menor valor eh:%.2lf localizado na posicao %d do vetor\n",menor, p_menor);
	printf("A media eh:%.2lf\n", media/TAM);
	
	return 0;
}

//EXERCÍCIO 7:

#include <stdio.h>
#define TAM 5

int main(){
	
	int ALUN[TAM] = {0};
	int i;
	
	printf("<<Normalizando as notas>>\n");
	for(i = 0; i < TAM; i++){
		printf("Entre com a nota do aluno %d:", i+1);
		scanf("%d",&ALUN[i]);
	}
	printf("\nNotas normalizadas\n");
	for(i = 0; i < TAM; i++){
		printf("A nota do aluno %d eh %d\n", i+1, ALUN[i]*2);
	}
	
	return 0;
}

//EXERCÍCIO 8:

#include <stdio.h>
#include <math.h>
#define TAM 5

int main(void){

	double TERM[TAM] = {0};
	double media, soma_term = 0.0; 
	double desvio = 0.0;
	int i;

	printf("<< Media e desvio-padrao >>\n");
	for(i = 0; i < TAM; i++){
		printf("\nDigite o valor %d:", i+1);
		scanf("%lf", &TERM[i]);
		media += TERM[i];//soma da media
	}
	media = media/TAM;
	

	for(i = 0; i < TAM; i++){
//		soma_term = soma_term + pow((TERM[i] - media),2);
		soma_term = soma_term + (TERM[i] - media)*(TERM[i] - media);
	}
	soma_term = soma_term/(TAM-1);
	desvio = sqrt(soma_term);
	
	printf("\n\nA Media eh %.1lf e o desvio padrao eh %lf\n", media, desvio);

return 0;
}

#include <stdio.h>
#define MAX 100

int main (void){
	
	double ALUNOS[MAX] = {0.0};
	double media = 0.0;
	int n_alunos = 0;
	int i;
	printf("<< Media de n alunos. Maximo 100 alunos >>\n");
	printf("Entre com o numero de alunos:");
	scanf("%d", &n_alunos);
	while(n_alunos > MAX){
		printf("\nErro! O numero maximo de alunos permitido eh 100.\n"
						"Digite novamente:");
		scanf("%d", &n_alunos);
	}
	
	for(i = 0; i < n_alunos; i++){
		printf("\nDigite a nota do aluno %d:",i+1);
		scanf("%lf", &ALUNOS[i]);
		media += ALUNOS[i];
	}
	printf("\n");
	media = media/n_alunos;
	for(i = 0;i < n_alunos; i++){
		printf("A nota do aluno %d eh: %.1lf\n", i+1, ALUNOS[i]);
	}
	printf("A media da turma eh:%.1lf", media);
	
	
return 0;	
}

//EXERCÍCIO 10:

#include <stdio.h>
#define TAM 3

int main(void){
	int A[TAM], B[TAM], C[TAM] = {0};
	int i;
	printf("<< Subtracao de vetores >>\n");
	for(i = 0; i < TAM;i++){
		printf("Digite o valor %d de A:", i+1);
		scanf("%d", &A[i]);
	}printf("\n");
	for(i = 0; i < TAM; i++){
		printf("Digite o valor %d de B:", i+1);
		scanf("%d", &B[i]);
	}
	printf("O vetor C, definido como C = A-B eh (");
	for(i = 0; i < TAM; i++){
		C[i] = A[i] - B[i];
		printf("%d, ",C[i]);
	}printf(")");
}

//EXERCÍCIO 11:

#include <stdio.h>
#define MAX 5

int main(void){
	int v[MAX], v1[MAX], v2[MAX] = {0};
	int i;
	
	printf("<< Pares e Ímpares >>\n");
	for(i = 0; i < MAX; i++){
		printf("\nDigite o valor %d:", i+1);
		scanf("%d", &v[i]);
	}
	printf("\nImpares: ");
	for(i = 0; i < MAX; i++){
		if(v[i] % 2 != 0){
			v1[i] = v[i];
			printf("%d ",v1[i]);
		}
	}

	printf("\nPares: "); 
	for(i = 0; i < MAX; i++){
		if(v[i] % 2 == 0){
			v2[i] = v[i];
			printf("%d ",v2[i]);
		}
	}
}

//EXERCÍCIO 12:

#include <stdio.h>

int main(void){
	int BOLL[4] = {0};
	float total;
	int maior = BOLL[0];
	float prob_green, prob_blue, prob_yellow, prob_red;
	
	printf("<<Probabilidades>>\n");
	printf("Digite a quantidade de bolinhas:\n");
	
	printf("Verde: ");
	scanf("%d", &BOLL[0]);
	
	printf("Azul: ");
	scanf("%d", &BOLL[1]);
	
	
	printf("Amarela: ");
	scanf("%d", &BOLL[2]);
	
	printf("Vermelha: ");
	scanf("%d", &BOLL[3]);
	
	for(int i = 0; i < 4; i++){
		if(BOLL[i] > maior){
			maior = BOLL[i];
		}
	}
	
	
	total = BOLL[0] + BOLL[1] + BOLL[2] + BOLL[3];
	prob_green = (BOLL[0]/total)*100.0;
	prob_blue = (BOLL[1]/total)*100.0;
	prob_yellow = (BOLL[2]/total)*100.0;
	prob_red = (BOLL[3]/total)*100.0;
	
	printf("\nProbabilidades\n");
	
	
	if(BOLL[0] == maior){
	printf("Verde: %.1f%% << Maior probabilidade\n", prob_green);
	}
	else if(BOLL[0] != maior){
		printf("Verde: %.1f%%\n", prob_green);
	}
	
	if(BOLL[1] == maior){
		printf("Azul: %.1f%% << Maior probabilidade\n", prob_blue);
	}
	else if(BOLL[1] != maior){
		printf("Azul: %.1f%%\n", prob_blue);
	}
	
	if(BOLL[2] == maior){
		printf("Amarela: %.1f%% << Maior probabilidade\n", prob_yellow);
	}
	else if(BOLL[2] != maior){
		printf("Amarela: %.1f%%\n", prob_yellow);
	}
	
	if(BOLL[3] == maior){
		printf("Vermelha: %.1f%% << Maior probabilidade\n", prob_red);
	}
	else if(BOLL[3] != maior){
		printf("Vermelha: %.1f%%\n", prob_red);
	}
	
		
	return 0;
}

//EXERCÍCIO 13:

#include <stdio.h>
#define MAX 5

int main(void){
	int V[MAX] = {0};
	int i;
	
	printf("<<Zerando Negativos>>\n");
	
	for(i = 0; i < MAX; i++){
	
		printf("Entre com o numero %d: ",i+1);
		scanf("%d", &V[i]);
		if(V[i] < 0)
			V[i] = 0;
	}
	printf("Zerando os negativos, obtem-se:");
	for(i = 0; i < MAX; i++)
		printf("%d ",V[i]);
	return 0; 
}

//EXERCÍCIO 14:

#include <stdio.h>
#define LMT 10000

int main(void){
	
	int n = 0;
	printf("<< Universidade X >>\n"
		   "Quantos alunos serao cadastrados?: ");
	scanf("%d", &n);
	while(n > LMT){
		printf("limite de alunos eh 10000\n"
			  "Digite novamente\nQuantos alunos serao cadastrados?:");
		scanf("%d", &n);
	}
	int numero[n];
	char classe[n];
	float cra[n];

	int i;
	
	for(i = 0; i < n; i++){
		printf("\nEntre com o numero do aluno %d: ", i+1);
		scanf("%d",&numero[i] );

		printf("Entre com a classe social do aluno %d: ", i+1);
		scanf(" %c", &classe[i]);
		
		printf("Entre com o CRA do aluno %d: ", i+1);
		scanf("%f", &cra[i]);
	}

	printf("\n==== Alunos cadastrados ====\n");
	for(i = 0;i < n; i++){
		printf("Numeros: %d Classe Social: %c CRA: %.1f\n",numero[i] ,classe[i] ,cra[i]);
	}
	return 0;
}

//EXERCÍCIO 15:

#include <stdio.h>
#define MAX 8

int main(void){
	
	int vet[MAX] = {0};
	int i;
	
	for(i = 0; i < MAX; i++){
		printf("Entre com um número %d:", i);
		scanf("%d", &vet[i]);
		for 
		
}


//EXERCÍCIO 16:


***************/
/*
#include <stdio.h>
#define MAX 8 

int main(void){
	
	int vet[MAX] = {0};
	int rep = 0;
	int i;
	
	printf("<<Valores Iguais>>\n");
	
	for(i = 0; i < MAX; i++){
		printf("Entre com o numero %d:",i);
		scanf("%d", &vet[i]);
	}
	for(i = 0; i < MAX; i++){
		if(vet[i] == rep)
	
	}
}

*/

//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//LISTA 2.1 - VETORES

/**************

//EXERCÍCIO 1:

#include <stdio.h>

int main(void){
	
	int VT[5] = {0};
	printf("<< Listando um vetor >>\n");
	printf("Entre com o número 1:");
	scanf("%d", &VT[0]);
	printf("Entre com o número 2:");
	scanf("%d", &VT[1]);
	printf("Entre com o número 3:");
	scanf("%d", &VT[2]);
	printf("Entre com o número 4:");
	scanf("%d", &VT[3]);
	printf("Entre com o número 5:");
	scanf("%d", &VT[4]);
	printf("Entre com o número 6:");
	scanf("%d", &VT[5]);
	
	//Usando vetor sem loop
	
	printf("Os valores lidos são:%d %d %d %d %d %d",VT[0], VT[1], VT[2], VT[3], VT[4], VT[5]);
}

//EXERCÍCIO 2:

#include <stdio.h>
#define TAM 6

int main(){
	
	int VT[TAM] = {0};
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%d",&VT[i]);
	}
	printf("Os valores lidos sao:");
	for(i = 0; i < TAM; i++)
		printf("%d ", VT[i]);
	return 0;
}

//EXERCÍCIO 3:

#include <stdio.h>
#define TAM 6

int main(){
	
	int VT[TAM] = {0};
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%d",&VT[i]);
	}
	printf("A ordem inversa dos numeros eh:");
	for(i = 5; i >= 0; i--)
		printf("%d ", VT[i]);
	
	return 0;
}


//EXERCÍCIO 4:

#include <stdio.h>
#define TAM 6

int main(){
	
	int VT[TAM] = {0};
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%d",&VT[i]);
		if(VT[i] % 2 != 0){
			printf("Erro: Valor inválido\n");
			i--;}
	}
	printf("Os numeros pares digitados foram:");
	for(i = 0; i < TAM; i++)
		printf("%d ", VT[i]);
	return 0;
}


//EXERCÍCIO 5:

#include <stdio.h>
#define TAM 5

int main(){
	
	double VT[TAM] = {0};
	double maior,menor;
	double media = 0.0;
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%lf",&VT[i]);
		media += VT[i];
	}
	menor = VT[0];
	maior = VT[0];
	
	for(i = 0; i < TAM; i++){
		if(maior < VT[i])
			maior = VT[i];
		if(menor > VT[i])
			menor = VT[i];
			
	}
	printf("Os numeros digitados sao:");
	for(i = 0; i < TAM; i++){
		printf("%.0lf ", VT[i]);}
	
	printf("\nO maior valor eh:%.2lf\n",maior);
	printf("O menor valor eh:%.2lf\n",menor);
	printf("A media eh:%.2lf\n", media/TAM);
	
	return 0;
}

//EXERCÍCIO 6:

#include <stdio.h>
#define TAM 5

int main(){
	
	double VT[TAM] = {0};
	double maior,menor;
	int p_menor, p_maior;
	double media = 0.0;
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Entre com o numero %d:", i+1);
		scanf("%lf",&VT[i]);
		media += VT[i];
	}
	menor = VT[0];
	maior = VT[0];
	
	for(i = 0; i < TAM; i++){
		if(maior < VT[i]){
			maior = VT[i];
			p_maior = i;
		}
		if(menor > VT[i]){
			menor = VT[i];
			p_menor = i;
		}
	}
	printf("Os numeros digitados sao:");
	for(i = 0; i < TAM; i++){
		printf("%.0lf ", VT[i]);}
	
	printf("\nO maior valor eh:%.2lf localizado na posicao %d do vetor\n",maior, p_maior);
	printf("O menor valor eh:%.2lf localizado na posicao %d do vetor\n",menor, p_menor);
	printf("A media eh:%.2lf\n", media/TAM);
	
	return 0;
}

//EXERCÍCIO 7:

#include <stdio.h>
#define TAM 5

int main(){
	
	int ALUN[TAM] = {0};
	int i;
	
	printf("<<Normalizando as notas>>\n");
	for(i = 0; i < TAM; i++){
		printf("Entre com a nota do aluno %d:", i+1);
		scanf("%d",&ALUN[i]);
	}
	printf("\nNotas normalizadas\n");
	for(i = 0; i < TAM; i++){
		printf("A nota do aluno %d eh %d\n", i+1, ALUN[i]*2);
	}
	
	return 0;
}

//EXERCÍCIO 8:

#include <stdio.h>
#include <math.h>
#define TAM 5

int main(void){

	double TERM[TAM] = {0};
	double media, soma_term = 0.0; 
	double desvio = 0.0;
	int i;

	printf("<< Media e desvio-padrao >>\n");
	for(i = 0; i < TAM; i++){
		printf("\nDigite o valor %d:", i+1);
		scanf("%lf", &TERM[i]);
		media += TERM[i];//soma da media
	}
	media = media/TAM;
	

	for(i = 0; i < TAM; i++){
//		soma_term = soma_term + pow((TERM[i] - media),2);
		soma_term = soma_term + (TERM[i] - media)*(TERM[i] - media);
	}
	soma_term = soma_term/(TAM-1);
	desvio = sqrt(soma_term);
	
	printf("\n\nA Media eh %.1lf e o desvio padrao eh %lf\n", media, desvio);

return 0;
}

#include <stdio.h>
#define MAX 100

int main (void){
	
	double ALUNOS[MAX] = {0.0};
	double media = 0.0;
	int n_alunos = 0;
	int i;
	printf("<< Media de n alunos. Maximo 100 alunos >>\n");
	printf("Entre com o numero de alunos:");
	scanf("%d", &n_alunos);
	while(n_alunos > MAX){
		printf("\nErro! O numero maximo de alunos permitido eh 100.\n"
						"Digite novamente:");
		scanf("%d", &n_alunos);
	}
	
	for(i = 0; i < n_alunos; i++){
		printf("\nDigite a nota do aluno %d:",i+1);
		scanf("%lf", &ALUNOS[i]);
		media += ALUNOS[i];
	}
	printf("\n");
	media = media/n_alunos;
	for(i = 0;i < n_alunos; i++){
		printf("A nota do aluno %d eh: %.1lf\n", i+1, ALUNOS[i]);
	}
	printf("A media da turma eh:%.1lf", media);
	
	
return 0;	
}

//EXERCÍCIO 10:

#include <stdio.h>
#define TAM 3

int main(void){
	int A[TAM], B[TAM], C[TAM] = {0};
	int i;
	printf("<< Subtracao de vetores >>\n");
	for(i = 0; i < TAM;i++){
		printf("Digite o valor %d de A:", i+1);
		scanf("%d", &A[i]);
	}printf("\n");
	for(i = 0; i < TAM; i++){
		printf("Digite o valor %d de B:", i+1);
		scanf("%d", &B[i]);
	}
	printf("O vetor C, definido como C = A-B eh (");
	for(i = 0; i < TAM; i++){
		C[i] = A[i] - B[i];
		printf("%d, ",C[i]);
	}printf(")");
}

//EXERCÍCIO 11:

#include <stdio.h>
#define MAX 5

int main(void){
	int v[MAX], v1[MAX], v2[MAX] = {0};
	int i;
	
	printf("<< Pares e Ímpares >>\n");
	for(i = 0; i < MAX; i++){
		printf("\nDigite o valor %d:", i+1);
		scanf("%d", &v[i]);
	}
	printf("\nImpares: ");
	for(i = 0; i < MAX; i++){
		if(v[i] % 2 != 0){
			v1[i] = v[i];
			printf("%d ",v1[i]);
		}
	}

	printf("\nPares: "); 
	for(i = 0; i < MAX; i++){
		if(v[i] % 2 == 0){
			v2[i] = v[i];
			printf("%d ",v2[i]);
		}
	}
}

//EXERCÍCIO 12:

#include <stdio.h>

int main(void){
	int BOLL[4] = {0};
	float total;
	int maior = BOLL[0];
	float prob_green, prob_blue, prob_yellow, prob_red;
	
	printf("<<Probabilidades>>\n");
	printf("Digite a quantidade de bolinhas:\n");
	
	printf("Verde: ");
	scanf("%d", &BOLL[0]);
	
	printf("Azul: ");
	scanf("%d", &BOLL[1]);
	
	
	printf("Amarela: ");
	scanf("%d", &BOLL[2]);
	
	printf("Vermelha: ");
	scanf("%d", &BOLL[3]);
	
	for(int i = 0; i < 4; i++){
		if(BOLL[i] > maior){
			maior = BOLL[i];
		}
	}
	
	
	total = BOLL[0] + BOLL[1] + BOLL[2] + BOLL[3];
	prob_green = (BOLL[0]/total)*100.0;
	prob_blue = (BOLL[1]/total)*100.0;
	prob_yellow = (BOLL[2]/total)*100.0;
	prob_red = (BOLL[3]/total)*100.0;
	
	printf("\nProbabilidades\n");
	
	
	if(BOLL[0] == maior){
	printf("Verde: %.1f%% << Maior probabilidade\n", prob_green);
	}
	else if(BOLL[0] != maior){
		printf("Verde: %.1f%%\n", prob_green);
	}
	
	if(BOLL[1] == maior){
		printf("Azul: %.1f%% << Maior probabilidade\n", prob_blue);
	}
	else if(BOLL[1] != maior){
		printf("Azul: %.1f%%\n", prob_blue);
	}
	
	if(BOLL[2] == maior){
		printf("Amarela: %.1f%% << Maior probabilidade\n", prob_yellow);
	}
	else if(BOLL[2] != maior){
		printf("Amarela: %.1f%%\n", prob_yellow);
	}
	
	if(BOLL[3] == maior){
		printf("Vermelha: %.1f%% << Maior probabilidade\n", prob_red);
	}
	else if(BOLL[3] != maior){
		printf("Vermelha: %.1f%%\n", prob_red);
	}
	
		
	return 0;
}

//EXERCÍCIO 13:

#include <stdio.h>
#define MAX 5

int main(void){
	int V[MAX] = {0};
	int i;
	
	printf("<<Zerando Negativos>>\n");
	
	for(i = 0; i < MAX; i++){
	
		printf("Entre com o numero %d: ",i+1);
		scanf("%d", &V[i]);
		if(V[i] < 0)
			V[i] = 0;
	}
	printf("Zerando os negativos, obtem-se:");
	for(i = 0; i < MAX; i++)
		printf("%d ",V[i]);
	return 0; 
}

//EXERCÍCIO 14:

#include <stdio.h>
#define LMT 10000

int main(void){
	
	int n = 0;
	printf("<< Universidade X >>\n"
		   "Quantos alunos serao cadastrados?: ");
	scanf("%d", &n);
	while(n > LMT){
		printf("limite de alunos eh 10000\n"
			  "Digite novamente\nQuantos alunos serao cadastrados?:");
		scanf("%d", &n);
	}
	int numero[n];
	char classe[n];
	float cra[n];

	int i;
	
	for(i = 0; i < n; i++){
		printf("\nEntre com o numero do aluno %d: ", i+1);
		scanf("%d",&numero[i] );

		printf("Entre com a classe social do aluno %d: ", i+1);
		scanf(" %c", &classe[i]);
		
		printf("Entre com o CRA do aluno %d: ", i+1);
		scanf("%f", &cra[i]);
	}

	printf("\n==== Alunos cadastrados ====\n");
	for(i = 0;i < n; i++){
		printf("Numeros: %d Classe Social: %c CRA: %.1f\n",numero[i] ,classe[i] ,cra[i]);
	}
	return 0;
}

//EXERCÍCIO 15:

#include <stdio.h>
#define MAX 8

int main(void){
	
	int vet[MAX] = {0};
	int repet[MAX] = {0};
	int i, j;
	
	for(i = 0; i < MAX; i++){
		printf("Entre com um numero %d:", i+1);
		scanf("%d", &vet[i]);
	}
		for(i = 0; i < MAX; i++){
			for(j = 0;j < MAX; j++){
				if(vet[i] == vet[j] && i != j && repet[i] != -1){
					repet[i]++;
					repet[j]--;
				}
			}
		}
		printf("Valores repetidos:");
		for(i = 0; i < MAX; i++){
			if(repet[i] > 0)
			printf("%d ",vet[i]);
		}
}


//EXERCÍCIO 16:

#include <stdio.h>
#define MAX 8

int main(void){
	
	int vet[MAX] = {0};
	int repet[MAX] = {0};
	int i, j;
	int quant[MAX] = {0};
	
	for(i = 0; i < MAX; i++){
		printf("Entre com um numero %d:", i+1);
		scanf("%d", &vet[i]);
	}
		for(i = 0; i < MAX; i++){
			for(j = 0;j < MAX; j++){
				if(vet[i] == vet[j] && i != j && repet[i] != -1){
					repet[i]++;
					repet[j]--;
					quant[i]++;
				}
			}
		}
		printf("Valores repetidos:");
		for(i = 0; i < MAX; i++){
			if(repet[i] > 0)
			printf("%d aparece %d vezes\n",vet[i], quant[i] + 1);
		}
}

***************/


