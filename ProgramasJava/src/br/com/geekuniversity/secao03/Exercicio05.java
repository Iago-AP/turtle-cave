package br.com.geekuniversity.secao03;

import java.util.Scanner;

public class Exercicio05 {

	public static void main(String[] args) {
		//Variáveis
		int metros, centimetros;
		Scanner teclado = new Scanner(System.in);
		
		//Entradas
		System.out.println("Informe o valor em metros: ");
		metros = teclado.nextInt();
		
		//Processamento
		centimetros = (metros * 100);
		
		//Saídas
		System.out.println(metros +" Metros em centimetros é "+ centimetros);
		
		teclado.close();
	}

}
