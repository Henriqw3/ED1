//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//LISTA 4.2 - Funções
//To execute remove /**/ one by one
//EXERCÍCIO 1:

/*

#include <stdio.h>

void desenha_lin(){
	
	int lin = 0;
	scanf("%d",&lin);
	
	for(int i = 0; i < lin; i++){
		printf("=");
	}
}
int main(){
	
	desenha_lin();
	
	return 0;
}

*/

//EXERCÍCIO 2:


/*

#include <stdio.h>

void desenha_lin(int n){
	
	for(int i = 0; i < n; i++){
		printf("=");
	}

}

int main(){
	
	int lin = 0;
	scanf("%d",&lin); 
	
	desenha_lin(lin);
	
	return 0;
}

*/


//EXERCÍCIO 3:

/*
#include <stdio.h>

int fatorial(int n){
	
	int calc = 0;
	
	for(int i = 1; i < n; i++){
		
		calc += n*(n-i);
		n = n - 1;
	}
	return calc;
}

int main(){
	
	int fat = 0;
	
	scanf("%d", &fat);
	
	printf("%d",fatorial(fat));
	
	return 0;
}
*/


//EXERCÍCIO 4:

/*

#include <stdio.h>

int calc_x(int x, int n){
	
	int calc = 1;
	
	for(int i = 0; i < n; i++){
		calc = calc * x;
	}
	return calc;
}

int main(){
	
	int num = 0;
	int elev = 0; 
	
	scanf("%d",&num);
	scanf("%d",&elev);
	
	printf("%d elevado a %d eh: %d",num, elev, calc_x(num, elev)); 
	
	return 0;
}
*/


//EXERCÍCIO 5:


/*
#include <stdio.h>
#include <math.h>

int quad_perfect(int num){
	
	
	if(pow(sqrt(num),2) == num)
		return 1;
	else
		return 0;
	
	 
}

int main(){

	int n;
	
	printf("\nDigite um numero para ver se ele eh quadrado perfeito:");
	scanf("%d", &n);
	
	if(quad_perfect(n) == 1)
		printf("%d eh quadrado perfeito", n);
	else
		printf("%d não eh quadrado perfeito", n);
	
	
	return 0;
}
*/


//EXERCÍCIO 6:

/*
#include <stdio.h>

void serie_nep_taylor(double *e, unsigned int termos){//passado "e" por referência
//Série de Taylor é E = (1/0!) 1 + 1/1!+ 1/2! +... 1/fatN
	double fat, E = 1.0;//primeiro termo E sempre é 1 
	
	for(int i = 1; i <= termos; i++){
		fat = 1;//fat volta a 1 para fazer a próxima base da fórmula
		for(int j = 1; j<=i; j++){//j<=i pois o numero do fat só aumenta a cada termo
			fat = fat * j;//ex termo i = 2 / fatj = 1 * 1 j(1)/fatj = 1 * 2 j(2)
		}
		E = E +1.0/fat;//a cada termo recebe um novo fat e valor 
	}
	*e = E;
}

int main(){
	
	double e = 0.0;
	unsigned int n_termos;
	
	printf("Qual o número de termos:");
	scanf("%u", &n_termos);

	serie_nep_taylor(&e, n_termos);//passado 'e'por referencia
	
	printf("%lf",e);
	
	
	return 0;
}

*/

//EXERCÍCIO 7:

/*
#include <stdio.h>

void troque(float *a, float *b){

	float c = *a;

	*a = *b;
	*b = c;
}

int main(){

	float A, B = 0.0;

	printf("\nDigite o A:");
	scanf("%f", &A);
	printf("Digite o B:");
	scanf("%f", &B);

	troque(&A, &B);

	printf("\nA troca de A por B eh:\nA = %.2f\nB = %.2f\n",A, B);

	return 0;
}
*/

