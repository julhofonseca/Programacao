Num = int(input('Digite um numero positivo para a tabuada: '))

while Num <=0:
    print(f"Erro! Apenas numeros positivos")
    Num = int(input("Digite novamente: "))

a = int(input('Digite o início do intervalo da tabuada: '))
b = int(input('Digite o fim do intervalo da tabuada: '))

while b<a:
    print(f"Erro! Fim do intervalo deve ser maior que o início")
    b = int(input("Digite novamente o fim do intervalo: "))

for i in range(b, a-1, -1): 
    Res = Num * i
    print(f'{Num} x {i} = {Res}')