#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variável
	int numero;

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		//Processamento
		if(numero >0){
			//Saida
			printf("O número %d é par e positivo.", numero);
		//Processamento
		}else{
			//Saida
			printf("O número %d é par e negativo.", numero);
		}
	//Processamento
	}else{
		//Processamento
		if(numero > 0){
			//Saida
			printf("O número %d é impar e positivo.", numero);
		//Processamento
		}else{
			//Saida
			printf("O número %d é impar e negativo.", numero);
		}
	}
}
