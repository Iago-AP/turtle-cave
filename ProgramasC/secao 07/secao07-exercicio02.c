#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Processamento. i++ é para que a variável i seja adicionada mais 1 (um) a ela mesma.
	for(int i = 1; i <= 100; i++){
		//Saída
		printf("%d\n", i);
		//Processamento
		if(i % 10 == 0){
			//Saída
			printf("Múltiplo de 10\n");
		}
	}
}
