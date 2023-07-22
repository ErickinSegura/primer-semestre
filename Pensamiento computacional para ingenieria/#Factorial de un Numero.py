#Factorial de un Número
#Erick Segura Sánchez

num=int(input('Escribe tu número: '))
mul=1
if num >= 0:
    for i in range (1,num+1):
        mul=mul*i
    print(mul)    
else:
    print('Error')

    