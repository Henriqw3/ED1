//HENRIQUE CORRÊA DE OLIVEIRA - 11821BSI251
//Lista 4.1 - estruturas
//To execute remove /**/ one by one
//EXERCÍCIO 1:

/*

#include <stdio.h>
#define TAM 3

typedef struct
{
	int ddd;
	int numero;
	

} TELEFONE;

int main(){
	
	TELEFONE tel[TAM];
	
	for(int i = 0; i < TAM; i++){
		printf("\nDigite os 3 numeros do DDD do telefone %d\nDDD:", i+1);
		scanf("%d", &tel[i].ddd);
		printf("Digite o telefone de (%d) 9 ",tel[i].ddd);
		scanf("%d", &tel[i].numero);
	}
	
	for(int j = 0; j < TAM; j++)
		printf("\nDDD E TELEFONE %d: (%d)%d", j+1, tel[j].ddd, tel[j].numero);
	
	return 0;
}

*/

//EXERCÍCIO 2:

/*

#include <stdio.h>
#define TAM 3

typedef struct
{
	int dia;
	int mes;
	int ano;
	

} DATA;

int main(){
	
	DATA datas[TAM];
	
	printf("DATA");
	for(int i = 0; i < TAM; i++){
		printf("\nDigite o dia da data %d: ",i+1);
		scanf("%d", &datas[i].dia);
		printf("Digite o mes da data %d: ",i+1);
		scanf("%d", &datas[i].mes);
		printf("Digite o Ano da data %d: ",i+1);
		scanf("%d", &datas[i].ano);
	}

	for(int j = 0; j < TAM; j++)
		printf("\n Data %d: Dia %d do mes %d ano %d", j+1, datas[j].dia, datas[j].mes, datas[j].ano);

	return 0;
}
*/

//EXERCÍCIO 3:

/*

#include <stdio.h>
#define TAM 3

typedef struct
{
	char rua[50];
	int num;
	char complem[10];
	int cep;
	char cidade[20];
	char estado[20];
	

} ENDEREC;

int main(){
	
	ENDEREC dados[TAM];
	
	printf("ENDERECOS");
	for(int i = 0; i < TAM; i++){
		printf("\nDigite a rua do endereco %d: ",i+1);
		gets(dados[i].rua);
		printf("\nDigite o numero da casa do endereco %d: ",i+1);
		scanf("%d", &dados[i].num);
		printf("\nDigite o complemento do endereco %d: ",i+1);
		gets(dados[i].complem);
		printf("\nDigite o cep do endereco %d: ",i+1);
		scanf("%d", &dados[i].cep);
		printf("\nDigite a cidade do endereco %d: ",i+1);
		gets(dados[i].cidade);
		printf("\nDigite o estado do endereco %d: ",i+1);
		gets(dados[i].estado);
	}

	for(int j = 0; j < TAM; j++){
		printf("\nEndereco %d:\n\n", j+1);
		printf("\nRua:%s",dados[j].rua);
		printf("\nNumero casa:%d",dados[j].num);
		printf("\nComplemento:%s",dados[j].complem);
		printf("\nCep:%d",dados[j].cep);
		printf("\nCidade:%s",dados[j].cidade);
		printf("\nEstado:%s",dados[j].estado);
	}

	return 0;
}

*/

//EXERCÍCIO 4:

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct 
{
	unsigned char rua[ 41 ];
	unsigned int numero;
	unsigned char complemento[ 21 ];
	unsigned char cidade[ 21 ];
	unsigned char estado[ 4 ];
	unsigned char cep[ 11 ];
} endereco;

typedef struct 
{
	unsigned int ddd;
	unsigned int numero;
} telefone;

typedef struct
{
	unsigned int dia;
	unsigned int mes;
	unsigned int ano;
} data;

typedef struct {
	unsigned char nome[ 51 ];
	unsigned char cpf[ 18 ];
	unsigned char sexo;
	unsigned char estado_civil[ 21 ];
	unsigned int salario;
	unsigned char rg[ 18 ];

	endereco end_comercial;
	endereco end_residencial;
	telefone tel;
	telefone tel_residencial;
	data nascimento;
	data ingresso;
} cadastro;

