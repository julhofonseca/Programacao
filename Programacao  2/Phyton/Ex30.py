
input("Pressione enter para iniciar: ")

F1=1
F2=0

for i in range(1,31,1):
    Fn = F1+F2
    print(f"{Fn}")
    F1=F2
    F2=Fn