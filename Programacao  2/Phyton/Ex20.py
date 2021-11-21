
P1 = float(input('Digite a nota da p1: '))
P2 = float(input('Digite a nota da p2: '))

Media = (P1 + P2*2)/3
print(f"A Nota Final é:{Media: .2f}")

if Media>=5:
  print(f"Aprovado!")
else:
  print(f"Reprovado!")