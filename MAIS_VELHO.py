
N = int(input("Quantas pessoas voce vai digitar? "))

nomes = [0 for x in range(N)]
idades = [0 for x in range(N)]

for i in range(0, N):
    print(f"Dados da {i + 1}a pessoa:")
    nomes[i] = input("Nome: ")
    idades[i] = int(input("Idade: "))

maioridade = idades[0]
posicaomaior = 0

for i in range(1, N):
    if idades[i] > maioridade:
        maioridade = idades[i]
        posicaomaior = i

print(f"PESSOA MAIS VELHA: {nomes[posicaomaior]}")

