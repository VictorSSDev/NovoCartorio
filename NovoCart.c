#include <stdio.h>// biblíoteca responsavél pela comunicação com o usuário.
#include <stdlib.h>// biblíoteca de alocação de espaço em memória.
#include <locale.h>// biblíoteca de alocação de texto por região.
#include <string.h>//biblíoteca responsável por cuidar das string.
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o cpf a ser registrado\n");//Aqui é onde coletamos a informação do usuário
	scanf("%s", cpf);//Aqui armazenamos o valor o valor da variável, refere - se a string
	
	strcpy(arquivo, cpf); //responsável por copiar o valor das string
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo novo em branco, o "w" significa ESCREVA o novo arquivo.
	fprintf(file,cpf);//aqui é salvo o valor da variável.
	fclose(file);//aqui é o fechamento do arquivo.
	
	file= fopen(arquivo, "a");//Aqui é responsável por copiar os valores da string, o "a" significa ATUALIZAÇÃO. do arquivo já existente.
	fprintf(file,",");//Aqui temos uma vírgula a caráter de separação de informações
	fclose(file);//Aqui é o fechamento do arquivo
	
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
	
	system("pause");//Aqui é responsável por da uma pausa no programa, para que o usuário entenda oque houve e decida oque fará depois.
	
}
	


int consultar()
{
	setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
	char cpf[40];// Aqui é a criação da váriavel, cpf com 40 espaços livre para dados.
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado\n");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if(file==NULL)// Aqui é responsável por dizer SE o dado existe no Banco de Dados da empresa ou não.
	{
		printf("Não foi possivel localizar o arquivo.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//Aqui temos uma estrutura de repetição
	{
		printf("\n essas são as informações do usuário\n");
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
		printf("Esse CPF não foi encontrado no sistema.\n");
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
			printf("#####Cartório do Grajaú#####\n\n");
			printf("Escolha a opção desejada do Menu\n\n");//Início do MENU
			printf("\t1 Registrar Nomes\n");
			printf("\t2 Consultar nomes\n");
			printf("\t3 Deletar Nomes\n");
			printf("\t4 Sair do sistema\n");
	
			scanf("%d", &opcao);
	
			system("cls");// Responsável pela limpeza de tela, retira todo o excesso de informação.
	
			switch(opcao)
			{
				case 1: 
				registro();//Aqui é a chamada das funções
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
			
			
				default: printf("Essa opção não está disponível.\n");// Responsável por definir os limites do MENU
				system("pause");
				break;
		}			//Aqui é o fim da programação
			}
				}
			
	
	
	
	


