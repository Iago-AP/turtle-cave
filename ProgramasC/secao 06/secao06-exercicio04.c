#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saida)
#include <ctype.h>
//Biblioteca para informar a função "tolower"

int main(){
	//Declaração de variáveis
	float altura, peso_ideal;
	char sexo;

	//Entradas
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	gets(stdin); //corrigir bug: sem esse comando o programa não pede para informar o sexo.
	printf("Informe o sexo m/f: ");
	scanf("%c", &sexo);

	//Processamento: função tolower permite fazer a verificação das variáveis mesmo colocando M ou F.
	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7 * altura) - 58;
		//Saida
		printf("Seu peso ideal seria %.2f\n", peso_ideal);
	}
	//Processamento
	if(tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		//Saida
		printf("Seu peso ideal seria %.2f\n", peso_ideal);
	}
	//Processamento: caso as variáveis informadas não correspondam a f ou m.
	if(tolower(sexo) != 'f' && tolower(sexo) != 'm'){
		//Saida
		printf("Sexo não reconhecido. \n");
	}
}
