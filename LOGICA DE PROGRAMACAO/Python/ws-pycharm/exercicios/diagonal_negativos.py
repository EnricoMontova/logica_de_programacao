N = int(input("ORDEM DA MATRIZ: "))

mat = [[0 for x in range(N)] for y in range(N)]

negativos = 0
for i in range(0, N):
    for j in range(0, N):
        mat[i][j] = int(input(f"mat[{i},{j}]: "))
        if mat[i][j] < 0:
            negativos += 1

print("\nMATRIZ CRIADA:")
for i in range(0, N):
    for j in range(0, N):
        print(f"|{mat[i][j]}|", end=" ")
    print()

print("\nNumeros na diagonal: ")
for i in range(0, N):
    for j in range(0, N):
        if i == j:
            print(f"|{mat[i][j]}|", end=" ")

print(f"\nNumero de negativos na matriz: {negativos}")