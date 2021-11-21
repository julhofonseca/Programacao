
Num = int(input('Digite um numero N positivo menor que 100: '))

while Num <=0:
    print(f"Erro! Apenas números positivos")
    Num = int(input("Digite novamente: "))

while Num >=100:
    print(f"Erro! Apenas números menores que 100")
    Num = int(input("Digite novamente: "))

A=1
B=1
Soma=0

for i in range(0,Num,1):
    A=A+B
    B=B+2
    print(f"{A}")
    Soma=Soma+A

print(f"O resultado da soma  e: {Soma}")