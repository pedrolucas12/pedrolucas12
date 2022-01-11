using System.Globalization;

namespace Programa {
    class Program {
        static void Main(string[] args) {

            int numero1, numero2, impar;

            Console.WriteLine("Digite dois valores : ");
            numero1 = int.Parse(Console.ReadLine());
            numero2 = int.Parse(Console.ReadLine());

            if (( numero1 % 2 != 0) && ( numero2 % 2 != 0)){
                impar = numero1 + numero2;
                else if(( numero1 % 2 != 0) && ( numero2 % 2 = 0)){
                    impar = numero1;
                    else{
                        impar = 0;
                    }
                }
            }

            Console.WriteLine("SOMA DOS IMPARES " + impar)

            }
    }
}