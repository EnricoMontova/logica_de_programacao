package exercicio5;

import java.util.Scanner;

public class soma_vetor {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N;
		double soma, media;
		
		System.out.print("Quantos numeros serao inseridos no vetor? ");
		N = sc.nextInt();
		
		double[] vet = new double[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("vet[" + i + "]: ");
			vet[i] = sc.nextInt();
		}
		System.out.println("Armazenando... ");
		
		System.out.println("DADOS DO VETOR:");
		for (int i = 0; i < N; i++) {
			if (i < N - 1) {
				System.out.print("vet[" + i + "]: " + vet[i] + ", ");	
			} else {
				System.out.println("vet[" + i + "]: " + vet[i]);
			}
		}
		
		soma = 0;
		for (int i = 0; i < N; i++) {
			soma = soma + vet[i];
		}
		
		media = soma / N;
		
		System.out.println("\nSOMA: " + soma);
		
		System.out.println("MEDIA: " + media);
		
		sc.close();
	}

}
