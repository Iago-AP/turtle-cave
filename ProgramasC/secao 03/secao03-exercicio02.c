#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main (){
	//Declaração de variáveis
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;

	//Entradas
	printf("Informar valor da quantidade mínima: ");
	scanf("%d", &quantidade_minima);
	printf("Informar valor da quantidade máxima: ");
	scanf("%d", &quantidade_maxima);

	//Processamento
	estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

	//Saida: %.2f = para informar apenas 2 casa decimais após o ponto.
	printf("O resultado do estoque médio é %.2f", estoque_medio);

}