//EXERCÍCIO 8:
/*

#include <stdio.h>

double incp(double x, double y){

	if(x >= 0.0)
		x += (x * y) / 100;
	else
		x -= (x * y) / 100;

return x;
}

int main(){

	double x;//valor total 
	double y;//valor de alteração em porcentagem de x

	printf("Digite o valor total (X):");
	scanf("%lf", &x);
	printf("Digite o valor de alteracao em % (Y):");
	scanf("%lf", &y);

	printf("X alterado (%2.flf)", incp(x,y));

	return 0;
}

*/

//EXERCÍCIO 9:

/*

#include <stdio.h>

#include <stdio.h>

void incp(double *x, double *y){

	if(*x >= 0.0)
		*x += (*x * *y) / 100;
	else
		*x -= (*x * *y) / 100;
}

int main(){

	double x;//valor total 
	double y;//valor de alteração em porcentagem de x

	printf("Digite o valor total (X):");
	scanf("%lf", &x);
	printf("Digite o valor de alteracao em % (Y):");
	scanf("%lf", &y);

	incp(&x,&y);

	printf("X alterado eh: %.3lf", x);

	return 0;

}
*/


//EXERCÍCIO 10:

/*

#include <stdio.h>

struct pontos{
	int x;
	int y;
};
typedef struct pontos Pontos;

void imprime_pontos(Pontos *pt){

	printf("x =%d\n", pt -> x);
	printf("y =%d\n", pt -> y);
}

int main(){

	Pontos pts;
	Pontos *p = &pts;

	printf("Digite o ponto x:");
	scanf("%d",&pts.x);
	printf("Digite o ponto y:");
	scanf("%d",&pts.y);
	
	imprime_pontos(p);

	return 0;
}

*/
//EXERCÍCIO 11:

/*

#include <stdio.h>

struct pontos{
	int x;
	int y;
};

typedef struct pontos Pontos;

Pontos soma_ponto(Pontos p1, Pontos p2){
	
	Pontos soma;
	
	soma.x = (p1.x + p2.x);
	soma.y = (p1.y + p2.y);
return soma;
}

int main(){

	Pontos P1, P2, P3;
	
	printf("Insere x:");
	scanf("%d", &P1.x);
	printf("Insere y:");
	scanf("%d", &P1.y);

	printf("Insere x:");
	scanf("%d", &P2.x);
	printf("Insere y:");
	scanf("%d", &P2.y);
	
	P3 = soma_ponto(P1,P2);
	
	printf("A soma de(%d,%d) e (%d,%d) eh (%d,%d)",P1.x,P1.y,P2.x,P2.y,P3.x,P3.y);
	return 0;
}
*/



//EXERCÍCIO 12:

/*

#include <stdio.h>

struct pontos{
	int x;
	int y;
};

typedef struct pontos Pontos;

void soma_ponto(Pontos p1, Pontos p2,Pontos *p3){
	
	p3->x = (p1.x + p2.x);
	p3->y = (p1.y + p2.y);
}

int main(){

	Pontos P1, P2;
	Pontos P3;
	
	printf("Insere x:");
	scanf("%d", &P1.x);
	printf("Insere y:");
	scanf("%d", &P1.y);

	printf("Insere x:");
	scanf("%d", &P2.x);
	printf("Insere y:");
	scanf("%d", &P2.y);
	
	soma_ponto(P1,P2,&P3);
	
	printf("A soma de(%d,%d) e (%d,%d) eh (%d,%d)",P1.x,P1.y,P2.x,P2.y,P3.x,P3.y);
	return 0;
}
*/


//EXERCÍCIO 13:

/*

#include <stdio.h>

struct pontos{
	double b;
	double h;
};

typedef struct pontos Pontos;

double calc_area(double p1,double p2){
	
	double calc = 0;
	
	calc = p1*p2;
	
	return calc;
}

int main(){
	
	Pontos P1;
	float area = 0;
	
	printf("Insere b:");
	scanf("%lf", &P1.b);
	printf("Insere h:");
	scanf("%lf", &P1.h);
	
	area = calc_area(P1.b,P1.h);
	
	printf("A area do retangulo definido por (%.1lf) e (%.1lf) eh %.0lf",P1.b,P1.h,area);
	
	return 0;
}

*/

//EXERCÍCIO 14:

