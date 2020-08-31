package br.com.geekuniversity.secao06;

import java.util.Scanner;

public class Exercicio04 {

	public static void main(String[] args) {
		float altura, peso_ideal;
		char sexo;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Informe sua altura: ");
		altura = teclado.nextFloat();
		
		//Teclado.next() - Retornar a string digitada | charAt(0) - Retorna o caractere desejado da string digitada  
		System.out.println("Informe o sexo m/f: ");
		sexo = teclado.next().charAt(0);

		//Processamento | '' aspas simples informam que a variável é um caractere.
		if(sexo == 'm') {
			peso_ideal = (float)(72.7 * altura) - 58;
			System.out.printf("Seu peso ideal é %.2f Kg", peso_ideal);
		}
		if(sexo == 'f') {
			peso_ideal = (float)(62.1 * altura) - (float)44.7;
			System.out.printf("Seu peso ideal é %.2f Kg", peso_ideal);
		}
		if(sexo != 'm' && sexo != 'f') {
			System.out.println("Sexo não reconhecido.");
			peso_ideal = 0;
		}
		teclado.close();
	}

}