void exibeMenu ( void );
void listaCadastros (cadastro *pessoas);
void lista1990 (cadastro *pessoas);
void cadastraPessoa (cadastro *pessoas);
void copiaCadastro (cadastro *pessoas);

int main ( void ){
	cadastro pessoas[ 5 ] = {
	{ "El Toro" , "12332112332" , 'M' , "Solteiro" , 1200 , "12332132"
	,{ "Brazil" , 73 , "comercio" , "Uberlandia" , "MG" , "38408130" }
	,{ "Joao Naves" , 70 , "residencia" , "Uberlandia" , "MG" , "38408133" }
	,{ 34 , 992472165 }, { 34 , 990000000 }, { 13 , 2 , 2001 }, { 10 , 10 , 2010 }}
	
	,{ "Hinata" , "23443223443" , 'F' , "Solteira" , 3222 , "23443243"
	,{ "Segismundo" , 71 , "comercio" , "Uberlandia" , "MG" , "38408120" }
	,{ "Joao Naves" , 80 , "residencia" , "Uberlandia" , "MG" , "38408133" }
	,{ 34 , 991111111 }, { 34 , 992411111 }, { 14 , 2 , 1989 }, { 8 , 3 , 2011 }}
	
	,{ "Sakura" , "34554334554" , 'F' , "Solteira" , 1500 , "34554354"
	,{ "Joao Naves" , 30 , "comercio" , "Uberlandia" , "MG" , "38408133" }
	,{ "Brazil" , 70 , "residencia" , "Uberlandia" , "MG" , "38408130" }
	,{ 34 , 992474445 }, { 34 , 992474444 }, { 11 , 2 , 1999 }, { 10 , 10 , 2010 }}
	
	,{ "Tucano" , "45665445665" , 'M' , "Solteiro" , 1200 , "45665465"
	,{ "Segismundo" , 70 , "comercio" , "Uberlandia" , "MG" , "38408120" }
	,{ "Joao Naves" , 30 , "residencia" , "Uberlandia" , "MG" , "38408133" }
	,{ 34 , 992472005 }, { 34 , 990072165 }, { 13 , 2 , 1959 }, { 10 , 10 , 2000 }}
	
	,{ "Azaghal" , "67887667887" , 'M' , "Casado" , 1200 , "67887687"
	,{ "Brazil" , 75 , "comercio" , "Uberlandia" , "MG" , "38408130" }
	,{ "Segismundo" , 75 , "residencia" , "Uberlandia" , "MG" , "38408120" }
	,{ 34 , 949858950 }, { 34 , 992939333 }, { 1 , 2 , 1999 }, { 11 , 11 , 2011 }}
	};
	
	unsigned char escolha = ' \0 ' ;
	while (escolha != 'E' ){
		exibeMenu ();
		printf ( " \n Escolha uma opção: " );
		setbuf (stdin, NULL );
		scanf ( "%c" , &escolha);
		getchar ();
		switch (escolha){
			case 'A' :
				listaCadastros (pessoas);
				break ;
			case 'B' :
				cadastraPessoa (pessoas);
				break ;
			case 'C' :
				lista1990 (pessoas);
				break ;
			case 'D' :
				copiaCadastro (pessoas);
				break ;
			case 'E' :
				printf ( "Até Logo! \n " );
				break ;
			default :
				printf ( "Opção Inválida \n " );
				break ;
		}
	}
	return 0 ;
}

void exibeMenu ( void ){
	
	printf ( " CADASTRO" );
	printf ( "Opções:" );
	printf ( "A. Listar todos os cadastros" );
	printf ( "B. Cadastrar/Sobrescrever nova pessoa" );
	printf ( "C. Listar as pessoas que nasceram depois de 1990" );
	printf ( "D. Copiar dados de um cadastro para outro" );
	printf ( "E. Sair" );
}