/*
#include <stdio.h>

struct pontos{
	int x;
	int y;
};

typedef struct pontos Pontos;

void multiplica_p(Pontos pts, int cnt,Pontos *p){
	
//	if(p != NULL)
//		return 0;
	
	p->x = pts.x * cnt;
	printf("%d",p->x);
	p->y = pts.y * cnt;

}

int main(){

	Pontos pts, p;
	
	int X = 0;
	
	printf("Insere p1:");
	scanf("%d", &pts.x);
	printf("Insere p2:");
	scanf("%d", &pts.y);
	printf("Insere constante:");
	scanf("%d", &X);

	multiplica_p(pts,X,&p);
	
	printf("Resultado: (%d,%d) * %d = (%d,%d)",pts.x,pts.y,X,p.x,p.y);
	
	return 0;
}

*/

//EXERCÍCIO 15:

/*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Coordenadas;

void imprime_ponto();
Coordenadas soma_pontos();
void soma2_pontos();
double calc_area();
void multiplica_ponto();
void inc_dir(Coordenadas *ponto, char c);

int main()
{
    Coordenadas ponto1 = {-1, -4}, ponto2 = {4, 2}, soma;
    int n;
    char direcao;

    printf("Digite as coordenadas do ponto: ");
    setbuf(stdin, NULL);
    scanf("%c", &direcao);
    printf("Antes: ");
    imprime_ponto(ponto1);
    inc_dir(&ponto1, direcao);
    printf("\nDepois: ");
    imprime_ponto(ponto1);

    return 0;
}

void imprime_ponto(Coordenadas ponto){
    printf("(%.1f,%.1f)", ponto.x, ponto.y);
}

Coordenadas soma_pontos(Coordenadas x1, Coordenadas y1){
    Coordenadas resultado;

    resultado.x = x1.x + y1.x;
    resultado.y = x1.y + y1.y;

    return resultado;
}
void soma2_pontos(Coordenadas ponto1, Coordenadas ponto2, Coordenadas *soma){
    soma->x = ponto1.x+ponto2.x;
    soma->y = ponto1.y+ponto2.y;
}

double calc_area(Coordenadas ponto1, Coordenadas ponto2){
    double base;
    double altura;

    base = ponto1.x - ponto2.x;
    altura = ponto1.y - ponto2.y;
    base = fabs(base);
    altura = fabs(altura);

    return base*altura;
}

void multiplica_ponto(Coordenadas *ponto, int n){
    ponto->x = n * ponto->x;
    ponto->y = n * ponto->y;

}

void inc_dir(Coordenadas *ponto, char c){
    if(c == 'l'){
        ponto->x = ponto->x + 1;
    }
    if(c == 'o'){
        ponto->x = ponto->x - 1;
    }
    if(c == 'n'){
        ponto->y = ponto->y + 1;
    }
    if(c == 's'){
        ponto->y = ponto->y - 1;
    }
}


*/

//EXERCÍCIO 16:

