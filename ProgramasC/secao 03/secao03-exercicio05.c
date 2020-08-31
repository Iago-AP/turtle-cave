#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main (){
	//Declaração de variáveis
	int metros, centimetros;

	//Entrada
	printf("Informe o valor em metros: ");
	scanf("%d", &metros);

	//Processamento
	centimetros = (metros *100);

	//Saida
	printf("%d metros é igual a %d cm", metros, centimetros);
}
