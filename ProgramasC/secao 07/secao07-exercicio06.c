#include <stdio.h>

int main(){
	//Variáveis
	int numero;

	//Entradas
	printf("Informe um número entre 1 e 10: ");
	scanf("%d", &numero);

	//Processamento
	while(numero <1 || numero > 10){
		printf("Informe um número entre 1 e 10: ");
		scanf("%d", &numero);
	}
	for(int i = 1; i <= 10; i++){
		//5 x 1 = 5
		printf("%d x %d = %d\n", numero, i, (numero * i));
	}
}
