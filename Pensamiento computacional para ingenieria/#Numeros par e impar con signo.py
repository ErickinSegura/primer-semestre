#Numeros par e impar con signo
#Erick Segura Sánchez


#Input
num=int(input('Escribe tu número '))


#Output
if num > 0:
    if num%2 == 0:
        print('El número es positivo y par')
    else:
        print('El número es positivo e impar') 
else:
    if num%2 == 0:
        print('El número es negativo y par')
    else:
        print('El número es negativo e impar')     