/*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    float x;
    float y;
} Coordenadas;

void imprime_ponto(Coordenadas ponto)
{
    printf("(%.1f,%.1f)", ponto.x, ponto.y);
}

Coordenadas soma_pontos(Coordenadas x1, Coordenadas y1)
{
    Coordenadas resultado;

    resultado.x = x1.x + y1.x;
    resultado.y = x1.y + y1.y;

    return resultado;
}
void soma2_pontos(Coordenadas ponto1, Coordenadas ponto2, Coordenadas *soma)
{
    soma->x = ponto1.x + ponto2.x;
    soma->y = ponto1.y + ponto2.y;
}

double calc_area(Coordenadas ponto1, Coordenadas ponto2)
{
    double base;
    double altura;

    base = ponto1.x - ponto2.x;
    altura = ponto1.y - ponto2.y;
    base = fabs(base);
    altura = fabs(altura);

    return base * altura;
}

void multiplica_ponto(Coordenadas *ponto, int n)
{
    ponto->x = n * ponto->x;
    ponto->y = n * ponto->y;
}

void inc_dir(Coordenadas *ponto, char c)
{
    if (c == 'l')
    {
        ponto->x = ponto->x + 1;
    }
    if (c == 'o')
    {
        ponto->x = ponto->x - 1;
    }
    if (c == 'n')
    {
        ponto->y = ponto->y + 1;
    }
    if (c == 's')
    {
        ponto->y = ponto->y - 1;
    }
}

void inc2_dir(Coordenadas *ponto, char direcao[10])
{
    Coordenadas copia = {0, 0};
    copia = *ponto;

    if (stricmp(direcao, "noroeste"))
    {
        inc_dir(&copia, 'l');
        inc_dir(&copia, 's');
    }
    if (stricmp(direcao, "nordeste"))
    {
        inc_dir(&copia, 'o');
        inc_dir(&copia, 's');
    }
    if (stricmp(direcao, "sudoeste"))
    {
        inc_dir(&copia, 'l');
        inc_dir(&copia, 'n');
    }
    if (stricmp(direcao, "sudeste"))
    {
        inc_dir(&copia, 'o');
        inc_dir(&copia, 'n');
    }

    *ponto = copia;
}

int main()
{
    Coordenadas ponto1 = {-1, -4};
    char dir2[10] = {'\0'};

    printf("Digite a direcao para o ponto 1: ");
    if (fgets(dir2, sizeof(dir2), stdin) == NULL)
    {
        fprintf(stderr, "Erro na leitura.");
    }
    else
    {
        dir2[strcspn(dir2, "\n")] = 0;
    }
    printf("Antes: ");
    imprime_ponto(ponto1);
    inc2_dir(&ponto1, dir2);
    printf("\nDepois: ");
    imprime_ponto(ponto1);

    return 0;
}

*/


//EXERCÍCIO 17:

/*

#include <stdio.h>

void imprime_vet_int(int vetori[],int n){
	
	for(int i = 0; i<= n;i++){
		printf("pos%d:%d ",i ,vetori[i]);
	}
	printf("\n");
}

void imprime_vet_double(double vetord[],int n){
	
	for(int i = 0; i<= n;i++){
		printf("pos%d:%.3lf ",i ,vetord[i]);
	}
	printf("\n");
}

void imprime_vet_float(float vetorf[],int n){
	
	for(int i = 0; i<= n;i++){
		printf("pos%d:%.3f ",i ,vetorf[i]);
	}
	printf("\n");
}

int main(){

	int n = 3;


	int V[3] = {0};
	double V_d[3] = {0.0};
	float V_f[3] = {0};

	imprime_vet_int(V,n);
	imprime_vet_double(V_d,n);
	imprime_vet_float(V_f,n);
	
	return 0;
}

*/


//EXERCÍCIO 18:

/*

#include <stdio.h>

void take_elements(int *vetor,int n){
	
	for(int i = 0; i < n; i++){
		printf("element %d:",i+1);
		scanf("%d",&vetor[i]);
		printf("\n");
	}
}

void print_vet(int *vetor, int n){
	printf(">>>> ");
	for(int i = 0; i < n; i++){
		printf("%d ", vetor[i]);
	}printf("<<<<\n");
}

void maior_menor(int vetor[],int n, int *maior, int *menor){
		
	for(int i = 0; i < n; i++){
		if(vetor[i] >= *maior)
		*maior = vetor[i];
		if(vetor[i] <= *menor)
		*menor = vetor[i];
	}
}

int main(){
	int n;
	printf("Digite o tamanho do Vetor:");
	scanf("%d", &n);
	
	int vetor[n];

	take_elements(vetor,n);
	print_vet(vetor,n);
	
	int elem_maior = vetor[0];
	int elem_menor = vetor[0];
	
	maior_menor(vetor, n, &elem_maior, &elem_menor);
	
	printf("Maior = %d\nMenor = %d\n",elem_maior, elem_menor);
	
	return 0;
}
*/



//EXERCÍCIO 19:

