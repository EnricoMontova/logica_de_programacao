package exercicio6;

import java.util.Scanner;

public class diagonal_negativos {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N, negativos;
		
		System.out.print("ORDEM DA MATRIZ: ");
		N = sc.nextInt();
		
		int[][] mat = new int[N][N];
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("MAT[" + i + "][" + j + "]: ");
				mat[i][j] = sc.nextInt();
				}
		}
		
		System.out.print("DIAGONAL PRINCIPAL DA MATRIZ: ");
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == j) {
					if (i < N - 1 && j < N - 1) {
						System.out.print(mat[i][j] + ", ");
					} else {
						System.out.print(mat[i][j]);
					}
				}
			}
		}
		
		negativos = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (mat[i][j] < 0) {
					negativos++;
				}
			}
		}
		System.out.println("\nNUMEROS NEGATIVOS PRESENTES NA MATRIZ: " + negativos);
	
		sc.close();
	}

}
