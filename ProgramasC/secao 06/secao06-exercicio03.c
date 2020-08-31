#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variáveis
	int numero, p = 0, i = 0;

	//Entradas
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		p = numero;
	//Processamento
	}else{
		i = numero;
	}
	//Saida: colocar \n faz pular uma linha
	printf("O número %d é par\n", p);
	printf("O número %d é impar", i);
}
