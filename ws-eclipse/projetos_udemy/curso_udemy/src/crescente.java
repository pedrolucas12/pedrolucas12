import java.util.Locale;
import java.util.Scanner;

public class crescente {
public static void crescente(String[] args) {
	
 Locale.setDefault(Locale.US);
 Scanner sc = new Scanner(System.in);

 int n1, n2;
 
 System.out.println("Digite o primeiro valor: ");
 n1 = sc.next();
 
 System.out.println("Digite o segundo valor : ");
 n2 = sc.next();
 
 while(n1 > n2) {
	 System.out.println("DECRESCENTE");
 }
 
 while(n2 > n1) {
	 System.out.println("CRESCENTE");
 }

}
}
