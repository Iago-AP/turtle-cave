#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variáveis
	int numero, a, b;

	//Entradas
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		//Saida
		printf("O número %d é positivo", numero);
	//Processamento
	}else{
		b = numero;
		//Saida
		printf("O número %d é negativo", numero);
	}
}
