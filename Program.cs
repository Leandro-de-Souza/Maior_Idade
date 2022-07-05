using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_MAIOR_IDADE {
    internal class Program {
        static void Main(string[] args) {

            int N, maioridade, posicaomaior;

            Console.Write("Quantas pessoas voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            String[] nomes = new String[N];
            int[] idades = new int[N];

            for (int i = 0; i < N; i++) {
                Console.WriteLine("Dados da " + (i + 1) + "a pessoa:");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());
            }

            maioridade = idades[0];
            posicaomaior = 0;

            for (int i = 1; i < N; i++) {
                if (idades[i] > maioridade) {
                    maioridade = idades[i];
                    posicaomaior = i;
                }
            }

            Console.WriteLine("PESSOA MAIS VELHA: " + nomes[posicaomaior]);

        }
    }
}
