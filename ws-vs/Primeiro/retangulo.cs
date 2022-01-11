using System;
using System.Globalization;

namespace Programa {
    class Program {
        static void Main(string[] args) {

            int base, altura, diagonal, area, perimetro;

            Console.Write("Digite o valor da base do retangulo : ");
            base = int.parse(console.readline());

            Console.Write("Digite o valor da altura do retangulo : ");
            altura = int.parse(console.readline());

            area = base * altura;
            perimetro = (2 * base) + (2 * altura);
            diagonal = base ^1/2;

            Console.Write("Valor da aree é  : " + area);
            Console.Write("Valor do perimetro é  : " + perimetro);
            Console.Write("Valor da diagonal é  : " + diagonal);

        }
    }
}



