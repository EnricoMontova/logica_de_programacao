N = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(N)]

soma = 0
for i in range(0, N):
    vet[i] = int(input(f"vet[{i}]: "))
    soma = soma + vet[i]

media = soma / N

print(f"SOMA: {soma}\n"
      f"MEDIA: {media}")

