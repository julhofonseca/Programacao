Numeros = []

for i in range(0,10,1): 
    Num = int(input('Digite um numero: '))
    Numeros.append(Num)

print('Os numeros digitados foram: ')

for i in range (9,-1,-1): 
    print(Numeros[i])