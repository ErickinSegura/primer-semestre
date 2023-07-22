#Suma con While
#Erick Segura Sánchez

n=int(input('Escribe la cantidad de numeros: '))

tot=0
i=0

while i<n:
    num=int(input(f'Escribe el numero '))
    i=i+1
    if num > 0:
        tot=tot+num
    
print(tot)