/*

#include <stdio.h>

void print_vetor(double *vetor, int n){
	
	for(int i = 0; i < n; i++){
		printf("%lf",vetor[i]);
	}		
}

void take_elements(double *vetor,int n){
	
	for(int i = 0; i < n; i++){
		printf("element %d:",i+1);
		scanf("%lf",&vetor[i]);
		printf("\n");
	}
}

int main(){

	printf("Digite o tamanho do Vetor:");
	int N = 0;
	scanf("%d", &N);

	double V[N];
	take_elements(V,N);
	print_vetor(V,N);
	
	
	return 0;
}

*/


//EXERCÍCIO 20:

/*

#include <stdio.h>
#include <stdlib.h>

void take_element(int *vetor, int n){
	
	for(int i = 0; i < n; i++){
		printf("Digite o valor na posicao %d:", i+1);
		scanf("%d", &vetor[i]);
	}
}



void imprime_vet_int(int vetori[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", vetori[i]);
    printf("\n");
}

void imprime_vet_double(double vetord[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%.1lf ", vetord[i]);
    printf("\n");
}

void imprime_vet_float(float vetorf[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%.1f ", vetorf[i]);
    printf("\n");
}

int negativos(float *vet, int N){
    int x = 0;
    for(int i = 0; i < N; i++){
        if(vet[i] < 0){
            x++;
        }
    }
    return x;
}

void vet_double_maior_menor(double vetord[], int tamanho, double *maior, double *menor){

    *maior = vetord[0];
    *menor = vetord[0];

    for(int i = 0; i < tamanho; i++){
        if(vetord[i] > *maior){
            *maior = vetord[i];
        }
        if(vetord[i] < *menor){
            *menor = vetord[i];
        }
    }
}

void copiarvet(int *vet_origem, int *vet_destino, int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        vet_destino[i] = vet_origem[i];
    }
}

int main()
{	
	int n;
	printf("Digite o tamanho do vetor:");
	scanf("%d", &n);
	printf("\n");

  int vetor_1[n];
	take_element(vetor_1, n);
  int vetor_2[n];

  printf("\nVetor origem: ");
  imprime_vet_int(vetor_1,n);
  copiarvet(vetor_1, vetor_2, n);

	printf("\n\nCopiando vetor...\n\n");

  printf("Vetor destino: ");
  imprime_vet_int(vetor_2,n);
    
return 0;
}

*/


//EXERCÍCIO 21:

/*

#include <stdio.h>
#include <stdlib.h>

void take_element(int *vetor, int n){
	
	for(int i = 0; i < n; i++){
		printf("Digite o valor na posicao %d:", i+1);
		scanf("%d", &vetor[i]);
	}
}

void imprime_vet_int(int vetori[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", vetori[i]);
    printf("\n");
}

void imprime_vet_double(double vetord[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%.1lf ", vetord[i]);
    printf("\n");
}

void imprime_vet_float(float vetorf[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%.1f ", vetorf[i]);
    printf("\n");
}

int negativos(float *vet, int N){
    int x = 0;
    for(int i = 0; i < N; i++){
        if(vet[i] < 0){
            x++;
        }
    }
    return x;
}

void vet_double_maior_menor(double vetord[], int tamanho, double *maior, double *menor){

    *maior = vetord[0];
    *menor = vetord[0];

    for(int i = 0; i < tamanho; i++){
        if(vetord[i] > *maior){
            *maior = vetord[i];
        }
        if(vetord[i] < *menor){
            *menor = vetord[i];
        }
    }
}

void copiarvet(int *vet_origem, int *vet_destino, int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        vet_destino[i] = vet_origem[i];
    }
}

void multvet(int *vet, int tamanho, int escalar){
    for(int i = 0; i < tamanho; i++)
        vet[i] = vet[i] * escalar;
}

int main()
{
	int n;
	printf("Digite o tamanho do vetor:");
	scanf("%d", &n);
	printf("\n");


  int vetor_1[n];
	take_element(vetor_1, n);

  printf("Vetor original: ");
  imprime_vet_int(vetor_1,n);
	multvet(vetor_1,n,2);
	printf("Vetor depois da multiplicacao: ");
	imprime_vet_int(vetor_1,4);
    
    return 0;
}

*/


