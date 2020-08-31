#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main (){
	//Declaração de variáveis
	float altura, peso_ideal;

	//Entrada
	printf("Qual a sua altura? ");
	scanf("%f", &altura);

	//Processamento
	peso_ideal = (72.7 * altura) - 58;

	//Saida: %.2f = para informar apenas 2 casa decimais após o ponto.
	printf("Seu peso ideal seria %.2f", peso_ideal);

}
