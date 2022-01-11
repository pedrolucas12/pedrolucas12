using System;
using System.Globalization;

namespace Programa {
    class Program {
        static void Main(string[] args) {

            int valor1, valor2, valor3, menor;

            Console.WriteLine("Digite o primeiro valor : ");
            valor1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o segundo valor : ");
            valor2 = int.Parse(Console.ReadLine());        

            Console.WriteLine("Digite o terceiro valor : ");
            valor3 = int.Parse(Console.ReadLine()); 

            if((valor1 < valor2) && (valor1 < valor3)){
                menor = valor1;
                else if((valor2 < valor1) && (valor2 < valor3)){
                    menor = valor2;
                    else{
                        menor = valor3;
                    }
                }
            }

            Console.WriteLine("O menor valor é "+ menor);
                
            }
    }
}   