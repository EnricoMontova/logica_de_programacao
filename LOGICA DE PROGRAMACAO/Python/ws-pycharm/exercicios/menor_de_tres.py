a = int(input("1º valor:  "))
b = int(input("2º valor:  "))
c = int(input("3º valor:  "))

if a < b and a < c:
    menor = a
elif b < c:
    menor = b
else:
    menor = c

print(f"Menor valor: {menor}")