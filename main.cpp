#include <bits/stdc++.h>

using namespace std;

int main()
{

       int N, maioridade, posicaomaior;

       cout << "Quantas pessoas voce vai digitar? ";
       cin >> N;

       string nomes[N];
       int idades[N];

       for (int i = 0; i < N; i++) {
            cout << "Dados da " << i + 1 << "a pessoa:" << endl;
            cout << "Nome: ";
            cin >> nomes[i];
            cin.ignore(INT_MAX, '\n');
            cout << "Idade: ";
            cin >> idades[i];
       }

       maioridade = idades[0];
       posicaomaior = 0;

       for (int i = 1; i < N; i++) {
           if (idades[i] >  maioridade) {
               maioridade = idades[i];
               posicaomaior = i;
           }
       }

       cout << "PESSOA MAIS VELHA: " << nomes[posicaomaior] << endl;


    return 0;
}
