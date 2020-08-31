package br.com.geekuniversity.secao03;

import java.util.Scanner;

public class Exercicio07 {

	public static void main(String[] args) {
		float peso_ideal, altura;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Informe a sua altura: ");
		altura = teclado.nextFloat();
		
		//Cast para informar que o resultado da multiplicação é Float e não Double
		peso_ideal = (float)(altura * 72.7) - 58;
		
		System.out.println("Seu peso ideal é: " + peso_ideal);
		
		teclado.close();
		
	}

}
