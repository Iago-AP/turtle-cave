package br.com.geekuniversity.secao03;

import java.util.Scanner;

public class Exercicio06 {

	public static void main(String[] args) {
		int horas_trabalhadas;
		float valor_por_hora, salario;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Qual o valor que você ganha por hora? ");
		valor_por_hora = teclado.nextFloat();

		System.out.println("Quantas horas você trabalhou neste mês? ");
		horas_trabalhadas = teclado.nextInt();

		salario = (horas_trabalhadas * valor_por_hora);

		System.out.println("Neste mês você vai receber R$: " + salario);

		teclado.close();
	}

}
