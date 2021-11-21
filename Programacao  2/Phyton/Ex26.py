Num = int(input('Digite um numero positivo para a tabuada: '))

while Num <=0:
    print(f"Erro! Apenas números positivos")
    Num = int(input("Digite novamente: "))

for i in range(1, 11, 1): 
    Res = Num * i
    print(f'{Num} x {i} = {Res}')