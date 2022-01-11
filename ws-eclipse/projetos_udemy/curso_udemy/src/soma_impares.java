import java.util.Locale;
import java.util.Scanner;

public class soma_impares {
public static void soma_impares(String[] args) {
	
 Locale.setDefault(Locale.US);
 Scanner sc = new Scanner(System.in);
 
 int n1, n2, soma, impar, impar2;
 
 System.out.println("Digite o primeiro numero: ");
 n1 = sc.nextInt();
 
 System.out.println("Digite o segundo numero : ");
 n2 = sc.nextInt();
 
 for(n1 % 2 != 0) {
	 impar = n1;
 }
 
 for(n2 % 2 != 0) {
	 impar2 = n2;
 }
 
 System.out.println("SOMA DOS IMPARES : " + soma);

	}

}
