#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
	//Declaração de variáveis
	float p, m, excesso;
	char e[8] = "excesso"; // oito caracteres, pois a linguagem C finaliza toda string com '\0';

	//Entradas
	printf("Informe o peso dos peixes: ");
	scanf("%f", &p);

	//Processamento
	if(p > 50){
		excesso = (p - 50);
		m = (p - 50) * 4;
		//Saidas
		printf("Você deverá pagar R$ %.2f em multas,\n", m);
		printf("Pelo excesso de %.2f KG", excesso);
	//Processamento
	}else{
		m = 0;
		e[0] = 0;
		//Saidas
		printf("Multa: %.2f\n", m);
		//chamando a variável char colocando ela como igual a zero.
		printf("Excesso: %d", e[0]);
	}

}
