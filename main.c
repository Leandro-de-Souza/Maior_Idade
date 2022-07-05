#include <stdio.h>


int main(){


    int N, maioridade, posicaomaior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char nomes[N][80];
    int idades[N];

    for (int i = 0; i < N; i++) {
		printf("Dados da %da pessoa:\n", i + 1);
		printf("Nome: ");
		scanf("%s", &nomes[i][0]);
		printf("Idade: ");
		scanf("%d", &idades[i]);
    }

     maioridade = idades[0];
     posicaomaior = 0;

    for (int i = 1; i < N; i++) {
        if (idades[i] >  maioridade) {
             maioridade = idades[i];
             posicaomaior = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nomes[posicaomaior]);

    return 0;
}
