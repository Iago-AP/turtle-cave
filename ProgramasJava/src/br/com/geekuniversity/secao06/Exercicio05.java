package br.com.geekuniversity.secao06;

import java.util.Scanner;

public class Exercicio05 {

	public static void main(String[] args) {
		float p, m, excesso;
		String e ="excesso";
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Informe o peso dos peixes: ");
		p = teclado.nextFloat();
		
		if(p > 50) {
			m = (float)(p - 50) * (float)4.00;
			excesso = (float)(p - 50);
			System.out.printf("Você deverá pagar R$ %.2f em multas\n", m);
			System.out.printf("Pelo excesso de %.2f Kg", excesso);
		}else {
			m = 0;
			e = "0,00";
			System.out.printf("Multas: R$ %.2f\n", m);
			System.out.printf("Excesso: %s Kg", e);
		}
		teclado.close();
	}

}
