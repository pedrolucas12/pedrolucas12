import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {
public static void soma_vetor(String[] args) {
	
 Locale.setDefault(Locale.US);
 Scanner sc = new Scanner(System.in);
 
 int N, i, soma, media;
 
 System.out.println("Quantos numeros voce vai digitar : ");
 N = sc.nextInt();
 
 int[] vet = new int[N];
 
 for(i=0; i<N ; i++) {
	 System.out.println("Digite um numero : ");
	 vet[i] = sc.nextInt();
 }
 
 System.out.println("VALORES " );
 System.out.println(String.format("%.1f", vet[i]));
 
 soma = vet[i];
 media = vet[i] / N;
 
 System.out.println("SOMA " + soma);
 System.out.println("MEDIA" + media);
 

	}

}
