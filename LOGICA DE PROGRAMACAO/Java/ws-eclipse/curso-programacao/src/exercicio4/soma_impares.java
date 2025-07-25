package exercicio4;

import java.util.Scanner;

public class soma_impares {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x, y, troca, soma;
		
		System.out.println("DIGITE DOIS NUMEROS: ");
		x = sc.nextInt();
		y = sc.nextInt();
		
		if (x > y) {
			troca = x;
			x = y;
			y = troca;
		}
		
		System.out.print("IMPARES ENTRE " + x + " E " + y + ": ");
		
		soma = 0;
		for (int i = x + 1; i < y; i++) {
			if (i % 2 != 0) {
				System.out.print(i + " ");
				soma = soma + i;
			}
		}
		
		System.out.println();
		System.out.println("RESULTADO DA SOMA: " + soma);
		
		sc.close();
	}

}
