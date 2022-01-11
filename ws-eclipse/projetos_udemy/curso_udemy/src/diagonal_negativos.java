import java.util.Locale;
import java.util.Scanner;

public class diagonal_negativos {
public static void diagonal_negativos() {
	
 Locale.setDefault(Locale.US);
 Scanner sc = new Scanner(System.in);
 
 int N, M, i , j, negativos;
 
 System.out.print("Quantas linhas vai ter a matriz? ");
 M = sc.nextInt();
 
 System.out.print("Quantas colunas vai ter a matriz? ");
 N = sc.nextInt();
 int[][] mat = new int[M][N];
 
 for (i = 0; i < M; i++) {
	 for (j = 0; j < N; j++) {
		 System.out.print("Elemento [" + i + "," + j + "]: ");
		 mat[i][j] = sc.nextInt();
 }
 } 
 
 System.out.println("\nMATRIZ DIGITADA:");
 for (i = 0; i < M; i++) {
	 for (j = 0; j < N; j++) {
		 System.out.println(mat[i][j] + " ");
	 }
	 System.out.println();
 }
 
 for (i = 0; i < M; i++) {
	 for (j = 0; j < N; j++) {
		 if(mat[i][j] < 0) {
			 negativos = negativos + 1;
		 }
 }
 }
 
 System.out.println("\nDIAGONAL PRINCIPAL:");
 System.out.println(mat[i][i]);
 
 System.out.println("QUANTIDADE DE NEGATIVOS : " + negativos);
 
 
 sc.close();

	}

}