void listaCadastros (cadastro *pessoas){
	
	for ( int i = 0 ; i < 5 ; i++){
		printf ( " \n %do cadastro: \n " , i+ 1 );
		printf ( "Nome: %s \n " , pessoas[i]. nome );
		printf ( "CPF: %s \n " , pessoas[i]. cpf );
		
		if (pessoas[i]. sexo == 'M' ){
			printf ( "Sexo: MASCULINO \n " );
		} else if (pessoas[i]. sexo == 'F' ){
			printf ( "Sexo: FEMININO \n " );
		} else {
			printf ( "Sexo: Outro \n " );
		}
		printf ( "Data de nascimento: %02u/%02u/%u \n " ,
			pessoas[i]. nascimento . dia , pessoas[i]. nascimento . mes ,
			pessoas[i]. nascimento . ano );
		printf ( "Data de ingresso: %02u/%02u/%u \n " ,
			pessoas[i]. ingresso . dia , pessoas[i]. ingresso . mes ,
			pessoas[i]. ingresso . ano );
		printf ( "Estado Civil: %s \n " , pessoas[i]. estado_civil );
		printf ( "RG: %s \n " , pessoas[i]. rg );
		printf ( "Salário: %u \n " , pessoas[i]. salario );
		puts ( "Endereço comercial" );
		printf ( "Rua %s, %u - %s \n " , pessoas[i]. end_comercial . rua ,
			pessoas[i]. end_comercial . numero , pessoas[i]. end_comercial . complemento );
		printf ( "%s-%s, CEP: %s \n " , pessoas[i]. end_comercial . cidade ,
			pessoas[i]. end_comercial . estado , pessoas[i]. end_comercial . cep );
		puts ( "Endereço residencial" );
		printf ( "Rua %s, %u - %s \n " , pessoas[i]. end_residencial . rua ,
			pessoas[i]. end_residencial . numero ,
			pessoas[i]. end_residencial . complemento );
		printf ( "%s-%s, CEP: %s \n " , pessoas[i]. end_residencial . cidade ,
			pessoas[i]. end_residencial . estado , pessoas[i]. end_residencial . cep );
		puts ( "CONTATO" );
		printf ( "Telefone:(%03u) %u \n " , pessoas[i]. tel . ddd ,
			pessoas[i]. tel . numero );
		printf ( "Telefone residencial:(%03u) %u \n " ,
			pessoas[i]. tel_residencial . ddd , pessoas[i]. tel_residencial . numero );
		}
		getchar ();
	}
