#Suma con Límite
#Erick Segura Sánchez

n=int(input('Escribe cuantos numeros vas a introducir: '))
SPA=0
SIM=0
CIM=0
for i in range (1,n+1):
    num=int(input(f'Escribe tu numero {i}: '))
    if num % 2 == 0:
        SPA+=num
    else:
        SIM+=num
        CIM+=1

prom=SIM/CIM

print(f'La suma de los numeros pares es {SPA}')
print(f'La suma de los numeros impares es {SIM} y su promedio es {prom}')


