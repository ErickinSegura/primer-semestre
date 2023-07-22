#Suma de Positivos
#Erick Segura Sánchez

n=int(input('Escribe la cantidad de numeros: '))

tot=0

for i in range (0,n):
    num=int(input(f'Escribe el numero '))
    if num > 0:
        tot=tot+num

print(tot)
