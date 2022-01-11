using System.Globalization;

namespace Programa {
    class Program {
        static void Main(string[] args) {

            int valor1, valor2;

            Console.WriteLine("Digite o primeiro valor : ");
            valor1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o segundo valor : ");
            valor2 = int.Parse(Console.ReadLine());      

            if(valor1 < valor2){
                Console.WriteLine("CRESCENTE");
                else{
                    Console.WriteLine("DECRESCENTE");
                }
            }  
        }
    }
}