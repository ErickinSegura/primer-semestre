#Numeros Pares
#Erick Segura Sánchez

a=int(input('Escribe el primer número: '))
b=int(input('Escribe el segundo número: '))

print(f'{a}')

while a<=b:
    if a%2 == 0:
        print(f'{a}')
        a+=2
    else:
        a+=1
  
    

