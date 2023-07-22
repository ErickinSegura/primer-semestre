#Tipo de Triangulos
#Erick Segura Sánchez


#Input

lad1 = int(input('Lado 1: '))
lad2 = int(input('Lado 2: '))
lad3 = int(input('Lado 3: '))

if lad1>0 and lad2>0 and lad3>0 and lad1+lad2>lad3 and lad1+lad3>lad2 and lad2+lad3>lad1:
    if lad1 == lad2 and lad2 == lad3 and lad3 == lad1:
        print('Es un triangulo equilatero')

    elif lad1 != lad2 and lad2 != lad3 and lad3 != lad1:
        print('Es un triangulo escaleno')    
    else:
        print('Es un triangulo isoceles')      
else:
    print('No es un triangulo')