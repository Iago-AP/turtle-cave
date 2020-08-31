#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Processamento. i++ é para que a variável i seja adicionada mais 1 (um) a ela mesma.
	for(int i = 100; i <= 200; i++){
		if(i % 2 != 0){
			//Saída
			printf("%d\n", i);
		}
	}
}
