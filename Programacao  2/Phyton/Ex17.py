

A = int(input('Digite o valor A: '))
B = int(input('Digite o valor B: '))
C = int(input('Digite o valor C: '))

M = (B*B) + (C*C)
N = (A*A) + (C*C)
O = (A*A) + (B*B)
P = (A*A)
Q = (A*A)
R = (C*C)

if M==P or N==Q or O==R:
 print(f" E um triângulo retângulo")
else:
 print(f" Não formam um triângulo retângulo!")