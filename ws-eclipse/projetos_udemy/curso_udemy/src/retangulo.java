
import java.util.Scanner;

public class Main {
public static void matriz (String[] args) {
	
 Scanner sc = new Scanner(System.in);
 
 int base, altura, diagonal, area, perimetro;
 
 System.out.println("Digite a base do retangulo : ");
 base = sc.nextInt();
 
 System.out.println("Digite a altura do retangulo : ");
 altura = sc.nextInt();
 
 area = base * altura;
 perimetro = (2 * base) + (2 * altura);
 diagonal = (2 * base^1/2);
 
 System.out.println("A area é : " + area);
 System.out.println("O perimetro é : " + perimetro);
 System.out.println("A diagonal é : " + diagonal);
 
}
}
 