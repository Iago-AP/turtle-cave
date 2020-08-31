#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variável
	float indice;

	//Entrada
	printf("Informe o índice de poluição: ");
	scanf("%f", &indice);

	//Processamento
	if(indice >= 0.3 && indice < 0.4){
		//Saida
		printf("Atenção: Indústrias do 1º grupo devem suspender as atividades.");
	//Processamento
	}else if(indice >= 0.4 && indice < 0.5){
		//Saida
		printf("Atenção: Indústrias do 2º grupo devem suspender as atividades");
	//Processamento
	}else if(indice >= 0.5){
		//Saida
		printf("Atenção: Todos os grupos devem suspender as atividades");
	}
}
