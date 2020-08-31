package br.com.geekuniversity.secao02;

import java.util.Scanner;

public class Exercicio02 {

	public static void main(String[] args) {
		//Váriaveis
		int num1, num2, soma, multiplicacao;
		Scanner teclado = new Scanner(System.in);
		
		//Entradas
		System.out.println("Informe o primeiro número: ");
		num1 = teclado.nextInt();
		System.out.println("Informe o segundo número: ");
		num2 = teclado.nextInt();

		//Processamento
		soma = num1 + num2;
		multiplicacao = soma * num1;
		
		//Saídas
		System.out.println("O resultado da multiplicacao é " + multiplicacao);
		
		teclado.close();
		
	}

}
