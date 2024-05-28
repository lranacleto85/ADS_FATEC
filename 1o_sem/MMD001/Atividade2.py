import math

# Função para calcular o fatorial
def fatorial(n):
    if n == 0 or n == 1:
        return 1
    elif n < 0:
        return -2
    else:
        return n * fatorial(n - 1)

# Função para calcular a combinação, arranjo ou permutação
def combinatoria(opcao, n, k):
    if opcao == 1:  # Permutação de n
        return fatorial(n)
    elif opcao == 2:  # Arranjo de n tomados de k em k
        if k > n:
            return -2
        else:
            return fatorial(n) // fatorial(n - k)
    elif opcao == 3:  # Combinação de n tomados de k em k
        if k > n:
            return -2
        else:
            return fatorial(n) // (fatorial(k) * fatorial(n - k))
    else:
        print(f"OPCAO {opcao}: OPERACAO INEXISTENTE")
        return -2

# Testando os casos
n = 5
k = 2
print("***********************************************************")
print("ANALISE COMBINATORIA (SEM REPETICAO)")
print(f"Considerando n = {n} e k = {k} em cada uma das opcoes")
print("***********************************************************")

for opcao in range(1, 4):
    if opcao == 1:
        print(f"OPCAO {opcao}: P({n}) = {combinatoria(opcao, n, k)}")
    elif opcao == 2:
        print(f"OPCAO {opcao}: A({n},{k}) = {combinatoria(opcao, n, k)}")
    elif opcao == 3:
        print(f"OPCAO {opcao}: C({n},{k}) = {combinatoria(opcao, n, k)}")
    else:
        print(f"OPCAO {opcao}: OPERACAO INEXISTENTE")

# Testando alguns casos
print("\n***********************************************************")
print("*** Analisando alguns casos validos e invalidos ***")
print("***********************************************************")

nota = 0.0
soma = 0

if combinatoria(1, 0, 1) == 1:
    soma += 1
    print(f"P(0) = {combinatoria(1, 0, 1)}, resposta correta")
else:
    print(f"Sua resposta: P(0) = {combinatoria(1, 0, 1)}")
    print("Mas P(0) = 1, resposta incorreta")

# Os outros casos de teste seguem o mesmo padrão de verificação

print("\n***************************")
print(f"Nota da atividade = {10 * nota / 8:.2f}")
print("*****************************")
