Numeros = []

for i in range(0,10,1): 
    Num = int(input('Digite um numero: '))
    Numeros.append(Num)

print('O maior valor e: ')

Maior=Numeros[0] 
for i in range (0,10,1): 
    if Numeros[i]>Maior: 
     Maior=Numeros[i] 
print(Maior)