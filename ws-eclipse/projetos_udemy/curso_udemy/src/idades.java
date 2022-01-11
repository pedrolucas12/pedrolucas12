import java.util.Locale;
import java.util.Scanner;

public class entrada_de_dados {
public static void main(String[] args) {
	
 Locale.setDefault(Locale.US);
 Scanner sc = new Scanner(System.in);
  
 int idade1, idade2, media;
 char nome1, nome2;
 
 System.out.println("Digite o nome da primeira pessoa : ");
 nome1 = sc.next().charAt(0);
 
 System.out.println("Digite a idade da primeira pessoa : ");
 idade1 = sc.nextInt();
 
 System.out.println("Digite o nome da segunda pessoa : ");
 nome2 = sc.next().charAt(0);
 
 System.out.println("Digite a idade da segunda pessoa : ");
 idade2 = sc.nextInt();
 
 media = (idade1 + idade2) / 2;
 
 System.out.println("DADOS >>>>>>>>>>>>");
 System.out.println("Nome : " + nome1);
 System.out.println("Idade : " + idade1);
 System.out.println("Nome : " + nome2);
 System.out.println("Idade : " + idade2);
 System.out.println("A idade media de " + nome1 + " e " + nome2 + " de " + media);
 
}
}
 