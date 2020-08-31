#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variáveis
	int num1, num2, num3, num4, q1, q2, q3, q4;

	//Entradas
	printf("Informe o número 1: ");
	scanf("%d", &num1);
	printf("Informe o número 2: ");
	scanf("%d", &num2);
	printf("Informe o número 3: ");
	scanf("%d", &num3);
	printf("Informe o número 4: ");
	scanf("%d", &num4);

	//Processamentos
	q1 = num1 * num1;
	q2 = num2 * num2;
	q3 = num3 * num3;
	q4 = num4 * num4;

	//Processamento
	if(q3 >= 1000){
		//Saida
		printf("Quadrado 3: %d", q3);
	//Processamento
	}else{
		//Saidas
		printf("Número 1: %d, Quadrado 1: %d\n", num1, q1);
		printf("Número 2: %d, Quadrado 2: %d\n", num2, q2);
		printf("Número 3: %d, Quadrado 3: %d\n", num3, q3);
		printf("Número 4: %d, Quadrado 4: %d\n", num4, q4);
	}
}
