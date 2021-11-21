


A = float(input('Digite a aceleração: '))
V0 = float(input('Digite a Velocidade Inicial: '))
T = float(input('Digite o tempo de percurso: '))

V = V0 + A*T
print(f"A velocidade do automovel é: {V:.1f}km/h")

if V<=40:
  print(f"Veiculo muito lento")
elif V>40 and V<60:
  print(f"Velocidade permitida")
elif V>60 and V<=80:
 print(f"Velocidade de cruzeiro")
elif V>80 and V<=120:
 print(f"Veiculo rapido")
elif V>120:
 print(f"Veiculo muito rápido!")