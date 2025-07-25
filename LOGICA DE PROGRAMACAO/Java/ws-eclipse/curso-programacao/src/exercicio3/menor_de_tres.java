package exercicio3;

import java.util.Scanner;

public class menor_de_tres {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x, y, z, menor;
		
		System.out.print("NUMERO 1: ");
		x = sc.nextInt();
		System.out.print("NUMERO 2: ");
		y = sc.nextInt();
		System.out.print("NUMERO 3: ");
		z = sc.nextInt();
		
		if (x < y && x < z) {
			menor = x;
		} else if (y < z) {
			menor = y;
		} else {
			menor = z;
		}
		
		System.out.println("O MENOR NUMERO DIGITADO FOI: " + menor);
		
		
		sc.close();
	}

}
