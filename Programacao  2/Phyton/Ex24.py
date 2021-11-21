
Sexo = str(input('Digite o sexo: '))

while ((Sexo!='F' and Sexo!='f') and (Sexo!='M' and Sexo!='m')):
 print(f"Erro! Somente F ou M")
 Sexo = str(input("Digite novamente: "))

if Sexo =='m' or Sexo=='M':
 print(f"Sexo Masculino") 
else:
 print(f"Sexo Feminino ")