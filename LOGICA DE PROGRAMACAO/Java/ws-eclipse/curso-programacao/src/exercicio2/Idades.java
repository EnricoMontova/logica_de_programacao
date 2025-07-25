package exercicio2;

import java.util.Scanner;

public class Idades {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		String nome1, nome2;
		int idade1, idade2;
		double media;
		
		System.out.println("DADOS DA 1a PESSOA");
		System.out.print("NOME: ");
		nome1 = sc.nextLine();
		System.out.print("IDADE: ");
		idade1 = sc.nextInt();
		
		System.out.println("DADOS DA 2a PESSOA");
		System.out.print("NOME: ");
		sc.nextLine();
		nome2 = sc.nextLine();
		System.out.print("IDADE: ");
		idade2 = sc.nextInt();
		
		media = ((double)idade1 + idade2) / 2;
		
		System.out.println("A MEDIA ENTRE AS IDADE DE " + nome1 + " E " 
							+ nome2 + ": " + String.format("%.2f", media));
		
		sc.close();
	}

}
