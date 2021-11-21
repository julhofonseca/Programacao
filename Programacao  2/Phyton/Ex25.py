Num = int(input('Digite o número 5 para a tabuada: '))

while Num !=5:
    print(f"Erro!Apenas o número 5")
    Num = int(input("Digite novamente: "))

for i in range(1, 11, 1):
    Res = Num * i
    print(f'{Num} x {i} = {Res}')

    