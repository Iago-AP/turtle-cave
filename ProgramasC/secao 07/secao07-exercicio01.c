#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variáveis
	int n, maior = 0;

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &n);

	//Processamento
	while(n != 0){
		//Processamento
		if(n > maior){
			maior = n;
		}//Saida
		printf("Informe um número: ");
		scanf("%d", &n);
	}
	//Saida
	printf("O maior número é %d", maior);
}
