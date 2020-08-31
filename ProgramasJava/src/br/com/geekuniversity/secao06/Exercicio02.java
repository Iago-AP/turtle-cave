package br.com.geekuniversity.secao06;

import java.util.Scanner;

public class Exercicio02 {

	public static void main(String[] args) {
		int numero, a, b;
		Scanner teclado = new Scanner(System.in);

		System.out.printf("Informe um número: ");
		numero = teclado.nextInt();
		
		if(numero > 0) {
			a = numero;
			System.out.println(a);
		}else {
			b = numero;
			System.out.println(b);
		}
		teclado.close();
	}

}
