#include <stdio.h>
#include <string.h>

int main(){
	//Variáveis
	char nome[100], senha[100];

	//Entradas
	printf("Informe o nome: ");
	gets(nome);
	printf("Informe a senha: ");
	gets(senha);

	//Processamento - strcmp = String Comparation, verifica se os dois vetores são iguais
	while(!strcmp(nome, senha)){
		printf("Nome de usuário e senha devem ser diferentes.\n");
		printf("Informe o nome: ");
		gets(nome);
		printf("Informe a senha: ");
		gets(senha);
	}

}
