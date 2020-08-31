#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main (){
	//Declaração de variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//Entradas
	printf("Qual o valor que você ganha por hora? ");
	scanf("%f", &valor_por_hora);
	printf("Quantas horas você trabalhou neste mês? ");
	scanf("%d", &horas_trabalhadas);

	//Processamento
	salario = (horas_trabalhadas * valor_por_hora);

	//Saida: %.2f = para informar apenas 2 casa decimais após o ponto.
	printf("Neste mês você vai receber R$ %.2f", salario);
}
