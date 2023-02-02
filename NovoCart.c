#include <stdio.h>// bibl�oteca responsav�l pela comunica��o com o usu�rio.
#include <stdlib.h>// bibl�oteca de aloca��o de espa�o em mem�ria.
#include <locale.h>// bibl�oteca de aloca��o de texto por regi�o.
#include <string.h>//bibl�oteca respons�vel por cuidar das string.
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o cpf a ser registrado\n");//Aqui � onde coletamos a informa��o do usu�rio
	scanf("%s", cpf);//Aqui armazenamos o valor o valor da vari�vel, refere - se a string
	
	strcpy(arquivo, cpf); //respons�vel por copiar o valor das string
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo novo em branco, o "w" significa ESCREVA o novo arquivo.
	fprintf(file,cpf);//aqui � salvo o valor da vari�vel.
	fclose(file);//aqui � o fechamento do arquivo.
	
	file= fopen(arquivo, "a");//Aqui � respons�vel por copiar os valores da string, o "a" significa ATUALIZA��O. do arquivo j� existente.
	fprintf(file,",");//Aqui temos uma v�rgula a car�ter de separa��o de informa��es
	fclose(file);//Aqui � o fechamento do arquivo
	
	printf("Digite o nome a ser cadastrado\n");
	scanf("%s", nome);
	
	file= fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado\n");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado\n");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");//Aqui � respons�vel por da uma pausa no programa, para que o usu�rio entenda oque houve e decida oque far� depois.
	
}
	


int consultar()
{
	setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
	char cpf[40];// Aqui � a cria��o da v�riavel, cpf com 40 espa�os livre para dados.
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado\n");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if(file==NULL)// Aqui � respons�vel por dizer SE o dado existe no Banco de Dados da empresa ou n�o.
	{
		printf("N�o foi possivel localizar o arquivo.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//Aqui temos uma estrutura de repeti��o
	{
		printf("\n essas s�o as informa��es do usu�rio\n");
		printf("%s", conteudo);
		printf("\n\n");
		
		system("pause");
	}
}

int deletar()
{
	char cpf[40];
	printf("Digite o cpf a ser deletado.\n");
	scanf("%s", cpf);
	
	remove(cpf);
	printf("Este CPF foi removido com sucesso!\n");
	system("pause");
	
	FILE *file;
	file = fopen(cpf,"r");
	if(file == NULL)
	{
		printf("Esse CPF n�o foi encontrado no sistema.\n");
		system("pause");
	}
	
}

int main ()
	{
	
	int opcao=0;
	
	int laco=1;
	
	
		
	

		for (laco=1;laco=1;)
	
	
	

		{
	
			system("cls");
		
			setlocale(LC_ALL, "Portuguese");//Aqui definimos a linguagem
			printf("#####Cart�rio do Graja�#####\n\n");
			printf("Escolha a op��o desejada do Menu\n\n");//In�cio do MENU
			printf("\t1 Registrar Nomes\n");
			printf("\t2 Consultar nomes\n");
			printf("\t3 Deletar Nomes\n");
			printf("\t4 Sair do sistema\n");
	
			scanf("%d", &opcao);
	
			system("cls");// Respons�vel pela limpeza de tela, retira todo o excesso de informa��o.
	
			switch(opcao)
			{
				case 1: 
				registro();//Aqui � a chamada das fun��es
				break;
			
				case 2: 
				consultar();
				break;
			
				case 3: 
				deletar();
				break;
				
				case 4:
				printf("Obrigado por utilizar o nosso sistema!\n");
				return 0;
				break;
			
			
				default: printf("Essa op��o n�o est� dispon�vel.\n");// Respons�vel por definir os limites do MENU
				system("pause");
				break;
		}			//Aqui � o fim da programa��o
			}
				}
			
	
	
	
	


