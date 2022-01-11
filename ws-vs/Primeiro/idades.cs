using System;
using System.Globalization;

namespace Programa {
    class Program {
        static void Main(string[] args) {

            int nome1, nome2, idade1, idade2, media;

            Console.Write("Digite o nome da primeira da pessoa : ");
            nome1 = int.parse(console.readline());

            Console.Write("Digite a primeira idade : ");
            idade1 = int.parse(console.readline());

            Console.Write("Digite o nome da segunda pessoa : ");
            nome2 = int.parse(console.readline());

            Console.Write("Digite a segunda idade : ");
            idade2 = int.parse(console.readline());

            media = (idade1 + idade2) / 2;

            Console.Write("A idade media é  : " + media);

        }
    }
}