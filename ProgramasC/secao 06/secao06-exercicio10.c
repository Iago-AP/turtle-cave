#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variável
	int idade;

	//Entrada
	printf("Informar sua idade: ");
	scanf("%d", &idade);

	//Processamento
	if(idade >= 5 && idade <= 7){
		//Saida
		printf("Infantil A");
	//Processamento
	}else if(idade >= 8 && idade <= 11){
		//Saida
		printf("Infantil B");
	//Processamento
	}else if(idade >= 12 && idade <= 13){
		//Saida
		printf("Juvenil A");
	//Processamento
	}else if(idade >= 13 && idade <= 17){
		//Saida
		printf("Juvenil B");
	//Processamento
	}else if(idade > 18){
		//Saida
		printf("Adulto");
	}

}