//EXERCÍCIO 22:

/*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void imprime_vet_int(int vetori[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", vetori[i]);
    printf("\n");
}

void imprime_vet_double(double vetord[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%.1lf ", vetord[i]);
    printf("\n");
}

void imprime_vet_float(float vetorf[],int n)
{
    for(int i = 0; i < n; i++)
        printf("%.1f ", vetorf[i]);
    printf("\n");
}

int negativos(float *vet, int N){
    int x = 0;
    for(int i = 0; i < N; i++){
        if(vet[i] < 0){
            x++;
        }
    }
    return x;
}

void vet_double_maior_menor(double vetord[], int tamanho, double *maior, double *menor){

    *maior = vetord[0];
    *menor = vetord[0];

    for(int i = 0; i < tamanho; i++){
        if(vetord[i] > *maior){
            *maior = vetord[i];
        }
        if(vetord[i] < *menor){
            *menor = vetord[i];
        }
    }
}

void copiarvet(int *vet_origem, int *vet_destino, int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        vet_destino[i] = vet_origem[i];
    }
}

void multvet(int *vet, int tamanho, int escalar){
    for(int i = 0; i < tamanho; i++)
        vet[i] = vet[i] * escalar;
}

void abs_vet(int *vet, int tamanho){
    for(int i = 0; i < tamanho; i++)
        vet[i] = abs(vet[i]);
}

int main()
{
    int vetori[] = {1, -2, 3, -4};

    printf("Vetor original: ");
    imprime_vet_int(vetori,4);
    abs_vet(vetori,4);
    printf("Vetor depois da func abs: ");
    imprime_vet_int(vetori,4);
    
    return 0;
}

*/



//EXERCÍCIO 23:

/*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime_vet_int(int vetori[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            printf("%d; ", vetori[i]);
        }
        else
        {
            printf("%d", vetori[i]);
        }
    }
    printf("\n");
}

void imprime_vet_double(double vetord[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%.1lf ", vetord[i]);
    printf("\n");
}

void imprime_vet_float(float vetorf[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%.1f ", vetorf[i]);
    printf("\n");
}

int negativos(int *vet, int tamanho)
{
    int x = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i] < 0)
        {
            x++;
        }
    }
    return x;
}

void vet_int_maior_menor(int vetor[], int tamanho, int *maior, int *menor)
{

    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > *maior)
        {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor)
        {
            *menor = vetor[i];
        }
    }
}

void copiarvet(int *vet_origem, int *vet_destino, int tamanho)
{
    int i = 0;
    for (i = 0; i < tamanho; i++)
    {
        vet_destino[i] = vet_origem[i];
    }
}

void multvet(const int *vet, int *vetmult, int tamanho, int escalar)
{
    for (int i = 0; i < tamanho; i++)
        vetmult[i] = vet[i] * escalar;
}

void abs_vet(const int *vet, int *vetabs, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        vetabs[i] = abs(vet[i]);
}

int main()
{
    int tamanho, maior, menor, escalar;
    int *vetor, *vetorcpy, *vetorabs, *vetormult;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho * sizeof(int));
    vetorcpy = (int *)malloc(tamanho * sizeof(int));
    vetorabs = (int *)malloc(tamanho * sizeof(int));
    vetormult = (int *)malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++)
    {
        printf("Entre com o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\n\n\n");
    printf("Vetor: ");
    imprime_vet_int(vetor, tamanho);
    vet_int_maior_menor(vetor, tamanho, &maior, &menor);
    printf("Maior: %d Menor: %d\n", maior, menor);
    printf("Numero de negativos: %d\n", negativos(vetor, tamanho));
    abs_vet(vetor, vetorabs, tamanho);
    printf("Vetor absoluto: ");
    imprime_vet_int(vetorabs, tamanho);

    free(vetorabs);

    printf("Copiando para outro vetor..\n");
    copiarvet(vetor, vetorcpy, tamanho);
    printf("Vetor original: ");
    imprime_vet_int(vetor, tamanho);
    printf("Vetor copiado: ");
    imprime_vet_int(vetorcpy, tamanho);

    free(vetorcpy);

    printf("Entre com o valor escalar para multiplicar o vetor original: ");
    scanf("%d", &escalar);
    printf("Vetor original: ");
    imprime_vet_int(vetor, tamanho);
    multvet(vetor, vetormult, tamanho, escalar);
    printf("Vetor escalado: ");
    imprime_vet_int(vetormult, tamanho);

    free(vetor);
    free(vetormult);

    return 0;
}

*/