void cadastraPessoa (cadastro *pessoas){
	
	unsigned short int pos = 5 ;
	
	puts ( " \nCADASTRAR NOVA PESSOA:\n" );
	while (pos > 4 ){
		setbuf (stdin, NULL );
		printf ( "Escolha uma posição no vetor (de 0 a 4) para cadastrar"
				"essa pessoa: " );
		scanf ( "%u" , &pos);
		
		if (pos <= 4 ){
			break ;
		}
	}
	
	setbuf (stdin, NULL );
	printf ( "Insira o nome: " );
	fgets (pessoas[pos]. nome , sizeof (pessoas[pos]. nome ),stdin);
	pessoas[pos]. nome [ strcspn (pessoas[pos]. nome , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o CPF: " );
	fgets (pessoas[pos]. cpf , sizeof (pessoas[pos]. cpf ),stdin);
	pessoas[pos]. cpf [ strcspn (pessoas[pos]. cpf , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o sexo(M - Masculino, F - Feminino): " );
	scanf ( "%c" , &pessoas[pos]. sexo );
	getchar ();
	
	setbuf (stdin, NULL );
	printf ( "Insira o estado civil: " );
	fgets (pessoas[pos]. estado_civil , sizeof (pessoas[pos]. estado_civil ),stdin
	);
	pessoas[pos]. estado_civil [ strcspn (pessoas[pos]. estado_civil , " \n " )] =
	' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o RG: " );
	fgets (pessoas[pos]. rg , sizeof (pessoas[pos]. rg ),stdin);
	pessoas[pos]. rg [ strcspn (pessoas[pos]. rg , " \n " )] = ' \0 ' ;
	puts ( "Insira a data de nascimento" );
	
	setbuf (stdin, NULL );
	printf ( "Dia: " );
	scanf ( "%u" , &pessoas[pos]. nascimento . dia );
	
	setbuf (stdin, NULL );
	printf ( "Mês: " );
	scanf ( "%u" , &pessoas[pos]. nascimento . mes );
	
	setbuf (stdin, NULL );
	printf ( "Ano: " );
	scanf ( "%u" , &pessoas[pos]. nascimento . ano );
	puts ( "Insira a data de ingresso" );
	
	setbuf (stdin, NULL );
	printf ( "Dia: " );
	scanf ( "%u" , &pessoas[pos]. ingresso . dia );
	
	setbuf (stdin, NULL );
	printf ( "Mês: " );
	scanf ( "%u" , &pessoas[pos]. ingresso . mes );
	
	setbuf (stdin, NULL );
	printf ( "Ano: " );
	scanf ( "%u" , &pessoas[pos]. ingresso . ano );
	
	setbuf (stdin, NULL );
	printf ( "Insira o salário: " );
	scanf ( "%u" , &pessoas[pos]. salario );
	puts ( "ENDEREÇO COMERCIAL" );
	
	setbuf (stdin, NULL );
	printf ( "Insira a Rua: " );
	fgets (pessoas[pos]. end_comercial . rua , sizeof (pessoas[pos]. end_comercial .
	rua ),stdin);
	pessoas[pos]. end_comercial . rua [ strcspn (pessoas[pos]. end_comercial . rua ,"\n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o Número: " );
	scanf ( "%u" , &pessoas[pos]. end_comercial . numero );
	
	setbuf (stdin, NULL );
	printf ( "Insira o Complemento: " );
	fgets (pessoas[pos]. end_comercial . complemento , sizeof (pessoas[pos]. end_co
	mercial . complemento ),stdin);
	pessoas[pos]. end_comercial . complemento [ strcspn (pessoas[pos]. end_comerci
	al . complemento , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o Cidade: " );
	fgets (pessoas[pos]. end_comercial . cidade , sizeof (pessoas[pos]. end_comerci
	al . cidade ),stdin);
	pessoas[pos]. end_comercial . cidade [ strcspn (pessoas[pos]. end_comercial . ci
	dade , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o Estado: " );
	fgets (pessoas[pos]. end_comercial . estado , sizeof (pessoas[pos]. end_comerci
	al . estado ),stdin);
	pessoas[pos]. end_comercial . estado [ strcspn (pessoas[pos]. end_comercial . es
	tado , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o CEP: " );
	fgets (pessoas[pos]. end_comercial . cep , sizeof (pessoas[pos]. end_comercial .
	cep ),stdin);
	pessoas[pos]. end_comercial . cep [ strcspn (pessoas[pos]. end_comercial . cep , "\n " )] = ' \0 ' ;
	puts ( "ENDEREÇO RESIDENCIAL" );
	
	setbuf (stdin, NULL );
	printf ( "Insira a Rua: " );
	fgets (pessoas[pos]. end_residencial . rua , sizeof (pessoas[pos]. end_residenc
	ial . rua ),stdin);
	pessoas[pos]. end_residencial . rua [ strcspn (pessoas[pos]. end_residencial . r
	ua , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o Número: " );
	scanf ( "%u" , &pessoas[pos]. end_residencial . numero );
	
	setbuf (stdin, NULL );
	printf ( "Insira o Complemento: " );
	fgets (pessoas[pos]. end_residencial . complemento , sizeof (pessoas[pos]. end_
	residencial . complemento ),stdin);
	pessoas[pos]. end_residencial . complemento [ strcspn (pessoas[pos]. end_resid
	encial . complemento , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o Cidade: " );
	fgets (pessoas[pos]. end_residencial . cidade , sizeof (pessoas[pos]. end_resid
	encial . cidade ),stdin);
	pessoas[pos]. end_residencial . cidade [ strcspn (pessoas[pos]. end_residencia
	l . cidade , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o Estado: " );
	fgets (pessoas[pos]. end_residencial . estado , sizeof (pessoas[pos]. end_resid
	encial . estado ),stdin);
	pessoas[pos]. end_residencial . estado [ strcspn (pessoas[pos]. end_residencia
	l . estado , " \n " )] = ' \0 ' ;
	
	setbuf (stdin, NULL );
	printf ( "Insira o CEP: " );
	fgets (pessoas[pos]. end_residencial . cep , sizeof (pessoas[pos]. end_residenc
	ial . cep ),stdin);
	pessoas[pos]. end_residencial . cep [ strcspn (pessoas[pos]. end_residencial . c
	ep , " \n " )] = ' \0 ' ;
	puts ( "Insira o telefone" );
	
	setbuf (stdin, NULL );
	printf ( "DDD: " );
	scanf ( "%u" , &pessoas[pos]. tel . ddd );
	
	setbuf (stdin, NULL );
	printf ( "Número: " );
	scanf ( "%u" , &pessoas[pos]. tel . numero );
	puts ( "Insira o telefone residencial" );
	
	setbuf (stdin, NULL );
	printf ( "DDD: " );
	scanf ( "%u" , &pessoas[pos]. tel_residencial . ddd );
	
	setbuf (stdin, NULL );
	printf ( "Número: " );
	scanf ( "%u" , &pessoas[pos]. tel_residencial . numero );
	}
void lista1990 (cadastro *pessoas){
	for ( int i = 0 ; i < 5 ; i++){
		if (pessoas[i]. nascimento . ano > 1990 ){
		printf ( " \n %do cadastro: \n " , i+ 1 );
		printf ( "Nome: %s \n " , pessoas[i]. nome );
		printf ( "CPF: %s \n " , pessoas[i]. cpf );
		
		
		if (pessoas[i]. sexo == 'M' ){
			printf ( "Sexo: MASCULINO \n " );
		} else if (pessoas[i]. sexo == 'F' ){
			printf ( "Sexo: FEMININO \n " );
		} else {
			printf ( "Sexo: Outro \n " );
		}
		printf ( "Data de nascimento: %02u/%02u/%u \n " ,
			pessoas[i]. nascimento . dia , pessoas[i]. nascimento . mes ,
			pessoas[i]. nascimento . ano );
		printf ( "Data de ingresso: %02u/%02u/%u \n " ,
			pessoas[i]. ingresso . dia , pessoas[i]. ingresso . mes ,
			pessoas[i]. ingresso . ano );
		printf ( "Estado Civil: %s \n " , pessoas[i]. estado_civil );
		printf ( "RG: %s \n " , pessoas[i]. rg );
		printf ( "Salário: %u \n " , pessoas[i]. salario );
		puts ( "Endereço comercial" );
		printf ( "Rua %s, %u - %s \n " , pessoas[i]. end_comercial . rua ,
			pessoas[i]. end_comercial . numero , pessoas[i]. end_comercial . complemento );
		printf ( "%s-%s, CEP: %s \n " , pessoas[i]. end_comercial . cidade ,
			pessoas[i]. end_comercial . estado , pessoas[i]. end_comercial . cep );
		puts ( "Endereço residencial" );
		printf ( "Rua %s, %u - %s \n " , pessoas[i]. end_residencial . rua ,
			pessoas[i]. end_residencial . numero ,
			pessoas[i]. end_residencial . complemento );
		printf ( "%s-%s, CEP: %s \n " ,
			pessoas[i]. end_residencial . cidade , pessoas[i]. end_residencial . estado ,
			pessoas[i]. end_residencial . cep );
		puts ( "CONTATO" );
		printf ( "Telefone:(%03u) %u \n " , pessoas[i]. tel . ddd ,
		pessoas[i]. tel . numero );
		printf ( "Telefone residencial:(%03u) %u \n " ,
			pessoas[i]. tel_residencial . ddd , pessoas[i]. tel_residencial . numero );
			}	
		}
		getchar ();
	}
void copiaCadastro (cadastro *pessoas){
	unsigned short pos = 5 ;
	unsigned short pos2 = 5 ;
	
	while (pos2 > 4 ){
		setbuf (stdin, NULL );
		printf ( "Qual cadastro deseja copiar? Informe uma posição no"
				 "vetor (de 0 a 4): " );
		scanf ( "%hu" , &pos2);
		if (pos2 <= 4 ){
			break ;
		}
	}
	
	while (pos > 4 ){
		setbuf (stdin, NULL );
		printf ( "Deseja copiar para qual cadastro? Informe uma posição no"
				 "vetor (de 0 a 4): " );
		scanf ( "%hu" , &pos);
		if (pos <= 4 ){
			break ;
		}
	}
	strcpy (pessoas[pos]. nome ,pessoas[pos2]. nome );
	strcpy (pessoas[pos]. cpf ,pessoas[pos2]. cpf );
	pessoas[pos]. sexo = pessoas[pos2]. sexo ;
	strcpy (pessoas[pos]. estado_civil ,pessoas[pos2]. estado_civil );
	strcpy (pessoas[pos]. rg ,pessoas[pos2]. rg );
	pessoas[pos]. salario = pessoas[pos2]. salario ;
	pessoas[pos]. end_comercial . numero =
	pessoas[pos2]. end_comercial . numero ;
	strcpy (pessoas[pos]. end_comercial . complemento ,pessoas[pos2]. end_comerci
	al . complemento );
	strcpy (pessoas[pos]. end_comercial . rua ,pessoas[pos2]. end_comercial . rua );
	strcpy (pessoas[pos]. end_comercial . cidade ,pessoas[pos2]. end_comercial . ci
	dade );
	strcpy (pessoas[pos]. end_comercial . estado ,pessoas[pos2]. end_comercial . es
	tado );
	strcpy (pessoas[pos]. end_comercial . cep ,pessoas[pos2]. end_comercial . cep );
	pessoas[pos]. end_residencial . numero =
	pessoas[pos2]. end_residencial . numero ;
	strcpy (pessoas[pos]. end_residencial . complemento ,pessoas[pos2]. end_resid
	encial . complemento );
	strcpy (pessoas[pos]. end_residencial . rua ,pessoas[pos2]. end_residencial . r
	ua );
	strcpy (pessoas[pos]. end_residencial . cidade ,pessoas[pos2]. end_residencia
	l . cidade );
	strcpy (pessoas[pos]. end_residencial . estado ,pessoas[pos2]. end_residencia
	l . estado );
	strcpy (pessoas[pos]. end_residencial . cep ,pessoas[pos2]. end_residencial . c
	ep ); pessoas[pos]. tel . ddd = pessoas[pos2]. tel . ddd ;
	pessoas[pos]. tel . numero = pessoas[pos2]. tel . numero ;
	pessoas[pos]. tel_residencial . ddd =
	pessoas[pos2]. tel_residencial . ddd ;
	pessoas[pos]. tel_residencial . numero =
	pessoas[pos2]. tel_residencial . numero ;
	pessoas[pos]. nascimento . dia = pessoas[pos2]. nascimento . dia ;
	pessoas[pos]. nascimento . mes = pessoas[pos2]. nascimento . mes ;
	pessoas[pos]. nascimento . ano = pessoas[pos2]. nascimento . ano ;
	pessoas[pos]. ingresso . dia = pessoas[pos2]. ingresso . dia ;
	pessoas[pos]. ingresso . mes = pessoas[pos2]. ingresso . mes ;
	pessoas[pos]. ingresso . ano = pessoas[pos2]. ingresso . ano ;
}

*/

//EXERCÍCIO 5:

/*

#include <stdio.h>
#include <string.h>
typedef struct 
{
	unsigned char matricula[ 21 ];
	unsigned char nome[ 51 ];
	float provas[ 3 ];
	float media;
	unsigned int faltas;
} aluno;

void maiorNota (aluno *alunos);
void maiorMedia (aluno *alunos);
void menorMedia (aluno *alunos);

int main ( void ){
	
	aluno alunos[ 3 ] = { 0 };
	for ( int i = 0 ; i < 3 ; i++){
		printf ( " \n Entre com os dados do %do aluno \n " , i+ 1 );
		setbuf (stdin, NULL );
		printf ( "Informe a matrícula: " );
		fgets (alunos[i]. matricula , sizeof (alunos[i]. matricula ),stdin);
		alunos[i]. matricula [ strcspn (alunos[i]. matricula , " \n " )] = ' \0 ' ;
		setbuf (stdin, NULL );
		printf ( "Informe o nome: " );
		fgets (alunos[i]. nome , sizeof (alunos[i]. nome ),stdin);
		alunos[i]. nome [ strcspn (alunos[i]. nome , " \n " )] = ' \0 ' ;
		setbuf (stdin, NULL );
		printf ( "Informe a nota da primeira prova: " );
		scanf ( "%f" , &alunos[i]. provas [ 0 ]);
		setbuf (stdin, NULL );
		printf ( "Informe a nota da segunda prova: " );
		scanf ( "%f" , &alunos[i]. provas [ 1 ]);
		setbuf (stdin, NULL );
		printf ( "Informe a nota da terceira prova: " );
		scanf ( "%f" , &alunos[i]. provas [ 2 ]);
	
		for ( int j = 0 ; j < 3 ; j++){
			alunos[i]. media += alunos[i]. provas [j];
			alunos[i]. media /= 3 ;
			setbuf (stdin, NULL );
			printf ( "Informe o número de faltas: " );
			scanf ( "%u" , &alunos[i]. faltas );
		}
	}
		printf ( " \n " );
		maiorNota (alunos);
		maiorMedia (alunos);
		menorMedia (alunos);
	
		for ( int i = 0 ; i < 3 ; i++){
			if (alunos[i]. media >= 60 && alunos[i]. faltas <= 18 ){
			printf ( "O aluno %s foi aprovado! \n " , alunos[i]. nome );
			} else if (alunos[i]. faltas > 18 ){
			printf ( "O aluno %s foi reprovado por falta \n " ,
			alunos[i]. nome );
			} else {
			printf ( "O aluno %s foi reprovado por nota \n " ,
			alunos[i]. nome );
			}
		}
	}
void maiorNota (aluno *alunos){
	
	unsigned char nome[ 51 ] = { ' \0 ' };
	float nota = 0 ;
	nota = alunos[ 0 ]. provas [ 0 ];
	
	for ( int i = 0 ; i < 3 ; i++){
		if (alunos[i]. provas [ 0 ] >= nota){
		nota = alunos[ 0 ]. provas [ 0 ];
		strcpy (nome,alunos[i]. nome );
		}
	}
	printf ( "O aluno com maior nota foi %s \n " , nome);
}

void maiorMedia (aluno *alunos){
	
	unsigned char nome[ 51 ] = { ' \0 ' };
	float media = 0 ;
	
	media = alunos[ 0 ]. media ;
	
	for ( int i = 0 ; i < 3 ; i++){
		if (alunos[i]. media >= media){
		media = alunos[ 0 ]. media ;
		strcpy (nome,alunos[i]. nome );
		}
	}
	
	printf ( "O aluno com maior média foi %s \n " , nome);
}

void menorMedia (aluno *alunos){
	unsigned char nome[ 51 ] = { ' \0 ' };
	float media = 0 ;
	media = alunos[ 0 ]. media ;
	for ( int i = 0 ; i < 3 ; i++){
		if (alunos[i]. media <= media){
			media = alunos[ 0 ]. media ;
			strcpy (nome,alunos[i]. nome );
		}
	}
	printf ( "O aluno com menor média foi %s \n " , nome);
}
*/

//EXERCÍCIO 6:

/*

#include < stdio.h >
#include < string.h >

typedef struct 
{
	unsigned char nome[ 16 ];
	float potencia;
	float tempoAtivo;
} ed;
int main( void ) {
	
	float consumo[ 5 ];
	float consumoTotal = 0 ;
	unsigned int dia;
	
	ed eletroDomesticos[ 5 ];
	
	printf( "<< Eletrodoméstico >>" );
	setbuf(stdin,NULL);
	printf( "Informe um período de tempo em dias: " );
	scanf( "%u" , &dia);
	
	for ( int i = 0 ; i < 5 ; i++){
		printf( "ELETRODÓMESTICO %d\n" , i+ 1 );
		setbuf(stdin,NULL);
		printf( "Informe o nome: " );
		fgets(eletroDomesticos[i].nome, sizeof (eletroDomesticos[i].nome),stdin);
		eletroDomesticos[i].nome[strcspn(eletroDomesticos[i].nome, "\n" )] =
		' \ 0 ' ;
		setbuf(stdin,NULL);
		printf( "Informe a potência: " );
		scanf( "%f" , &eletroDomesticos[i].potencia);
		setbuf(stdin,NULL);
		printf( "Informe o tempo ativo: " );
		scanf( "%f" , &eletroDomesticos[i].tempoAtivo);
		consumo[i] = eletroDomesticos[i].potencia *
		eletroDomesticos[i].tempoAtivo * dia;
		consumoTotal += consumo[i];
		printf( "\nO consumo total na casa foi de %.2f\n" , consumoTotal);
	}
	printf( "\nO consumo total na casa foi de %.2f\n" , consumoTotal);
	
	for ( int i = 0 ; i < 5 ; i++){
		consumo[i] /= consumoTotal;
		consumo[i] *= 100 ;
		printf( "O consumo relativo do %s é %.2f\n" ,
		eletroDomesticos[i].nome, consumo[i]);
	}
return 0 ;
}

*/

//EXERCÍCIO 7:

/*

#include <stdio.h>
#include <string.h>

typedef struct {
	unsigned char nome[ 16 ];
	float potencia;
	float tempoAtivo;
} ed;

int main ( void ) {

	float consumo[ 5 ];
	float consumoTotal = 0 ;
	unsigned int dia;
	ed eletroDomesticos[ 5 ];
	printf ( "<< Eletrodoméstico >>" );
	setbuf (stdin, NULL );
	printf ( "Informe um período de tempo em dias: " );
	scanf ( "%u" , &dia);
	
	for ( int i = 0 ; i < 5 ; i++){
		printf ( "ELETRODÓMESTICO %d \n " , i+ 1 );
		setbuf (stdin, NULL );
		printf ( "Informe o nome: " );
		fgets (eletroDomesticos[i]. nome , sizeof (eletroDomesticos[i]. nome ),stdin);
		eletroDomesticos[i]. nome [ strcspn (eletroDomesticos[i]. nome , " \n " )] =
		' \0 ' ;
		setbuf (stdin, NULL );
		printf ( "Informe a potência: " );
		scanf ( "%f" , &eletroDomesticos[i]. potencia );
		setbuf (stdin, NULL );
		printf ( "Informe o tempo ativo: " );
		scanf ( "%f" , &eletroDomesticos[i]. tempoAtivo );
		consumo[i] = eletroDomesticos[i]. potencia *
		eletroDomesticos[i]. tempoAtivo * dia;
		consumoTotal += consumo[i];
		printf ( " \n O consumo total na casa foi de %.2f \n " , consumoTotal);
	}
	printf ( " \n O consumo total na casa foi de %.2f \n " , consumoTotal);
	
	for ( int i = 0 ; i < 5 ; i++){
		consumo[i] /= consumoTotal;
		consumo[i] *= 100 ;
		printf ( "O consumo relativo do %s é %.2f \n " ,
		eletroDomesticos[i]. nome , consumo[i]);
	}
	
	printf ( " \n\n Endereços \n\n " );
	printf ( "endereço: %p de dia \n " , &dia);
	printf ( "endereço: %p de consumoTotal \n " , &consumoTotal);
	
	for ( int i = 0 ; i < 5 ; i++)
		printf ( "endereço: %p do eletroDomestico[%d].nome \n " ,
		&eletroDomesticos[i]. nome , i);
	for ( int i = 0 ; i < 5 ; i++)
		printf ( "endereco: %p do eletroDomestico[%d].potencia \n " ,
		&eletroDomesticos[i]. potencia , i);
	for ( int i = 0 ; i < 5 ; i++)
		printf ( "endereco: %p do eletroDomestico[%d].tempoAtivo \n " ,
		&eletroDomesticos[i]. tempoAtivo , i);
	for ( int i = 0 ; i < 5 ; i++)
		printf ( "endereco: %p de consumo[%d] \n " , &consumo[i], i);

return 0 ;
}

*/
