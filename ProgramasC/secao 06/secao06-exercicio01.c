#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variáveis
	int n;

	//Entradas
	printf("Informe seu número: ");
	scanf("%d", &n);

	//Processamento
	if(n > 100){
		//Saida
		printf("%d", n);
	//Processamento
	}else{
		n = 0;
		//Saida
		printf("%d", n);
	}
}