//EXERCÍCIO 24:

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int *aloca_inteiro(int n)
    {

int *a;

    a = (int*)calloc(n,sizeof(int));
     if(a == NULL)
     {
        printf("Memória Insuficiente\n");
        exit(1);
     }
return a;
    }//Função alocar inteiro


void imprime_vet(int *p, int n)
    {

    printf("Imprime_ve: %d\n",*p);
    printf("Imprime_vet: %d\n",n);

    }// Função imprime_vet

int main()
 {
    int n = 10;
    int *p;
    p = aloca_inteiro(n);
    imprime_vet(p,n);

free(p);
return 0;
 }

*/

//EXERCÍCIO 25:

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


double *copiarvet(double vet_origem[],int n)
{

    double *p;
    p = (double*)malloc(n*sizeof(double));
    if(p == NULL)
    {
        printf("Memória Insulficiente\n");
        exit(1);
    }//if

    for(int i =0;i<n;i++)
    {
        p[i] = vet_origem[i];

    }


 return p;
}

int main()
{
    double *vet_destino;
    double vet_origem[3] = {2,3,4};

    int n = 3;
    vet_destino = copiarvet(vet_origem,n);

    for(int i =0;i<n;i++)
    printf("Vetor_destino: %lf\n",vet_destino[i]);

}
*/

//EXERCÍCIO 26:

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double *to_double(int vet_int[],int n)
{

    double *p;
    p =(double*)malloc(n*sizeof(double));
    if(p == NULL)
    {
        printf("Memória insulficiente\n");
        exit(1);
    }//if

    for(int i =0;i<n;i++)
    {

    p[i] =  vet_int[i];

    }

return p;
}//Função to_double

int main()
{
    double *vet_double;
    int vet_int[3] = {2,5,8};
    int n = 3;

    for(int i =0;i<n;i++)
    printf("Vetor de Inteiros: %d\n",vet_int[i]);


    vet_double = to_double(vet_int,n);

    for(int i =0;i<n;i++)
    printf("Vetor de doubles: %lf\n",vet_double[i]);

free(vet_double);
return 0;
}

*/

//EXERCÍCIO 27:

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int *Alocdm(int n[],int m)
{
    int *p;
    p = (int*)calloc(n,sizeof(int));
    if(p == NULL)
    {
        printf("Memória Indisponível");
    }//if

    for(int i = 0;i<=m;i++)
    p[i] = n[i];

return p;
}// Função

int main()
{
    int *valor;
    int n[3] = {3,2,1};
    int m = 3;

    valor = Alocdm(n,m);

for(int i = 0;i<=m;i++)
printf("RESPOSTA: (%d,%d)\n",valor[i],valor[i+1]);

free(valor);
return 0;
}

*/

//EXERCÍCIO 28:

/*

#include <stdio.h>
#include <stdlib.h>

void copiavet(double *vetor, double *vetordest, int n)
{
	vetordest = malloc(n * sizeof(double));

	for (int i = 0; i < n; ++i)
	{
		vetordest[i] = vetor[i];	
	}

	return;
}

int main(void)
{
	double vetor_ori[10] = {0};
	double *vetor_dest;

	copiavet(vetor_ori, vetor_dest, 10);

	return 0;
}


A função retorna nada pois ela é void, quando o seu escopo é finalizado ela imprimi lixo de memória  

A solução seria criar um ponteiro dentro da função void e em seguida passar o ponteiro para a função main e imprimir na própria main 
    for(int i =0;i<n;i++)
    printf("Vetor_destino: %lf\n",vet_destino[i]);

}

*/
