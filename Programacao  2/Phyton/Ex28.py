Num = int(input('Digite um número do intervalo: '))

while Num <=0 or Num>10:
    print(f"Erro! Apenas valores do intervalo")
    Num = int(input("Digite novamente: "))

for i in range(1,21,1): #range ( parte do 1, vai até inteiro menor que 21, no passo 1 em 1 )  
    Res = Num * i
    print(f'{Num} x {i} = {Res}')