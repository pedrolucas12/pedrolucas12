using System;
namespace Programa {
    class Program {
        static void Main(string[] args) {

            int N, soma, media, i;

        Console.Write("Quantos numeros voce vai digitar? ");
        N = int.Parse(Console.ReadLine());

        double[] vet = new double[N];

        for (i = 0; i < N; i++) {
            Console.Write("Digite um numero: ");
            vet[i] = double.Parse(Console.ReadLine(), CI);
        }

        Console.WriteLine();
        Console.WriteLine("VALORES :");
        for (i = 0; i < N; i++) {
            Console.WriteLine(vet[i].ToString("F1", CI));
        }

        soma = vet[i];
        media = soma / N;

        Console.WriteLine("SOMA " + soma);
        Console.WriteLine("MEDIA " + media);

        }
    }
}
