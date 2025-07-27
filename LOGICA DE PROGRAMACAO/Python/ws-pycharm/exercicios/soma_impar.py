x = int(input("Digite um valor: "))
y = int(input("Digite outro valor: "))

if x > y:
    troca = x
    x = y
    y = troca

soma = 0
for i in range(x+1, y):
    if i % 2 != 0:
        soma = soma + i
        print(i)

print(f"A soma dos numeros impares entre "
      f"{x} e {y} é {soma}")