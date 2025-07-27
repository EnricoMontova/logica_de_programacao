from math import sqrt

base = float(input("BASE DO RETANGULO: "))
altura = float(input("ALTURA DO RETANGULO: "))

area = base * altura
perimetro = 2 * (base + altura)
diagonal =  sqrt(base ** 2 + altura ** 2)

print(f"AREA = {area:.4f}\n"
      f"PERIMETRO = {perimetro:.4f}\n"
      f"DIAGONAL = {diagonal:.4f}\n"
      )


