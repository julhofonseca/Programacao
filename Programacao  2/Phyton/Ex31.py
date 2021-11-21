input("Pressione enter para iniciar: ")

F1=-1
F2=1
F3=1

for i in range(1,21,1): #range ( parte do 1, vai até inteiro menor que 21, no passo 1 em 1 )  
    Fn = F1+F2+F3
    print(f"{Fn}")
    F3=F2
    F2=F1
    F1=Fn